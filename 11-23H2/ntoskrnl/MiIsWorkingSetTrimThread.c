/*
 * XREFs of MiIsWorkingSetTrimThread @ 0x1403537E0
 * Callers:
 *     MiSystemFault @ 0x1402611A0 (MiSystemFault.c)
 *     MiFlushAllFilesystemPages @ 0x140629294 (MiFlushAllFilesystemPages.c)
 *     MmAddRangeToCrashDump @ 0x140630140 (MmAddRangeToCrashDump.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiIsWorkingSetTrimThread()
{
  void (__fastcall __noreturn *Blink)(); // rcx

  Blink = (void (__fastcall __noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[0].Blink;
  return Blink == KeBalanceSetManager || (char *)Blink == (char *)MiPartitionWorkingSetManager;
}
