/*
 * XREFs of RtlDebugSetUserValueHeap @ 0x1801063CC
 * Callers:
 *     RtlSetUserValueHeap @ 0x180078BC0 (RtlSetUserValueHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     RtlpCheckHeapSignature @ 0x180015DC8 (RtlpCheckHeapSignature.c)
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18005B0C4 (RtlpWakeByAddress.c)
 *     RtlSetUserValueHeap @ 0x180078BC0 (RtlSetUserValueHeap.c)
 *     RtlpValidateHeapEntry @ 0x18007C0D8 (RtlpValidateHeapEntry.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlpValidateHeap @ 0x180106CB0 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18011F538 (RtlpHeapExceptionFilter.c)
 */

char __fastcall RtlDebugSetUserValueHeap(unsigned __int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char v8; // r14
  unsigned int v10; // esi
  unsigned __int64 v11; // rdx
  __int64 v12; // rdi
  _BYTE *v14; // rsi
  signed __int32 v15; // r14d
  HANDLE DeferredCriticalSectionEvent; // r10
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  signed __int32 v20[12]; // [rsp+58h] [rbp-88h] BYREF
  char v21; // [rsp+88h] [rbp-58h]
  char v22; // [rsp+89h] [rbp-57h]
  unsigned __int64 v23; // [rsp+98h] [rbp-48h]
  unsigned __int64 v24; // [rsp+E8h] [rbp+8h] BYREF
  unsigned int v25; // [rsp+F0h] [rbp+10h]

  v25 = a2;
  v24 = a1;
  v21 = 0;
  v8 = 0;
  v22 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_1801742B0)();
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlSetUserValueHeap") )
  {
    v10 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    v25 = v10;
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v8 = 1;
      v22 = 1;
      v10 |= 1u;
      v25 = v10;
    }
    RtlpValidateHeap(a1, 0LL);
    v11 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v11 -= 16LL * *(unsigned __int8 *)(v11 + 14);
    v23 = v11;
    if ( RtlpValidateHeapEntry(a1, v11, "RtlSetUserValueHeap") )
    {
      v21 = RtlSetUserValueHeap(a1, v10, a3, a4);
      RtlpValidateHeap(a1, 0LL);
    }
  }
  else
  {
    v21 = 0;
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
        LODWORD(v24) = 0;
        while ( v15 != _InterlockedCompareExchange((volatile signed __int32 *)v14, (v15 & 2 | 1) + v15, v15) )
        {
          RtlBackoff((unsigned int *)&v24);
          _m_prefetchw(v14);
          v15 = *(_DWORD *)v14;
        }
        if ( (v15 & 2) != 0 )
        {
          if ( DeferredCriticalSectionEvent == (HANDLE)-1LL )
          {
            _InterlockedOr(v20, 0);
            RtlpWakeByAddress(v12 + 8, 0);
            v17 = 0;
          }
          else
          {
            v17 = ZwSetEvent();
          }
          if ( v17 < 0 )
            RtlRaiseStatus(v17, v18, v19);
        }
      }
    }
  }
  return v21;
}
