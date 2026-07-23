/*
 * XREFs of RtlpFlushHeap @ 0x1800600BC
 * Callers:
 *     RtlpFlushHeapsCallback @ 0x18005FAF0 (RtlpFlushHeapsCallback.c)
 *     RtlSetHeapInformation @ 0x18007D200 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlpWakeByAddress @ 0x18002A00C (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 *     RtlTryEnterCriticalSection @ 0x180043ED0 (RtlTryEnterCriticalSection.c)
 *     RtlpCollectFreeBlocks @ 0x1800468E4 (RtlpCollectFreeBlocks.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEvent @ 0x1800A1070 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F4D50 (RtlpNotOwnerCriticalSection.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18011A724 (RtlpLowFragHeapFlushCaches.c)
 */

__int64 __fastcall RtlpFlushHeap(__int64 a1)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rbx
  _BYTE *v7; // rdi
  signed __int32 v8; // esi
  void *DeferredCriticalSectionEvent; // r10
  int v10; // eax
  signed __int32 v11[14]; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_BYTE *)(a1 + 112) & 1) == 0 && RtlTryEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352)) )
  {
    if ( *(_BYTE *)(a1 + 418) == 2 && *(_QWORD *)(a1 + 408) )
      RtlpLowFragHeapFlushCaches();
    RtlpCollectFreeBlocks(a1, v3, v4);
    v5 = *(_QWORD *)(a1 + 352);
    if ( (*(_DWORD *)(v5 + 12))-- == 1 )
    {
      *(_QWORD *)(v5 + 16) = 0LL;
      v7 = (_BYTE *)(v5 + 8);
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), -1, -2);
      if ( v8 != -2 )
      {
        if ( (*v7 & 1) != 0 )
          RtlpNotOwnerCriticalSection(v5);
        DeferredCriticalSectionEvent = *(void **)(v5 + 24);
        if ( !DeferredCriticalSectionEvent )
          DeferredCriticalSectionEvent = (void *)RtlpCreateDeferredCriticalSectionEvent(v5);
        v12 = 0;
        while ( v8 != _InterlockedCompareExchange((volatile signed __int32 *)v7, (v8 & 2 | 1) + v8, v8) )
        {
          RtlBackoff(&v12);
          _m_prefetchw(v7);
          v8 = *(_DWORD *)v7;
        }
        if ( (v8 & 2) != 0 )
        {
          if ( DeferredCriticalSectionEvent == (void *)-1LL )
          {
            _InterlockedOr(v11, 0);
            RtlpWakeByAddress(v5 + 8, 0);
          }
          else
          {
            v10 = ZwSetEvent(DeferredCriticalSectionEvent, 0LL);
            if ( v10 < 0 )
              RtlRaiseStatus(v10);
          }
        }
      }
    }
  }
  return 0LL;
}
