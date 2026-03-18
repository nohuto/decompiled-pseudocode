/*
 * XREFs of IoUpdateBugCheckProgressEnvVariable @ 0x140551004
 * Callers:
 *     IoSaveBugCheckProgress @ 0x1405509E0 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressAndFlag @ 0x140550D90 (IoSetBugCheckProgressAndFlag.c)
 *     IoWriteCrashDump @ 0x140551300 (IoWriteCrashDump.c)
 *     IopDumpCallAddPagesCallbacks @ 0x140552598 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x1405526F0 (IopDumpCallRemovePagesCallbacks.c)
 *     IopFillTriageDumpDataBlocks @ 0x1405530B8 (IopFillTriageDumpDataBlocks.c)
 *     KeBugCheck2 @ 0x140568290 (KeBugCheck2.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x14057B878 (KiUpdateBugcheckRecoveryProgress.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     IopBugCheckProgressEfiVariableServicesAvailable @ 0x1405522A4 (IopBugCheckProgressEfiVariableServicesAvailable.c)
 */

__int64 IoUpdateBugCheckProgressEnvVariable()
{
  __int64 result; // rax

  result = IopBugCheckProgressEfiVariableServicesAvailable();
  if ( (_BYTE)result )
  {
    BugCheckProgressEfiCalled = 1;
    result = ((__int64 (__fastcall *)(const wchar_t *, __int64 *, __int64, __int64, int))IopReportBugCheckProgress)(
               L"BugCheckProgress",
               BUGCHECK_EFI_GUID,
               CrashdmpDumpBlock + 1404,
               4LL,
               1);
    BugCheckProgressEfiCalled = 0;
  }
  return result;
}
