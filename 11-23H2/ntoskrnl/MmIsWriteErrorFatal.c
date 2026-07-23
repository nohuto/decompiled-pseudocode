/*
 * XREFs of MmIsWriteErrorFatal @ 0x1402F4C6C
 * Callers:
 *     CcIsFatalWriteError @ 0x1402F4538 (CcIsFatalWriteError.c)
 *     MiWriteComplete @ 0x1402F45B0 (MiWriteComplete.c)
 *     MiFlushControlArea @ 0x140624A84 (MiFlushControlArea.c)
 *     FsRtlLogCcFlushError @ 0x14093D2E0 (FsRtlLogCcFlushError.c)
 * Callees:
 *     FsRtlIsTotalDeviceFailure @ 0x1402F4CE0 (FsRtlIsTotalDeviceFailure.c)
 */

_BOOL8 __fastcall MmIsWriteErrorFatal(int a1, int a2, NTSTATUS a3)
{
  if ( a3 != -1073741740 && (a1 && a2 || a3 == -1073741672 || a3 == -1073741566 || a3 == -1073741202)
    || a3 == -1073741810 )
  {
    return 1LL;
  }
  if ( a3 == -1073741667 )
  {
    if ( !a1 || !a2 )
      return 1LL;
  }
  else if ( a3 == -1073741662 && a1 )
  {
    return 1LL;
  }
  return !FsRtlIsTotalDeviceFailure(a3);
}
