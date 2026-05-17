/*
 * XREFs of RtlBackoff @ 0x180033F80
 * Callers:
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     RtlUnlockHeap @ 0x180029F10 (RtlUnlockHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpFreeHeap @ 0x1800397E0 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18003F320 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x1800423B0 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x1800425F0 (RtlpReAllocateHeap.c)
 *     RtlpFreeUserBlock @ 0x180047BC8 (RtlpFreeUserBlock.c)
 *     RtlpMoveHeapBetweenLists @ 0x180048DC4 (RtlpMoveHeapBetweenLists.c)
 *     RtlProtectHeap @ 0x180049280 (RtlProtectHeap.c)
 *     RtlpActivateLowFragmentationHeap @ 0x180049ADC (RtlpActivateLowFragmentationHeap.c)
 *     RtlpFlushHeap @ 0x18005A8EC (RtlpFlushHeap.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x18006385C (RtlpAllocateUserBlockFromHeap.c)
 *     RtlpQueueWaitBlockToSRWLock @ 0x180069D38 (RtlpQueueWaitBlockToSRWLock.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x180070FD0 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18007130C (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180072FF0 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlGetUserInfoHeap @ 0x180075EA0 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x1800762D0 (RtlSetUserValueHeap.c)
 *     RtlpEnumProcessHeaps @ 0x1800773DC (RtlpEnumProcessHeaps.c)
 *     RtlTryAcquireSRWLockShared @ 0x180079C80 (RtlTryAcquireSRWLockShared.c)
 *     RtlSetHeapInformation @ 0x18007CB90 (RtlSetHeapInformation.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x18007CC74 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlCreateTagHeap @ 0x18007F9F0 (RtlCreateTagHeap.c)
 *     RtlValidateHeap @ 0x180086BF0 (RtlValidateHeap.c)
 *     RtlQueryProcessHeapInformation @ 0x1800E2370 (RtlQueryProcessHeapInformation.c)
 *     RtlCompactHeap @ 0x1800FD310 (RtlCompactHeap.c)
 *     RtlQueryTagHeap @ 0x1800FDA10 (RtlQueryTagHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800FDD4C (RtlSetHeapDebuggingInformation.c)
 *     RtlSetUserFlagsHeap @ 0x1800FDEF0 (RtlSetUserFlagsHeap.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x1800FFD58 (RtlpUnlockHeapManagerForCloning.c)
 *     RtlZeroHeap @ 0x180101F50 (RtlZeroHeap.c)
 *     RtlpSetupExtendedBlock @ 0x1801028B0 (RtlpSetupExtendedBlock.c)
 *     RtlDebugAllocateHeap @ 0x180103E60 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x180104364 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x18010492C (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x180104C90 (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x180105124 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180105448 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180105704 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180105DC8 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x180106114 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x180106428 (RtlDebugSizeHeap.c)
 *     RtlDebugZeroHeap @ 0x180106768 (RtlDebugZeroHeap.c)
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
