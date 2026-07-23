/*
 * XREFs of IoUpdateBugCheckProgressEnvVariable @ 0x1405516C4
 * Callers:
 *     IoSaveBugCheckProgress @ 0x1405510A0 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressAndFlag @ 0x140551450 (IoSetBugCheckProgressAndFlag.c)
 *     IoWriteCrashDump @ 0x1405519C0 (IoWriteCrashDump.c)
 *     IopDumpCallAddPagesCallbacks @ 0x140552C58 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x140552DB0 (IopDumpCallRemovePagesCallbacks.c)
 *     IopFillTriageDumpDataBlocks @ 0x140553778 (IopFillTriageDumpDataBlocks.c)
 *     KeBugCheck2 @ 0x140568950 (KeBugCheck2.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x14057BD68 (KiUpdateBugcheckRecoveryProgress.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     IopBugCheckProgressEfiVariableServicesAvailable @ 0x140552964 (IopBugCheckProgressEfiVariableServicesAvailable.c)
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
