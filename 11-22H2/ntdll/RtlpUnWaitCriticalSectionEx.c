/*
 * XREFs of RtlpUnWaitCriticalSectionEx @ 0x18002A180
 * Callers:
 *     RtlpAllocateHeap @ 0x18003F320 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x1800423B0 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x1800425F0 (RtlpReAllocateHeap.c)
 *     RtlpFreeUserBlock @ 0x180047BC8 (RtlpFreeUserBlock.c)
 *     RtlpMoveHeapBetweenLists @ 0x180048DC4 (RtlpMoveHeapBetweenLists.c)
 *     RtlProtectHeap @ 0x180049280 (RtlProtectHeap.c)
 *     RtlpActivateLowFragmentationHeap @ 0x180049ADC (RtlpActivateLowFragmentationHeap.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x18006385C (RtlpAllocateUserBlockFromHeap.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180072FF0 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpSetupExtendedBlock @ 0x1801028B0 (RtlpSetupExtendedBlock.c)
 *     RtlDebugAllocateHeap @ 0x180103E60 (RtlDebugAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180105704 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSizeHeap @ 0x180106428 (RtlDebugSizeHeap.c)
 * Callees:
 *     ZwSetEvent @ 0x18009EFB0 (ZwSetEvent.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 */

int __fastcall RtlpUnWaitCriticalSectionEx(__int64 a1, void *a2)
{
  int result; // eax
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( a2 == (void *)-1LL )
  {
    _InterlockedOr(v3, 0);
    return RtlpWakeByAddress(a1 + 8, 0LL);
  }
  else
  {
    result = ZwSetEvent(a2, 0LL);
    if ( result < 0 )
      RtlRaiseStatus(result);
  }
  return result;
}
