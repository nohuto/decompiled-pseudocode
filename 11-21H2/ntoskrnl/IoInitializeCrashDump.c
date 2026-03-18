/*
 * XREFs of IoInitializeCrashDump @ 0x14084BDD8
 * Callers:
 *     MiCreatePagingFile @ 0x14084AA8C (MiCreatePagingFile.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140AF71F0 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     IopRemoveDumpCapsuleSupport @ 0x1403CF960 (IopRemoveDumpCapsuleSupport.c)
 *     IopInitDumpCapsuleSupport @ 0x1403DD52C (IopInitDumpCapsuleSupport.c)
 *     IopInitializeCrashDump @ 0x14084BE78 (IopInitializeCrashDump.c)
 */

char __fastcall IoInitializeCrashDump(__int64 a1, __int128 *a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  char v5; // di
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  if ( ForceDumpDisabled || !AllowCrashDump )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u);
  v7 = *a2;
  v5 = IopInitializeCrashDump(a1, &v7);
  if ( v5 )
  {
    IopRemoveDumpCapsuleSupport();
  }
  else if ( CapsuleDumpAllowed )
  {
    IopInitDumpCapsuleSupport();
  }
  ExReleaseResourceLite(&IopCrashDumpLock);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return v5;
}
