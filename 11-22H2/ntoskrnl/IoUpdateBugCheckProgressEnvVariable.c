/*
 * XREFs of IoUpdateBugCheckProgressEnvVariable @ 0x1405510A4
 * Callers:
 *     IoSaveBugCheckProgress @ 0x140550A80 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressAndFlag @ 0x140550E30 (IoSetBugCheckProgressAndFlag.c)
 *     IoWriteCrashDump @ 0x1405513A0 (IoWriteCrashDump.c)
 *     IopDumpCallAddPagesCallbacks @ 0x140552638 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x140552790 (IopDumpCallRemovePagesCallbacks.c)
 *     IopFillTriageDumpDataBlocks @ 0x140553158 (IopFillTriageDumpDataBlocks.c)
 *     KeBugCheck2 @ 0x140568330 (KeBugCheck2.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x14057B908 (KiUpdateBugcheckRecoveryProgress.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     IopBugCheckProgressEfiVariableServicesAvailable @ 0x140552344 (IopBugCheckProgressEfiVariableServicesAvailable.c)
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
