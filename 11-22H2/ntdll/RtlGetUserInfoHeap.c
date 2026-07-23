/*
 * XREFs of RtlGetUserInfoHeap @ 0x180075EA0
 * Callers:
 *     RtlDebugGetUserInfoHeap @ 0x180105124 (RtlDebugGetUserInfoHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18002A1DC (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033F80 (RtlBackoff.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18003B10C (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     RtlpHpGetUserInfo @ 0x1800761EC (RtlpHpGetUserInfo.c)
 *     RtlpProbeUserBufferSafe @ 0x180076254 (RtlpProbeUserBufferSafe.c)
 *     RtlpGetExtraStuffPointer @ 0x180076534 (RtlpGetExtraStuffPointer.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEvent @ 0x18009EFB0 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 *     RtlDebugGetUserInfoHeap @ 0x180105124 (RtlDebugGetUserInfoHeap.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114F24 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x180121428 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x180121540 (RtlpLogHeapFailure.c)
 */

BOOLEAN __cdecl RtlGetUserInfoHeap(
        PVOID HeapHandle,
        ULONG Flags,
        PVOID BaseAddress,
        PVOID *UserValue,
        PULONG UserFlags)
{
  char *v6; // rbx
  int v8; // r10d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  ULONG v13; // r14d
  char *v14; // rcx
  char *v15; // rbx
  __int64 ExtraStuffPointer; // rax
  __int64 v17; // rbx
  _BYTE *v19; // rsi
  signed __int32 v20; // r14d
  int v21; // ecx
  void *DeferredCriticalSectionEvent; // r10
  struct _TEB *v23; // rbx
  int v24; // eax
  signed __int32 v25[8]; // [rsp+48h] [rbp-98h] BYREF
  BOOLEAN v26; // [rsp+78h] [rbp-68h]
  char v27; // [rsp+79h] [rbp-67h]
  char *v28; // [rsp+80h] [rbp-60h]
  struct _TEB *v29; // [rsp+98h] [rbp-48h]
  struct _TEB *v30; // [rsp+A0h] [rbp-40h]
  __int64 v31; // [rsp+A8h] [rbp-38h]
  PVOID v32; // [rsp+E8h] [rbp+8h] BYREF

  v32 = HeapHandle;
  v6 = (char *)BaseAddress;
  v27 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    v8 = RtlpHpConvertFlagsToSegmentFlags(Flags);
    v9 = *((_DWORD *)HeapHandle + 55);
    v10 = 0;
    if ( v9 )
      LOBYTE(v10) = v9 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v11 = v8 | 1;
    if ( !v10 )
      v11 = v8;
    if ( (RtlpHpAppCompatFlags & 2) != 0 )
    {
      if ( v6 )
        v6 -= *((_QWORD *)v6 - 2);
    }
    return RtlpHpGetUserInfo((_DWORD)HeapHandle, (_DWORD)v6, v11, (_DWORD)UserValue, (__int64)UserFlags);
  }
  v13 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v13 & 0x61000000) != 0 && (v13 & 0x10000000) == 0 )
    return RtlDebugGetUserInfoHeap(HeapHandle, UserFlags);
  if ( (v13 & 0x800) != 0 || (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
  {
    v14 = (char *)RtlpProbeUserBufferSafe(HeapHandle, BaseAddress);
    v28 = v14;
    goto LABEL_11;
  }
  if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
  {
    v21 = 9;
  }
  else
  {
    v14 = (char *)BaseAddress - 16;
    _m_prefetchw((char *)BaseAddress - 16);
    if ( *((char *)BaseAddress - 1) == 5 )
      v14 -= 16 * (unsigned __int8)v14[14];
    if ( (v14[15] & 0x3F) != 0 )
      goto LABEL_42;
    LODWORD(BaseAddress) = (_DWORD)v14;
    v21 = 8;
  }
  RtlpLogHeapFailure(v21, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
  v14 = 0LL;
LABEL_42:
  v28 = v14;
LABEL_11:
  if ( !v14 )
    goto LABEL_60;
  if ( v14[15] < 0 )
  {
    if ( (v14[15] & 0x3F) != 0 )
    {
      if ( UserFlags )
        *UserFlags = 0;
      return 1;
    }
LABEL_60:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v23 = NtCurrentTeb();
    v23->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return 0;
  }
  v26 = 0;
  v15 = v6 - 16;
  _m_prefetchw(v15);
  if ( v15[15] == 5 )
    v15 -= 16 * (unsigned __int8)v15[14];
  v28 = v15;
  if ( (v13 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    v27 = 1;
  }
  if ( *((_DWORD *)HeapHandle + 31) )
  {
    *((_DWORD *)v15 + 2) ^= *((_DWORD *)HeapHandle + 34);
    if ( v15[11] != ((unsigned __int8)v15[8] ^ (unsigned __int8)(v15[9] ^ v15[10])) )
      RtlpAnalyzeHeapFailure(HeapHandle, v15, BaseAddress);
  }
  if ( (v15[15] & 0x3F) != 0 )
  {
    if ( (v15[10] & 2) != 0 )
    {
      ExtraStuffPointer = RtlpGetExtraStuffPointer(v15);
      v31 = ExtraStuffPointer;
      if ( UserValue )
        *UserValue = *(PVOID *)(ExtraStuffPointer + 8);
    }
    if ( UserFlags )
      *UserFlags = 16 * (v15[10] & 0xE0);
    v26 = 1;
  }
  else
  {
    v29 = NtCurrentTeb();
    v29->LastStatusValue = -1073741811;
    v30 = NtCurrentTeb();
    v30->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    v15 = v28;
  }
  if ( *((_DWORD *)HeapHandle + 31) )
  {
    v15[11] = v15[8] ^ v15[9] ^ v15[10];
    *((_DWORD *)v15 + 2) ^= *((_DWORD *)HeapHandle + 34);
  }
  if ( v27 )
  {
    v17 = *((_QWORD *)HeapHandle + 44);
    if ( (*(_DWORD *)(v17 + 12))-- == 1 )
    {
      *(_QWORD *)(v17 + 16) = 0LL;
      v19 = (_BYTE *)(v17 + 8);
      v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 8), -1, -2);
      if ( v20 != -2 )
      {
        if ( (*v19 & 1) != 0 )
          RtlpNotOwnerCriticalSection(v17);
        DeferredCriticalSectionEvent = *(void **)(v17 + 24);
        if ( !DeferredCriticalSectionEvent )
          DeferredCriticalSectionEvent = (void *)RtlpCreateDeferredCriticalSectionEvent(v17);
        LODWORD(v32) = 0;
        while ( v20 != _InterlockedCompareExchange((volatile signed __int32 *)v19, v20 + (v20 & 2 | 1), v20) )
        {
          RtlBackoff((unsigned int *)&v32);
          _m_prefetchw(v19);
          v20 = *(_DWORD *)v19;
        }
        if ( (v20 & 2) != 0 )
        {
          if ( DeferredCriticalSectionEvent == (void *)-1LL )
          {
            _InterlockedOr(v25, 0);
            RtlpWakeByAddress(v17 + 8, 0);
            v24 = 0;
          }
          else
          {
            v24 = ZwSetEvent(DeferredCriticalSectionEvent, 0LL);
          }
          if ( v24 < 0 )
            RtlRaiseStatus(v24);
        }
      }
    }
  }
  return v26;
}
