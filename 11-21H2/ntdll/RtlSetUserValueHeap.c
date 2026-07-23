/*
 * XREFs of RtlSetUserValueHeap @ 0x180078BC0
 * Callers:
 *     RtlDebugSetUserValueHeap @ 0x1801063CC (RtlDebugSetUserValueHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x180027604 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlpHpExtrasGet @ 0x18003048C (RtlpHpExtrasGet.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18005B0C4 (RtlpWakeByAddress.c)
 *     RtlpProbeUserBufferSafe @ 0x180078ADC (RtlpProbeUserBufferSafe.c)
 *     RtlpGetExtraStuffPointer @ 0x180078E10 (RtlpGetExtraStuffPointer.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlDebugSetUserValueHeap @ 0x1801063CC (RtlDebugSetUserValueHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114AD4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __cdecl RtlSetUserValueHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress, PVOID UserValue)
{
  char v6; // r15
  unsigned __int64 v7; // r10
  int v8; // r11d
  int v9; // edx
  int v10; // ecx
  BOOLEAN v11; // si
  int v12; // edx
  unsigned __int64 v13; // rcx
  ULONG v15; // r14d
  int v16; // ecx
  unsigned __int8 *v17; // rbx
  char v18; // al
  struct _TEB *v19; // rbx
  struct _TEB *v20; // rbx
  __int64 v21; // rbx
  _BYTE *v23; // rdi
  signed __int32 v24; // r14d
  void *DeferredCriticalSectionEvent; // r10
  int v26; // eax
  signed __int32 v27[8]; // [rsp+58h] [rbp-78h] BYREF
  char v28; // [rsp+88h] [rbp-48h]
  BOOLEAN v29; // [rsp+89h] [rbp-47h]
  unsigned __int8 *v30; // [rsp+98h] [rbp-38h]
  struct _TEB *v31; // [rsp+A0h] [rbp-30h]
  struct _TEB *v32; // [rsp+A8h] [rbp-28h]
  __int64 ExtraStuffPointer; // [rsp+B0h] [rbp-20h]
  PVOID v34; // [rsp+D8h] [rbp+8h] BYREF

  v34 = HeapHandle;
  v6 = 0;
  v28 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    v8 = RtlpHpConvertFlagsToSegmentFlags(Flags);
    v9 = *((_DWORD *)HeapHandle + 55);
    v10 = 0;
    if ( v9 )
      LOBYTE(v10) = v9 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v11 = 1;
    v12 = v8 | 1;
    if ( !v10 )
      v12 = v8;
    if ( (RtlpHpAppCompatFlags & 2) != 0 && v7 )
      v7 -= *(_QWORD *)(v7 - 16);
    v13 = RtlpHpExtrasGet((__int64)HeapHandle, v7, (unsigned int)v12 | *((_DWORD *)HeapHandle + 5), 0LL);
    if ( v13 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
      v11 = 0;
    else
      *(_QWORD *)(v13 + 8) = UserValue;
    if ( !v11 )
    {
      NtCurrentTeb()->LastStatusValue = -1073741811;
      v19 = NtCurrentTeb();
      v19->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    }
    return v11;
  }
  v15 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v15 & 0x61000000) != 0 && (v15 & 0x10000000) == 0 )
    return RtlDebugSetUserValueHeap(HeapHandle);
  if ( (*((_BYTE *)HeapHandle + 120) & 1) == 0 )
  {
    if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
    {
      v16 = 9;
    }
    else
    {
      v17 = (unsigned __int8 *)BaseAddress - 16;
      _m_prefetchw((char *)BaseAddress - 16);
      if ( *((char *)BaseAddress - 1) == 5 )
        v17 -= 16 * v17[14];
      if ( (v17[15] & 0x3F) != 0 )
        goto LABEL_17;
      LODWORD(BaseAddress) = (_DWORD)v17;
      v16 = 8;
    }
    RtlpLogHeapFailure(v16, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
    v17 = 0LL;
LABEL_17:
    v30 = v17;
    goto LABEL_18;
  }
  v17 = RtlpProbeUserBufferSafe((int)HeapHandle, (__int64)BaseAddress);
  v30 = v17;
LABEL_18:
  if ( !v17 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v20 = NtCurrentTeb();
    v20->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return 0;
  }
  v29 = 0;
  if ( (v15 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    v6 = 1;
    v28 = 1;
  }
  v18 = v17[15];
  if ( (v18 & 0x3F) != 0 )
  {
    if ( v18 >= 0 )
    {
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        *((_DWORD *)v17 + 2) ^= *((_DWORD *)HeapHandle + 34);
        if ( v17[11] != (v17[8] ^ (unsigned __int8)(v17[9] ^ v17[10])) )
          RtlpAnalyzeHeapFailure(HeapHandle, v17);
      }
      if ( (v17[10] & 2) != 0 )
      {
        ExtraStuffPointer = RtlpGetExtraStuffPointer(v17, *(_QWORD *)&Flags);
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
  v17 = 0LL;
  v30 = 0LL;
LABEL_30:
  if ( v17 && *((_DWORD *)HeapHandle + 31) )
  {
    v17[11] = v17[8] ^ v17[9] ^ v17[10];
    *((_DWORD *)v17 + 2) ^= *((_DWORD *)HeapHandle + 34);
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
