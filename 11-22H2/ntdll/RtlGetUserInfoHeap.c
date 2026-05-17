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

char __fastcall RtlGetUserInfoHeap(__int64 a1, int a2, __int64 a3, _QWORD *a4, _DWORD *a5)
{
  __int64 v6; // rbx
  int v8; // r10d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 ExtraStuffPointer; // rax
  __int64 v17; // rbx
  _BYTE *v19; // rsi
  signed __int32 v20; // r14d
  int v21; // ecx
  __int64 DeferredCriticalSectionEvent; // r10
  struct _TEB *v23; // rbx
  int v24; // eax
  signed __int32 v25[8]; // [rsp+48h] [rbp-98h] BYREF
  char v26; // [rsp+78h] [rbp-68h]
  char v27; // [rsp+79h] [rbp-67h]
  __int64 v28; // [rsp+80h] [rbp-60h]
  struct _TEB *v29; // [rsp+98h] [rbp-48h]
  struct _TEB *v30; // [rsp+A0h] [rbp-40h]
  __int64 v31; // [rsp+A8h] [rbp-38h]
  __int64 v32; // [rsp+E8h] [rbp+8h] BYREF

  v32 = a1;
  v6 = a3;
  v27 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v8 = RtlpHpConvertFlagsToSegmentFlags(a2);
    v9 = *(_DWORD *)(a1 + 220);
    v10 = 0;
    if ( v9 )
      LOBYTE(v10) = v9 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v11 = v8 | 1;
    if ( !v10 )
      v11 = v8;
    if ( (RtlpHpAppCompatFlags & 2) != 0 )
    {
      if ( v6 )
        v6 -= *(_QWORD *)(v6 - 16);
    }
    return RtlpHpGetUserInfo(a1, v6, v11, (_DWORD)a4, (__int64)a5);
  }
  v13 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v13 & 0x61000000) != 0 && (v13 & 0x10000000) == 0 )
    return RtlDebugGetUserInfoHeap(a1, v13, a3, (_DWORD)a4, (__int64)a5);
  if ( (v13 & 0x800) != 0 || (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    v14 = RtlpProbeUserBufferSafe(a1, a3);
    v28 = v14;
    goto LABEL_11;
  }
  if ( (a3 & 0xF) != 0 )
  {
    v21 = 9;
  }
  else
  {
    v14 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v14 -= 16LL * *(unsigned __int8 *)(v14 + 14);
    if ( (*(_BYTE *)(v14 + 15) & 0x3F) != 0 )
      goto LABEL_42;
    LODWORD(a3) = v14;
    v21 = 8;
  }
  RtlpLogHeapFailure(v21, a1, a3, 0, 0LL, 0LL);
  v14 = 0LL;
LABEL_42:
  v28 = v14;
LABEL_11:
  if ( !v14 )
    goto LABEL_60;
  if ( *(char *)(v14 + 15) < 0 )
  {
    if ( (*(_BYTE *)(v14 + 15) & 0x3F) != 0 )
    {
      if ( a5 )
        *a5 = 0;
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
  _m_prefetchw((const void *)v15);
  if ( *(_BYTE *)(v15 + 15) == 5 )
    v15 -= 16LL * *(unsigned __int8 *)(v15 + 14);
  v28 = v15;
  if ( (v13 & 1) == 0 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
    v27 = 1;
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v15 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v15 + 11) != (*(_BYTE *)(v15 + 8) ^ (unsigned __int8)(*(_BYTE *)(v15 + 9) ^ *(_BYTE *)(v15 + 10))) )
      RtlpAnalyzeHeapFailure(a1, v15, a3);
  }
  if ( (*(_BYTE *)(v15 + 15) & 0x3F) != 0 )
  {
    if ( (*(_BYTE *)(v15 + 10) & 2) != 0 )
    {
      ExtraStuffPointer = RtlpGetExtraStuffPointer(v15);
      v31 = ExtraStuffPointer;
      if ( a4 )
        *a4 = *(_QWORD *)(ExtraStuffPointer + 8);
    }
    if ( a5 )
      *a5 = 16 * (*(_BYTE *)(v15 + 10) & 0xE0);
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
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(v15 + 11) = *(_BYTE *)(v15 + 8) ^ *(_BYTE *)(v15 + 9) ^ *(_BYTE *)(v15 + 10);
    *(_DWORD *)(v15 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v27 )
  {
    v17 = *(_QWORD *)(a1 + 352);
    if ( (*(_DWORD *)(v17 + 12))-- == 1 )
    {
      *(_QWORD *)(v17 + 16) = 0LL;
      v19 = (_BYTE *)(v17 + 8);
      v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 8), -1, -2);
      if ( v20 != -2 )
      {
        if ( (*v19 & 1) != 0 )
          RtlpNotOwnerCriticalSection(v17);
        DeferredCriticalSectionEvent = *(_QWORD *)(v17 + 24);
        if ( !DeferredCriticalSectionEvent )
          DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v17);
        LODWORD(v32) = 0;
        while ( v20 != _InterlockedCompareExchange((volatile signed __int32 *)v19, v20 + (v20 & 2 | 1), v20) )
        {
          RtlBackoff((unsigned int *)&v32);
          _m_prefetchw(v19);
          v20 = *(_DWORD *)v19;
        }
        if ( (v20 & 2) != 0 )
        {
          if ( DeferredCriticalSectionEvent == -1 )
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
            RtlRaiseStatus((unsigned int)v24);
        }
      }
    }
  }
  return v26;
}
