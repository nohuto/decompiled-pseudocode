/*
 * XREFs of VfInitVerifierComponents @ 0x140A82480
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140A82328 (VfInitSystemNoRebootNeeded.c)
 *     VfInitBootDriversLoaded @ 0x140B0DBD4 (VfInitBootDriversLoaded.c)
 * Callees:
 *     VfIovPluginEntry @ 0x1406019A0 (VfIovPluginEntry.c)
 *     ExSetPoolFlags @ 0x14063B338 (ExSetPoolFlags.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     VfHalVerifierInitialize @ 0x140A863B8 (VfHalVerifierInitialize.c)
 *     VfPendingCheckForChanges @ 0x140A90E38 (VfPendingCheckForChanges.c)
 *     VfKeCheckForChanges @ 0x140A967D0 (VfKeCheckForChanges.c)
 *     VfFaultsInitPhase0 @ 0x140A9697C (VfFaultsInitPhase0.c)
 *     VfDeadlockInitialize @ 0x140A98170 (VfDeadlockInitialize.c)
 *     ViSettingsIoCheckForChanges @ 0x140A9B158 (ViSettingsIoCheckForChanges.c)
 */

__int64 __fastcall VfInitVerifierComponents(unsigned int a1, unsigned int a2, unsigned int a3, char a4)
{
  _DWORD *Pool2; // rax
  _QWORD *v9; // rax
  __int64 result; // rax

  if ( (MmVerifierData & 0x20) != 0 && !a4 )
    ExSetPoolFlags(0x10u);
  if ( (MmVerifierData & 0x10) != 0 )
    VfIovPluginEntry();
  if ( (MmVerifierData & 0x10) != 0 )
  {
    if ( (MmVerifierData & 0x200) != 0 )
      PpvUtilVerifierEnabled = 1;
    if ( (MmVerifierData & 0x400) != 0 )
      goto LABEL_11;
  }
  if ( a4 )
  {
LABEL_11:
    ViIrpLogDatabaseLock = 0LL;
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, 0x18uLL, 0x64496656u);
    ViIrpLogDatabase = (__int64)Pool2;
    if ( Pool2 )
    {
      *Pool2 = 0;
      v9 = Pool2 + 2;
      v9[1] = v9;
      *v9 = v9;
    }
  }
  if ( (MmVerifierData & 0x80u) != 0 )
    VfHalVerifierInitialize();
  ViDdiInitialized = 1;
  VfKeCheckForChanges(a1);
  if ( (MmVerifierData & 0x10) != 0 )
    ViSettingsIoCheckForChanges(a1);
  if ( (a1 & 8) != 0 )
    MmTrackLockedPages = 1;
  if ( (MmVerifierData & 0x200) != 0 )
    VfPendingCheckForChanges(a1);
  if ( (VfRuleClasses & 4) != 0 )
    VfFaultsInitPhase0();
  result = (unsigned int)VfRuleClasses;
  if ( (VfRuleClasses & 0x20) != 0 && !a4 )
    result = VfDeadlockInitialize(a2, a3);
  ViVerifierEnabled = 1;
  return result;
}
