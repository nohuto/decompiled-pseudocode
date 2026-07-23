/*
 * XREFs of MiIsWorkingSetTrimThread @ 0x140353980
 * Callers:
 *     MiSystemFault @ 0x140261430 (MiSystemFault.c)
 *     MiFlushAllFilesystemPages @ 0x1406297E4 (MiFlushAllFilesystemPages.c)
 *     MmAddRangeToCrashDump @ 0x140630690 (MmAddRangeToCrashDump.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiIsWorkingSetTrimThread()
{
  void (__fastcall __noreturn *Blink)(); // rcx

  Blink = (void (__fastcall __noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[0].Blink;
  return Blink == KeBalanceSetManager || (char *)Blink == (char *)MiPartitionWorkingSetManager;
}
