/*
 * XREFs of RtlBackoff @ 0x180033E20
 * Callers:
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlUnlockHeap @ 0x180029D40 (RtlUnlockHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlpFreeHeap @ 0x180039680 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18003F1C0 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x180042250 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x180042490 (RtlpReAllocateHeap.c)
 *     RtlpFreeUserBlock @ 0x180047A68 (RtlpFreeUserBlock.c)
 *     RtlpMoveHeapBetweenLists @ 0x180048C64 (RtlpMoveHeapBetweenLists.c)
 *     RtlProtectHeap @ 0x180049120 (RtlProtectHeap.c)
 *     RtlpActivateLowFragmentationHeap @ 0x18004997C (RtlpActivateLowFragmentationHeap.c)
 *     RtlpFlushHeap @ 0x1800600BC (RtlpFlushHeap.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x18006372C (RtlpAllocateUserBlockFromHeap.c)
 *     RtlpQueueWaitBlockToSRWLock @ 0x180069D18 (RtlpQueueWaitBlockToSRWLock.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1800712F4 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x180071630 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180073660 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlGetUserInfoHeap @ 0x180076510 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180076940 (RtlSetUserValueHeap.c)
 *     RtlpEnumProcessHeaps @ 0x180077A4C (RtlpEnumProcessHeaps.c)
 *     RtlTryAcquireSRWLockShared @ 0x18007A2F0 (RtlTryAcquireSRWLockShared.c)
 *     RtlSetHeapInformation @ 0x18007D200 (RtlSetHeapInformation.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x18007D2E4 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlCreateTagHeap @ 0x180080060 (RtlCreateTagHeap.c)
 *     RtlValidateHeap @ 0x1800873F0 (RtlValidateHeap.c)
 *     RtlQueryProcessHeapInformation @ 0x1800E36A0 (RtlQueryProcessHeapInformation.c)
 *     RtlCompactHeap @ 0x1800FE720 (RtlCompactHeap.c)
 *     RtlQueryTagHeap @ 0x1800FEE20 (RtlQueryTagHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800FF15C (RtlSetHeapDebuggingInformation.c)
 *     RtlSetUserFlagsHeap @ 0x1800FF300 (RtlSetUserFlagsHeap.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x180101168 (RtlpUnlockHeapManagerForCloning.c)
 *     RtlZeroHeap @ 0x180103360 (RtlZeroHeap.c)
 *     RtlpSetupExtendedBlock @ 0x180103CC0 (RtlpSetupExtendedBlock.c)
 *     RtlDebugAllocateHeap @ 0x180105270 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x180105774 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180105D3C (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x1801060A0 (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x180106534 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180106858 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180106B14 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1801071D8 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x180107524 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x180107838 (RtlDebugSizeHeap.c)
 *     RtlDebugZeroHeap @ 0x180107B78 (RtlDebugZeroHeap.c)
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
