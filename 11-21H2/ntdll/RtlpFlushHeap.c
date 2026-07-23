/*
 * XREFs of RtlpFlushHeap @ 0x18006C32C
 * Callers:
 *     RtlpFlushHeapsCallback @ 0x18006C310 (RtlpFlushHeapsCallback.c)
 *     RtlSetHeapInformation @ 0x180080EF0 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlpCollectFreeBlocks @ 0x180020488 (RtlpCollectFreeBlocks.c)
 *     RtlTryEnterCriticalSection @ 0x1800225E0 (RtlTryEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18005B0C4 (RtlpWakeByAddress.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18006C404 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 */

__int64 __fastcall RtlpFlushHeap(__int64 a1)
{
  __int64 v2; // rbx
  _BYTE *v4; // rdi
  signed __int32 v5; // esi
  void *DeferredCriticalSectionEvent; // r10
  int v8; // eax
  signed __int32 v9[14]; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_BYTE *)(a1 + 112) & 1) == 0 && RtlTryEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352)) )
  {
    if ( *(_BYTE *)(a1 + 418) == 2 && *(_QWORD *)(a1 + 408) )
      RtlpLowFragHeapFlushCaches();
    RtlpCollectFreeBlocks(a1);
    v2 = *(_QWORD *)(a1 + 352);
    if ( (*(_DWORD *)(v2 + 12))-- == 1 )
    {
      *(_QWORD *)(v2 + 16) = 0LL;
      v4 = (_BYTE *)(v2 + 8);
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), -1, -2);
      if ( v5 != -2 )
      {
        if ( (*v4 & 1) != 0 )
          RtlpNotOwnerCriticalSection(v2);
        DeferredCriticalSectionEvent = *(void **)(v2 + 24);
        if ( !DeferredCriticalSectionEvent )
          DeferredCriticalSectionEvent = (void *)RtlpCreateDeferredCriticalSectionEvent(v2);
        v10 = 0;
        while ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)v4, (v5 & 2 | 1) + v5, v5) )
        {
          RtlBackoff(&v10);
          _m_prefetchw(v4);
          v5 = *(_DWORD *)v4;
        }
        if ( (v5 & 2) != 0 )
        {
          if ( DeferredCriticalSectionEvent == (void *)-1LL )
          {
            _InterlockedOr(v9, 0);
            RtlpWakeByAddress(v2 + 8, 0);
          }
          else
          {
            v8 = ZwSetEvent(DeferredCriticalSectionEvent, 0LL);
            if ( v8 < 0 )
              RtlRaiseStatus(v8);
          }
        }
      }
    }
  }
  return 0LL;
}
