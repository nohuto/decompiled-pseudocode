/*
 * XREFs of RtlGetUserInfoHeap @ 0x180078760
 * Callers:
 *     RtlDebugGetUserInfoHeap @ 0x180105420 (RtlDebugGetUserInfoHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x180027604 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18005B0C4 (RtlpWakeByAddress.c)
 *     RtlpProbeUserBufferSafe @ 0x180078ADC (RtlpProbeUserBufferSafe.c)
 *     RtlpHpGetUserInfo @ 0x180078B50 (RtlpHpGetUserInfo.c)
 *     RtlpGetExtraStuffPointer @ 0x180078E10 (RtlpGetExtraStuffPointer.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlDebugGetUserInfoHeap @ 0x180105420 (RtlDebugGetUserInfoHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114AD4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x18011F538 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 */

char __fastcall RtlGetUserInfoHeap(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _DWORD *a5)
{
  __int64 v6; // rbx
  int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 ExtraStuffPointer; // rax
  __int64 v12; // rbx
  _BYTE *v14; // rsi
  signed __int32 v15; // r14d
  int v17; // r10d
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // ecx
  __int64 DeferredCriticalSectionEvent; // r10
  int v23; // eax
  struct _TEB *v24; // rbx
  signed __int32 v25[8]; // [rsp+58h] [rbp-98h] BYREF
  char v26; // [rsp+88h] [rbp-68h]
  char v27; // [rsp+89h] [rbp-67h]
  __int64 v28; // [rsp+90h] [rbp-60h]
  struct _TEB *v29; // [rsp+A8h] [rbp-48h]
  struct _TEB *v30; // [rsp+B0h] [rbp-40h]
  __int64 v31; // [rsp+B8h] [rbp-38h]
  __int64 v32; // [rsp+F8h] [rbp+8h] BYREF

  v32 = a1;
  v6 = a3;
  v27 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v17 = RtlpHpConvertFlagsToSegmentFlags(a2);
    v18 = *(_DWORD *)(a1 + 220);
    v19 = 0;
    if ( v18 )
      LOBYTE(v19) = v18 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v20 = v17 | 1;
    if ( !v19 )
      v20 = v17;
    if ( (RtlpHpAppCompatFlags & 2) != 0 && v6 )
      v6 -= *(_QWORD *)(v6 - 16);
    return RtlpHpGetUserInfo(a1, v6, v20, (_DWORD)a4, (__int64)a5);
  }
  v8 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v8 & 0x61000000) != 0 && (v8 & 0x10000000) == 0 )
    return RtlDebugGetUserInfoHeap(a1, v8, a3, (_DWORD)a4, (__int64)a5);
  if ( (v8 & 0x800) != 0 || (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    v9 = RtlpProbeUserBufferSafe(a1, a3);
    v28 = v9;
    goto LABEL_5;
  }
  if ( (a3 & 0xF) != 0 )
  {
    v21 = 9;
  }
  else
  {
    v9 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
    if ( (*(_BYTE *)(v9 + 15) & 0x3F) != 0 )
      goto LABEL_42;
    LODWORD(a3) = v9;
    v21 = 8;
  }
  RtlpLogHeapFailure(v21, a1, a3, 0, 0LL, 0LL);
  v9 = 0LL;
LABEL_42:
  v28 = v9;
LABEL_5:
  if ( !v9 )
    goto LABEL_63;
  if ( *(char *)(v9 + 15) >= 0 )
  {
    v26 = 0;
    v10 = v6 - 16;
    _m_prefetchw((const void *)v10);
    if ( *(_BYTE *)(v10 + 15) == 5 )
      v10 -= 16LL * *(unsigned __int8 *)(v10 + 14);
    v28 = v10;
    if ( (v8 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v27 = 1;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v10 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v10 + 11) != (*(_BYTE *)(v10 + 8) ^ (unsigned __int8)(*(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v10);
    }
    if ( (*(_BYTE *)(v10 + 15) & 0x3F) != 0 )
    {
      if ( (*(_BYTE *)(v10 + 10) & 2) != 0 )
      {
        ExtraStuffPointer = RtlpGetExtraStuffPointer(v10, a2);
        v31 = ExtraStuffPointer;
        if ( a4 )
          *a4 = *(_QWORD *)(ExtraStuffPointer + 8);
      }
      if ( a5 )
        *a5 = 16 * (*(_BYTE *)(v10 + 10) & 0xE0);
      v26 = 1;
    }
    else
    {
      v29 = NtCurrentTeb();
      v29->LastStatusValue = -1073741811;
      v30 = NtCurrentTeb();
      v30->LastErrorValue = RtlNtStatusToDosError(-1073741811);
      v10 = v28;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v10 + 11) = *(_BYTE *)(v10 + 8) ^ *(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10);
      *(_DWORD *)(v10 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    if ( v27 )
    {
      v12 = *(_QWORD *)(a1 + 352);
      if ( (*(_DWORD *)(v12 + 12))-- == 1 )
      {
        *(_QWORD *)(v12 + 16) = 0LL;
        v14 = (_BYTE *)(v12 + 8);
        v15 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), -1, -2);
        if ( v15 != -2 )
        {
          if ( (*v14 & 1) != 0 )
            RtlpNotOwnerCriticalSection(v12);
          DeferredCriticalSectionEvent = *(_QWORD *)(v12 + 24);
          if ( !DeferredCriticalSectionEvent )
            DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v12);
          LODWORD(v32) = 0;
          while ( v15 != _InterlockedCompareExchange((volatile signed __int32 *)v14, v15 + (v15 & 2 | 1), v15) )
          {
            RtlBackoff((unsigned int *)&v32);
            _m_prefetchw(v14);
            v15 = *(_DWORD *)v14;
          }
          if ( (v15 & 2) != 0 )
          {
            if ( DeferredCriticalSectionEvent == -1 )
            {
              _InterlockedOr(v25, 0);
              RtlpWakeByAddress(v12 + 8, 0);
              v23 = 0;
            }
            else
            {
              v23 = ZwSetEvent(DeferredCriticalSectionEvent, 0LL);
            }
            if ( v23 < 0 )
            {
              RtlRaiseStatus((unsigned int)v23);
              __debugbreak();
            }
          }
        }
      }
    }
    return v26;
  }
  if ( (*(_BYTE *)(v9 + 15) & 0x3F) == 0 )
  {
LABEL_63:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v24 = NtCurrentTeb();
    v24->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return 0;
  }
  if ( a5 )
    *a5 = 0;
  return 1;
}
