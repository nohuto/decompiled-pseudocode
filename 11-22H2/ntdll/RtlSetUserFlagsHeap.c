/*
 * XREFs of RtlSetUserFlagsHeap @ 0x1800FDEF0
 * Callers:
 *     RtlDebugSetUserFlagsHeap @ 0x180105DC8 (RtlDebugSetUserFlagsHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18002A1DC (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033F80 (RtlBackoff.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18003B10C (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlpHpExtrasGet @ 0x180045B78 (RtlpHpExtrasGet.c)
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x180076254 (RtlpProbeUserBufferSafe.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEvent @ 0x18009EFB0 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180105DC8 (RtlDebugSetUserFlagsHeap.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114F24 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x180121428 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x180121540 (RtlpLogHeapFailure.c)
 */

BOOLEAN __cdecl RtlSetUserFlagsHeap(
        PVOID HeapHandle,
        ULONG Flags,
        PVOID BaseAddress,
        ULONG UserFlagsReset,
        ULONG UserFlagsSet)
{
  char *v6; // rbx
  ULONG v8; // r13d
  int v9; // r10d
  int v10; // edx
  int v11; // ecx
  BOOLEAN v12; // si
  int v13; // r8d
  unsigned __int64 v14; // rcx
  struct _TEB *v15; // rbx
  ULONG v16; // eax
  ULONG v17; // r12d
  unsigned __int8 *v18; // rcx
  int v19; // ecx
  unsigned __int8 *v20; // rbx
  char v21; // r15
  _RTL_CRITICAL_SECTION *v22; // rbx
  int *p_LockCount; // r14
  signed __int32 v25; // r15d
  HANDLE LockSemaphore; // r10
  int v27; // eax
  signed __int32 v29[8]; // [rsp+20h] [rbp-98h] BYREF
  BOOLEAN v30; // [rsp+50h] [rbp-68h]
  char v31; // [rsp+51h] [rbp-67h]
  unsigned __int8 *v32; // [rsp+58h] [rbp-60h]
  struct _TEB *v33; // [rsp+68h] [rbp-50h]
  struct _TEB *v34; // [rsp+70h] [rbp-48h]
  unsigned int v35; // [rsp+D8h] [rbp+20h] BYREF

  v6 = (char *)BaseAddress;
  v31 = 0;
  v30 = 0;
  v8 = UserFlagsSet;
  if ( ((UserFlagsSet | UserFlagsReset) & 0xFFFFF1FF) != 0 )
    goto LABEL_58;
  if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
  {
    v17 = *((_DWORD *)HeapHandle + 29) | Flags;
    if ( (v17 & 0x61000000) != 0 && (v17 & 0x10000000) == 0 )
      return RtlDebugSetUserFlagsHeap(HeapHandle, UserFlagsSet);
    if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
    {
      v18 = RtlpProbeUserBufferSafe((int)HeapHandle, (__int64)BaseAddress);
      v32 = v18;
LABEL_27:
      if ( v18 && (v18[15] & 0x80u) == 0 )
      {
        if ( (v17 & 1) == 0 )
        {
          RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
          v31 = 1;
        }
        v20 = (unsigned __int8 *)(v6 - 16);
        _m_prefetchw(v20);
        if ( v20[15] == 5 )
          v20 -= 16 * v20[14];
        v32 = v20;
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          *((_DWORD *)v20 + 2) ^= *((_DWORD *)HeapHandle + 34);
          if ( v20[11] != (v20[8] ^ (unsigned __int8)(v20[9] ^ v20[10])) )
            RtlpAnalyzeHeapFailure(HeapHandle, v20, BaseAddress);
        }
        if ( (v20[15] & 0x3F) != 0 )
        {
          v21 = v20[10] & ~(unsigned __int8)(UserFlagsReset >> 4);
          v20[10] = v21;
          v20[10] = v21 | (v8 >> 4);
          v30 = 1;
        }
        else
        {
          v33 = NtCurrentTeb();
          v33->LastStatusValue = -1073741811;
          v34 = NtCurrentTeb();
          v34->LastErrorValue = RtlNtStatusToDosError(-1073741811);
          v20 = v32;
        }
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          v20[11] = v20[8] ^ v20[9] ^ v20[10];
          *((_DWORD *)v20 + 2) ^= *((_DWORD *)HeapHandle + 34);
        }
        if ( v31 )
        {
          v22 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)HeapHandle + 44);
          if ( v22->RecursionCount-- == 1 )
          {
            v22->OwningThread = 0LL;
            p_LockCount = &v22->LockCount;
            v25 = _InterlockedCompareExchange(&v22->LockCount, -1, -2);
            if ( v25 != -2 )
            {
              if ( (*(_BYTE *)p_LockCount & 1) != 0 )
                RtlpNotOwnerCriticalSection(v22);
              LockSemaphore = v22->LockSemaphore;
              if ( !LockSemaphore )
                LockSemaphore = RtlpCreateDeferredCriticalSectionEvent((__int64)v22);
              v35 = 0;
              while ( v25 != _InterlockedCompareExchange(p_LockCount, (v25 & 2 | 1) + v25, v25) )
              {
                RtlBackoff(&v35);
                _m_prefetchw(p_LockCount);
                v25 = *p_LockCount;
              }
              if ( (v25 & 2) != 0 )
              {
                if ( LockSemaphore == (HANDLE)-1LL )
                {
                  _InterlockedOr(v29, 0);
                  RtlpWakeByAddress((unsigned __int64)&v22->LockCount, 0);
                  v27 = 0;
                }
                else
                {
                  v27 = ZwSetEvent(LockSemaphore, 0LL);
                }
                if ( v27 < 0 )
                  RtlRaiseStatus(v27);
              }
            }
          }
        }
        return v30;
      }
