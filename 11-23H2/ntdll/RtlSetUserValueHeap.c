/*
 * XREFs of RtlSetUserValueHeap @ 0x180076940
 * Callers:
 *     RtlDebugSetUserValueHeap @ 0x180107524 (RtlDebugSetUserValueHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18002A00C (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18003AFAC (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlpHpExtrasGet @ 0x180045A18 (RtlpHpExtrasGet.c)
 *     RtlNtStatusToDosError @ 0x1800536B0 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x1800768C4 (RtlpProbeUserBufferSafe.c)
 *     RtlpGetExtraStuffPointer @ 0x180076BA4 (RtlpGetExtraStuffPointer.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEvent @ 0x1800A1070 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F4D50 (RtlpNotOwnerCriticalSection.c)
 *     RtlDebugSetUserValueHeap @ 0x180107524 (RtlDebugSetUserValueHeap.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 *     RtlpAnalyzeHeapFailure @ 0x1801163A4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpLogHeapFailure @ 0x1801229C0 (RtlpLogHeapFailure.c)
 */

BOOLEAN __cdecl RtlSetUserValueHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress, PVOID UserValue)
{
  char v6; // r15
  ULONG v7; // r14d
  int v8; // ecx
  unsigned __int8 *v9; // rbx
  char v10; // al
  __int64 v11; // r10
  int v12; // r11d
  int v13; // edx
  int v14; // ecx
  BOOLEAN v15; // si
  int v16; // r8d
  unsigned __int64 v17; // rcx
  struct _TEB *v19; // rbx
  struct _TEB *v20; // rbx
  __int64 v21; // rbx
  _BYTE *v23; // rdi
  signed __int32 v24; // r14d
  void *DeferredCriticalSectionEvent; // r10
  int v26; // eax
  signed __int32 v27[8]; // [rsp+48h] [rbp-78h] BYREF
  char v28; // [rsp+78h] [rbp-48h]
  BOOLEAN v29; // [rsp+79h] [rbp-47h]
  unsigned __int8 *v30; // [rsp+88h] [rbp-38h]
  struct _TEB *v31; // [rsp+90h] [rbp-30h]
  struct _TEB *v32; // [rsp+98h] [rbp-28h]
  __int64 ExtraStuffPointer; // [rsp+A0h] [rbp-20h]
  PVOID v34; // [rsp+C8h] [rbp+8h] BYREF

  v34 = HeapHandle;
  v6 = 0;
  v28 = 0;
  if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
  {
    v7 = *((_DWORD *)HeapHandle + 29) | Flags;
    if ( (v7 & 0x61000000) != 0 && (v7 & 0x10000000) == 0 )
      return RtlDebugSetUserValueHeap(HeapHandle);
    if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
    {
      v9 = RtlpProbeUserBufferSafe((int)HeapHandle, (__int64)BaseAddress);
      v30 = v9;
LABEL_8:
      if ( !v9 )
      {
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v20 = NtCurrentTeb();
        v20->LastErrorValue = RtlNtStatusToDosError(-1073741811);
        return 0;
      }
      v29 = 0;
      if ( (v7 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        v6 = 1;
        v28 = 1;
      }
      v10 = v9[15];
      if ( (v10 & 0x3F) != 0 )
      {
        if ( v10 >= 0 )
        {
          if ( *((_DWORD *)HeapHandle + 31) )
          {
            *((_DWORD *)v9 + 2) ^= *((_DWORD *)HeapHandle + 34);
            if ( v9[11] != (v9[8] ^ (unsigned __int8)(v9[9] ^ v9[10])) )
              RtlpAnalyzeHeapFailure(HeapHandle, v9, BaseAddress);
          }
          if ( (v9[10] & 2) != 0 )
          {
            ExtraStuffPointer = RtlpGetExtraStuffPointer(v9);
            *(_QWORD *)(ExtraStuffPointer + 8) = UserValue;
            v29 = 1;
          }
          goto LABEL_30;
        }
      }
      else
      {
        v31 = NtCurrentTeb();
        v31->LastStatusValue = -1073741811;
        v32 = NtCurrentTeb();
        v32->LastErrorValue = RtlNtStatusToDosError(-1073741811);
        v30 = 0LL;
        v6 = v28;
      }
      v9 = 0LL;
      v30 = 0LL;
LABEL_30:
      if ( v9 && *((_DWORD *)HeapHandle + 31) )
      {
        v9[11] = v9[8] ^ v9[9] ^ v9[10];
        *((_DWORD *)v9 + 2) ^= *((_DWORD *)HeapHandle + 34);
      }
      if ( v6 )
      {
        v21 = *((_QWORD *)HeapHandle + 44);
        if ( (*(_DWORD *)(v21 + 12))-- == 1 )
        {
          *(_QWORD *)(v21 + 16) = 0LL;
          v23 = (_BYTE *)(v21 + 8);
          v24 = _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 8), -1, -2);
          if ( v24 != -2 )
          {
            if ( (*v23 & 1) != 0 )
              RtlpNotOwnerCriticalSection(v21);
            DeferredCriticalSectionEvent = *(void **)(v21 + 24);
            if ( !DeferredCriticalSectionEvent )
              DeferredCriticalSectionEvent = (void *)RtlpCreateDeferredCriticalSectionEvent(v21);
            LODWORD(v34) = 0;
            while ( v24 != _InterlockedCompareExchange((volatile signed __int32 *)v23, (v24 & 2 | 1) + v24, v24) )
            {
              RtlBackoff((unsigned int *)&v34);
              _m_prefetchw(v23);
              v24 = *(_DWORD *)v23;
            }
            if ( (v24 & 2) != 0 )
            {
              if ( DeferredCriticalSectionEvent == (void *)-1LL )
              {
                _InterlockedOr(v27, 0);
                RtlpWakeByAddress(v21 + 8, 0);
                v26 = 0;
              }
              else
              {
                v26 = ZwSetEvent(DeferredCriticalSectionEvent, 0LL);
              }
              if ( v26 < 0 )
                RtlRaiseStatus(v26);
            }
          }
        }
      }
      return v29;
    }
    if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
    {
      v8 = 9;
    }
    else
    {
      v9 = (unsigned __int8 *)BaseAddress - 16;
      _m_prefetchw((char *)BaseAddress - 16);
      if ( *((char *)BaseAddress - 1) == 5 )
        v9 -= 16 * v9[14];
      if ( (v9[15] & 0x3F) != 0 )
        goto LABEL_7;
      LODWORD(BaseAddress) = (_DWORD)v9;
      v8 = 8;
    }
    RtlpLogHeapFailure(v8, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
    v9 = 0LL;
LABEL_7:
    v30 = v9;
    goto LABEL_8;
  }
  v12 = RtlpHpConvertFlagsToSegmentFlags(Flags);
  v13 = *((_DWORD *)HeapHandle + 55);
  v14 = 0;
  if ( v13 )
    LOBYTE(v14) = v13 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v15 = 1;
  v16 = v12 | 1;
  if ( !v14 )
    v16 = v12;
  if ( (RtlpHpAppCompatFlags & 2) != 0 && v11 )
    v11 -= *(_QWORD *)(v11 - 16);
  v17 = RtlpHpExtrasGet((__int64)HeapHandle, v11, *((_DWORD *)HeapHandle + 5) | (unsigned int)v16, 0LL);
  if ( v17 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    v15 = 0;
  else
    *(_QWORD *)(v17 + 8) = UserValue;
  if ( !v15 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v19 = NtCurrentTeb();
    v19->LastErrorValue = RtlNtStatusToDosError(-1073741811);
  }
  return v15;
}
