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

char __fastcall RtlSetUserValueHeap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // r15
  unsigned __int64 v7; // r10
  int v8; // r11d
  int v9; // edx
  int v10; // ecx
  char v11; // si
  int v12; // edx
  unsigned __int64 v13; // rcx
  unsigned int v15; // r14d
  int v16; // ecx
  unsigned __int8 *v17; // rbx
  char v18; // al
  struct _TEB *v19; // rbx
  struct _TEB *v20; // rbx
  __int64 v21; // rbx
  _BYTE *v23; // rdi
  signed __int32 v24; // r14d
  __int64 DeferredCriticalSectionEvent; // r10
  int v26; // eax
  signed __int32 v27[8]; // [rsp+58h] [rbp-78h] BYREF
  char v28; // [rsp+88h] [rbp-48h]
  char v29; // [rsp+89h] [rbp-47h]
  unsigned __int8 *v30; // [rsp+98h] [rbp-38h]
  struct _TEB *v31; // [rsp+A0h] [rbp-30h]
  struct _TEB *v32; // [rsp+A8h] [rbp-28h]
  __int64 ExtraStuffPointer; // [rsp+B0h] [rbp-20h]
  __int64 v34; // [rsp+D8h] [rbp+8h] BYREF

  v34 = a1;
  v6 = 0;
  v28 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v8 = RtlpHpConvertFlagsToSegmentFlags(a2);
    v9 = *(_DWORD *)(a1 + 220);
    v10 = 0;
    if ( v9 )
      LOBYTE(v10) = v9 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v11 = 1;
    v12 = v8 | 1;
    if ( !v10 )
      v12 = v8;
    if ( (RtlpHpAppCompatFlags & 2) != 0 && v7 )
      v7 -= *(_QWORD *)(v7 - 16);
    v13 = RtlpHpExtrasGet(a1, v7, (unsigned int)v12 | *(_DWORD *)(a1 + 20), 0LL);
    if ( v13 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
      v11 = 0;
    else
      *(_QWORD *)(v13 + 8) = a4;
    if ( !v11 )
    {
      NtCurrentTeb()->LastStatusValue = -1073741811;
      v19 = NtCurrentTeb();
      v19->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    }
    return v11;
  }
  v15 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v15 & 0x61000000) != 0 && (v15 & 0x10000000) == 0 )
    return RtlDebugSetUserValueHeap(a1, v15);
  if ( (*(_BYTE *)(a1 + 120) & 1) == 0 )
  {
    if ( (a3 & 0xF) != 0 )
    {
      v16 = 9;
    }
    else
    {
      v17 = (unsigned __int8 *)(a3 - 16);
      _m_prefetchw((const void *)(a3 - 16));
      if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
        v17 -= 16 * v17[14];
      if ( (v17[15] & 0x3F) != 0 )
        goto LABEL_17;
      LODWORD(a3) = (_DWORD)v17;
      v16 = 8;
    }
    RtlpLogHeapFailure(v16, a1, a3, 0, 0LL, 0LL);
    v17 = 0LL;
LABEL_17:
    v30 = v17;
    goto LABEL_18;
  }
  v17 = RtlpProbeUserBufferSafe(a1, a3);
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
    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
    v6 = 1;
    v28 = 1;
  }
  v18 = v17[15];
  if ( (v18 & 0x3F) != 0 )
  {
    if ( v18 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        *((_DWORD *)v17 + 2) ^= *(_DWORD *)(a1 + 136);
        if ( v17[11] != (v17[8] ^ (unsigned __int8)(v17[9] ^ v17[10])) )
          RtlpAnalyzeHeapFailure(a1, v17);
      }
      if ( (v17[10] & 2) != 0 )
      {
        ExtraStuffPointer = RtlpGetExtraStuffPointer(v17, a2);
        *(_QWORD *)(ExtraStuffPointer + 8) = a4;
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
  if ( v17 && *(_DWORD *)(a1 + 124) )
  {
    v17[11] = v17[8] ^ v17[9] ^ v17[10];
    *((_DWORD *)v17 + 2) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v6 )
  {
    v21 = *(_QWORD *)(a1 + 352);
    if ( (*(_DWORD *)(v21 + 12))-- == 1 )
    {
      *(_QWORD *)(v21 + 16) = 0LL;
      v23 = (_BYTE *)(v21 + 8);
      v24 = _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 8), -1, -2);
      if ( v24 != -2 )
      {
        if ( (*v23 & 1) != 0 )
          RtlpNotOwnerCriticalSection(v21);
        DeferredCriticalSectionEvent = *(_QWORD *)(v21 + 24);
        if ( !DeferredCriticalSectionEvent )
          DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v21);
        LODWORD(v34) = 0;
        while ( v24 != _InterlockedCompareExchange((volatile signed __int32 *)v23, (v24 & 2 | 1) + v24, v24) )
        {
          RtlBackoff((unsigned int *)&v34);
          _m_prefetchw(v23);
          v24 = *(_DWORD *)v23;
        }
        if ( (v24 & 2) != 0 )
        {
          if ( DeferredCriticalSectionEvent == -1 )
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
          {
            RtlRaiseStatus((unsigned int)v26);
            JUMPOUT(0x1800CCC4ALL);
          }
        }
      }
    }
  }
  return v29;
}
