/*
 * XREFs of IoInitializeCrashDump @ 0x14083459C
 * Callers:
 *     MiCreatePagingFile @ 0x1408330DC (MiCreatePagingFile.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140B71660 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     IopRemoveDumpCapsuleSupport @ 0x140396674 (IopRemoveDumpCapsuleSupport.c)
 *     IopInitDumpCapsuleSupport @ 0x1403B3784 (IopInitDumpCapsuleSupport.c)
 *     IopInitializeCrashDump @ 0x140832C88 (IopInitializeCrashDump.c)
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
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v5;
}
