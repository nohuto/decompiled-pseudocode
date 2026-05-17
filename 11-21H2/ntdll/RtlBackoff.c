/*
 * XREFs of RtlBackoff @ 0x18001B8D8
 * Callers:
 *     RtlUnlockHeap @ 0x180015C80 (RtlUnlockHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlpReAllocateHeapInternal @ 0x1800245B8 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x180024890 (RtlpReAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180025D30 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18002B160 (RtlpAllocateHeap.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x18002EABC (RtlpAllocateUserBlockFromHeap.c)
 *     RtlpMoveHeapBetweenLists @ 0x18002F448 (RtlpMoveHeapBetweenLists.c)
 *     RtlProtectHeap @ 0x180030B10 (RtlProtectHeap.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlpActivateLowFragmentationHeap @ 0x180053710 (RtlpActivateLowFragmentationHeap.c)
 *     RtlpFlushHeap @ 0x18006C32C (RtlpFlushHeap.c)
 *     RtlpFreeUserBlock @ 0x18006CFB8 (RtlpFreeUserBlock.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18007674C (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x180076950 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlGetUserInfoHeap @ 0x180078760 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180078BC0 (RtlSetUserValueHeap.c)
 *     RtlCreateTagHeap @ 0x18007A050 (RtlCreateTagHeap.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x18007A0E0 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpQueueWaitBlockToSRWLock @ 0x18007BD04 (RtlpQueueWaitBlockToSRWLock.c)
 *     RtlValidateHeap @ 0x18007BE40 (RtlValidateHeap.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18007D9C8 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpEnumProcessHeaps @ 0x18007DC2C (RtlpEnumProcessHeaps.c)
 *     RtlTryAcquireSRWLockShared @ 0x1800806D0 (RtlTryAcquireSRWLockShared.c)
 *     RtlSetHeapInformation @ 0x180080EF0 (RtlSetHeapInformation.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x180080FDC (RtlpSetRequestedFrontEndHeap.c)
 *     RtlQueryProcessHeapInformation @ 0x1800E36C0 (RtlQueryProcessHeapInformation.c)
 *     RtlCompactHeap @ 0x1800FD670 (RtlCompactHeap.c)
 *     RtlQueryTagHeap @ 0x1800FDCE0 (RtlQueryTagHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800FE010 (RtlSetHeapDebuggingInformation.c)
 *     RtlSetUserFlagsHeap @ 0x1800FE1B0 (RtlSetUserFlagsHeap.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x18010008C (RtlpUnlockHeapManagerForCloning.c)
 *     RtlZeroHeap @ 0x180102270 (RtlZeroHeap.c)
 *     RtlpSetupExtendedBlock @ 0x180102C1C (RtlpSetupExtendedBlock.c)
 *     RtlDebugAllocateHeap @ 0x180104194 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x180104690 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180104C50 (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x180104FAC (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x180105420 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x18010573C (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1801059F0 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180106088 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1801063CC (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1801066D4 (RtlDebugSizeHeap.c)
 *     RtlDebugZeroHeap @ 0x180106A10 (RtlDebugZeroHeap.c)
 * Callees:
 *     <none>
 */

struct _TEB *__fastcall RtlBackoff(unsigned int *a1)
{
  unsigned int v1; // r8d
  unsigned int v2; // r9d
  struct _TEB *result; // rax
  unsigned __int64 v4; // rax

  v1 = *a1;
  v2 = 0;
  if ( *a1 )
  {
    if ( v1 < 0x1FFF )
      v1 *= 2;
  }
  else
  {
    result = NtCurrentTeb();
    if ( result->ProcessEnvironmentBlock->NumberOfProcessors == 1 )
      return result;
    v1 = 64;
  }
  *a1 = v1;
  v4 = __rdtsc();
  result = (struct _TEB *)(10 * (((v1 - 1) & (unsigned int)v4) + v1) / MEMORY[0x7FFE02D6]);
  if ( (_DWORD)result )
  {
    do
    {
      _mm_pause();
      ++v2;
    }
    while ( v2 < (unsigned int)result );
  }
  return result;
}