LABEL_58:
      NtCurrentTeb()->LastStatusValue = -1073741811;
      v15 = NtCurrentTeb();
      v16 = RtlNtStatusToDosError(-1073741811);
      v12 = 0;
      goto LABEL_59;
    }
    if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
    {
      v19 = 9;
    }
    else
    {
      v18 = (unsigned __int8 *)BaseAddress - 16;
      _m_prefetchw((char *)BaseAddress - 16);
      if ( *((char *)BaseAddress - 1) == 5 )
        v18 -= 16 * v18[14];
      if ( (v18[15] & 0x3F) != 0 )
        goto LABEL_26;
      LODWORD(BaseAddress) = (_DWORD)v18;
      v19 = 8;
    }
    RtlpLogHeapFailure(v19, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
    v18 = 0LL;
LABEL_26:
    v32 = v18;
    goto LABEL_27;
  }
  v9 = RtlpHpConvertFlagsToSegmentFlags(Flags);
  v10 = *((_DWORD *)HeapHandle + 55);
  v11 = 0;
  if ( v10 )
    LOBYTE(v11) = v10 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v12 = 1;
  v13 = v9 | 1;
  if ( !v11 )
    v13 = v9;
  if ( !v6 )
    goto LABEL_58;
  if ( (RtlpHpAppCompatFlags & 2) != 0 )
    v6 -= *((_QWORD *)v6 - 2);
  v14 = RtlpHpExtrasGet((__int64)HeapHandle, (__int64)v6, *((_DWORD *)HeapHandle + 5) | (unsigned int)v13, 0LL);
  if ( v14 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    v12 = 0;
  else
    *(_BYTE *)(v14 + 2) = *(_BYTE *)(v14 + 2) & ((16 * ~BYTE1(UserFlagsReset)) | 0xF) | (16 * BYTE1(v8));
  if ( !v12 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v15 = NtCurrentTeb();
    v16 = RtlNtStatusToDosError(-1073741811);
LABEL_59:
    v15->LastErrorValue = v16;
  }
  return v12;
}
