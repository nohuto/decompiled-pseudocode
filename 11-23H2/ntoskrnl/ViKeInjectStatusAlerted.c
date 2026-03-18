/*
 * XREFs of ViKeInjectStatusAlerted @ 0x140AC0618
 * Callers:
 *     VerifierKeWaitForSingleObject @ 0x140AC0540 (VerifierKeWaitForSingleObject.c)
 *     VerifierKeDelayExecutionThread @ 0x140AD5490 (VerifierKeDelayExecutionThread.c)
 *     VerifierKeWaitForMultipleObjects @ 0x140AD5960 (VerifierKeWaitForMultipleObjects.c)
 * Callees:
 *     VfUtilIsLocalSystem @ 0x140AC2754 (VfUtilIsLocalSystem.c)
 *     VfFaultsInjectResourceFailure @ 0x140AD5FDC (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall ViKeInjectStatusAlerted(char a1)
{
  unsigned int v1; // ebx
  struct _KPROCESS *Process; // rdi

  v1 = 0;
  if ( !a1 )
    return 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !PsInitialSystemProcess
    || Process == PsInitialSystemProcess
    || Process == PsIdleProcess
    || !(unsigned int)VfFaultsInjectResourceFailure(0LL) )
  {
    return 0LL;
  }
  LOBYTE(v1) = (unsigned int)VfUtilIsLocalSystem(Process) == 0;
  return v1;
}
