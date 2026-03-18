/*
 * XREFs of KeUnstackDetachProcess @ 0x1402037B0
 * Callers:
 *     SepRmCallLsa @ 0x140203950 (SepRmCallLsa.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140261354 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     MiInSwapStoreWorker @ 0x1406EBDB0 (MiInSwapStoreWorker.c)
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     PsCreateMinimalProcess @ 0x140831810 (PsCreateMinimalProcess.c)
 *     CmpMountPreloadedHives @ 0x14083200C (CmpMountPreloadedHives.c)
 *     CmpFinishSystemHivesLoad @ 0x140833B80 (CmpFinishSystemHivesLoad.c)
 *     PspAllocatePartition @ 0x14085BD34 (PspAllocatePartition.c)
 *     KiLogUserCetSetContextIpValidationFailureWorker @ 0x140960A90 (KiLogUserCetSetContextIpValidationFailureWorker.c)
 *     PfSnAppLaunchScenarioControl @ 0x140988EE4 (PfSnAppLaunchScenarioControl.c)
 * Callees:
 *     KiDetachProcess @ 0x1403470F0 (KiDetachProcess.c)
 */

void __stdcall KeUnstackDetachProcess(PRKAPC_STATE ApcState)
{
  _KPROCESS *Process; // rax

  Process = ApcState->Process;
  if ( Process != (_KPROCESS *)1 )
  {
    if ( !Process )
      ApcState = &KeGetCurrentThread()->SavedApcState;
    KiDetachProcess(ApcState, 0LL);
  }
}
