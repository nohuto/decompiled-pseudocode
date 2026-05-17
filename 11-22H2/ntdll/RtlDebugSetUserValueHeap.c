/*
 * XREFs of RtlDebugSetUserValueHeap @ 0x180106114
 * Callers:
 *     RtlSetUserValueHeap @ 0x1800762D0 (RtlSetUserValueHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18002A04C (RtlpCheckHeapSignature.c)
 *     RtlpWakeByAddress @ 0x18002A1DC (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033F80 (RtlBackoff.c)
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     RtlSetUserValueHeap @ 0x1800762D0 (RtlSetUserValueHeap.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpValidateHeapEntry @ 0x180086E64 (RtlpValidateHeapEntry.c)
 *     ZwSetEvent @ 0x18009EFB0 (ZwSetEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 *     RtlpValidateHeap @ 0x180106A10 (RtlpValidateHeap.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 *     RtlpHeapExceptionFilter @ 0x180121428 (RtlpHeapExceptionFilter.c)
 */

char __fastcall RtlDebugSetUserValueHeap(unsigned __int64 a1, int a2, __int64 a3, __int64 a4)
{
  char v8; // r14
  int v10; // esi
  unsigned __int64 v11; // rdx
  __int64 v12; // rdi
  _BYTE *v14; // rsi
  signed __int32 v15; // r14d
  HANDLE DeferredCriticalSectionEvent; // r10
  int v17; // eax
  signed __int32 v18[12]; // [rsp+48h] [rbp-88h] BYREF
  char v19; // [rsp+78h] [rbp-58h]
  char v20; // [rsp+79h] [rbp-57h]
  unsigned __int64 v21; // [rsp+88h] [rbp-48h]
  unsigned __int64 v22; // [rsp+D8h] [rbp+8h] BYREF
  int v23; // [rsp+E0h] [rbp+10h]

  v23 = a2;
  v22 = a1;
  v19 = 0;
  v8 = 0;
  v20 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_18017E8A0)();
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlSetUserValueHeap") )
  {
    v10 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    v23 = v10;
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v8 = 1;
      v20 = 1;
      v10 |= 1u;
      v23 = v10;
    }
    RtlpValidateHeap(a1, 0LL);
    v11 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v11 -= 16LL * *(unsigned __int8 *)(v11 + 14);
    v21 = v11;
    if ( RtlpValidateHeapEntry(a1, v11, "RtlSetUserValueHeap") )
    {
      v19 = RtlSetUserValueHeap(a1, v10, a3, a4);
      RtlpValidateHeap(a1, 0LL);
    }
  }
  else
  {
    v19 = 0;
  }
  if ( v8 )
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
          RtlpNotOwnerCriticalSection((const void **)v12);
        DeferredCriticalSectionEvent = *(HANDLE *)(v12 + 24);
        if ( !DeferredCriticalSectionEvent )
          DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v12);
        LODWORD(v22) = 0;
        while ( v15 != _InterlockedCompareExchange((volatile signed __int32 *)v14, (v15 & 2 | 1) + v15, v15) )
        {
          RtlBackoff((unsigned int *)&v22);
          _m_prefetchw(v14);
          v15 = *(_DWORD *)v14;
        }
        if ( (v15 & 2) != 0 )
        {
          if ( DeferredCriticalSectionEvent == (HANDLE)-1LL )
          {
            _InterlockedOr(v18, 0);
            RtlpWakeByAddress(v12 + 8, 0);
            v17 = 0;
          }
          else
          {
            v17 = ZwSetEvent();
          }
          if ( v17 < 0 )
            RtlRaiseStatus((unsigned int)v17);
        }
      }
    }
  }
  return v19;
}
