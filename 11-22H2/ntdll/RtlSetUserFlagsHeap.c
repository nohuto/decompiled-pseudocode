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

char __fastcall RtlSetUserFlagsHeap(__int64 a1, int a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v6; // rbx
  unsigned int v8; // r13d
  int v9; // r10d
  int v10; // edx
  int v11; // ecx
  char v12; // si
  int v13; // r8d
  unsigned __int64 v14; // rcx
  struct _TEB *v15; // rbx
  ULONG v16; // eax
  int v17; // r12d
  unsigned __int8 *v18; // rcx
  int v19; // ecx
  __int64 v20; // rbx
  char v21; // r15
  __int64 v22; // rbx
  _BYTE *v24; // r14
  signed __int32 v25; // r15d
  HANDLE DeferredCriticalSectionEvent; // r10
  int v27; // eax
  signed __int32 v29[8]; // [rsp+20h] [rbp-98h] BYREF
  char v30; // [rsp+50h] [rbp-68h]
  char v31; // [rsp+51h] [rbp-67h]
  unsigned __int8 *v32; // [rsp+58h] [rbp-60h]
  struct _TEB *v33; // [rsp+68h] [rbp-50h]
  struct _TEB *v34; // [rsp+70h] [rbp-48h]
  unsigned int v35; // [rsp+D8h] [rbp+20h] BYREF

  v6 = a3;
  v31 = 0;
  v30 = 0;
  v8 = a5;
  if ( ((a5 | a4) & 0xFFFFF1FF) != 0 )
    goto LABEL_58;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
  {
    v17 = *(_DWORD *)(a1 + 116) | a2;
    if ( (v17 & 0x61000000) != 0 && (v17 & 0x10000000) == 0 )
      return RtlDebugSetUserFlagsHeap(a1, v17, a3, a4, a5);
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    {
      v18 = RtlpProbeUserBufferSafe(a1, a3);
      v32 = v18;
LABEL_27:
      if ( v18 && (v18[15] & 0x80u) == 0 )
      {
        if ( (v17 & 1) == 0 )
        {
          RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
          v31 = 1;
        }
        v20 = v6 - 16;
        _m_prefetchw((const void *)v20);
        if ( *(_BYTE *)(v20 + 15) == 5 )
          v20 -= 16LL * *(unsigned __int8 *)(v20 + 14);
        v32 = (unsigned __int8 *)v20;
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_DWORD *)(v20 + 8) ^= *(_DWORD *)(a1 + 136);
          if ( *(_BYTE *)(v20 + 11) != (*(_BYTE *)(v20 + 8) ^ (unsigned __int8)(*(_BYTE *)(v20 + 9) ^ *(_BYTE *)(v20 + 10))) )
            RtlpAnalyzeHeapFailure(a1, v20, a3);
        }
        if ( (*(_BYTE *)(v20 + 15) & 0x3F) != 0 )
        {
          v21 = *(_BYTE *)(v20 + 10) & ~(unsigned __int8)(a4 >> 4);
          *(_BYTE *)(v20 + 10) = v21;
          *(_BYTE *)(v20 + 10) = v21 | (v8 >> 4);
          v30 = 1;
        }
        else
        {
          v33 = NtCurrentTeb();
          v33->LastStatusValue = -1073741811;
          v34 = NtCurrentTeb();
          v34->LastErrorValue = RtlNtStatusToDosError(-1073741811);
          v20 = (__int64)v32;
        }
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v20 + 11) = *(_BYTE *)(v20 + 8) ^ *(_BYTE *)(v20 + 9) ^ *(_BYTE *)(v20 + 10);
          *(_DWORD *)(v20 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        if ( v31 )
        {
          v22 = *(_QWORD *)(a1 + 352);
          if ( (*(_DWORD *)(v22 + 12))-- == 1 )
          {
            *(_QWORD *)(v22 + 16) = 0LL;
            v24 = (_BYTE *)(v22 + 8);
            v25 = _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 8), -1, -2);
            if ( v25 != -2 )
            {
              if ( (*v24 & 1) != 0 )
                RtlpNotOwnerCriticalSection((const void **)v22);
              DeferredCriticalSectionEvent = *(HANDLE *)(v22 + 24);
              if ( !DeferredCriticalSectionEvent )
                DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v22);
              v35 = 0;
              while ( v25 != _InterlockedCompareExchange((volatile signed __int32 *)v24, (v25 & 2 | 1) + v25, v25) )
              {
                RtlBackoff(&v35);
                _m_prefetchw(v24);
                v25 = *(_DWORD *)v24;
              }
              if ( (v25 & 2) != 0 )
              {
                if ( DeferredCriticalSectionEvent == (HANDLE)-1LL )
                {
                  _InterlockedOr(v29, 0);
                  RtlpWakeByAddress(v22 + 8, 0);
                  v27 = 0;
                }
                else
                {
                  v27 = ZwSetEvent();
                }
                if ( v27 < 0 )
                  RtlRaiseStatus((unsigned int)v27);
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
    if ( (a3 & 0xF) != 0 )
    {
      v19 = 9;
    }
    else
    {
      v18 = (unsigned __int8 *)(a3 - 16);
      _m_prefetchw((const void *)(a3 - 16));
      if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
        v18 -= 16 * v18[14];
      if ( (v18[15] & 0x3F) != 0 )
        goto LABEL_26;
      LODWORD(a3) = (_DWORD)v18;
      v19 = 8;
    }
    RtlpLogHeapFailure(v19, a1, a3, 0, 0LL, 0LL);
    v18 = 0LL;
LABEL_26:
    v32 = v18;
    goto LABEL_27;
  }
  v9 = RtlpHpConvertFlagsToSegmentFlags(a2);
  v10 = *(_DWORD *)(a1 + 220);
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
    v6 -= *(_QWORD *)(v6 - 16);
  v14 = RtlpHpExtrasGet(a1, v6, *(_DWORD *)(a1 + 20) | (unsigned int)v13, 0LL);
  if ( v14 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    v12 = 0;
  else
    *(_BYTE *)(v14 + 2) = *(_BYTE *)(v14 + 2) & ((16 * ~BYTE1(a4)) | 0xF) | (16 * BYTE1(v8));
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
