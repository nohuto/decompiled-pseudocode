/*
 * XREFs of ViKeInjectStatusAlerted @ 0x140AC0608
 * Callers:
 *     VerifierKeWaitForSingleObject @ 0x140AC0530 (VerifierKeWaitForSingleObject.c)
 *     VerifierKeDelayExecutionThread @ 0x140AD5480 (VerifierKeDelayExecutionThread.c)
 *     VerifierKeWaitForMultipleObjects @ 0x140AD5950 (VerifierKeWaitForMultipleObjects.c)
 * Callees:
 *     VfUtilIsLocalSystem @ 0x140AC2744 (VfUtilIsLocalSystem.c)
 *     VfFaultsInjectResourceFailure @ 0x140AD5FCC (VfFaultsInjectResourceFailure.c)
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
