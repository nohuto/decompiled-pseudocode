/*
 * XREFs of ZwFlushKey @ 0x14041C4A0
 * Callers:
 *     VfClearVerifierSettings @ 0x1405CDEAC (VfClearVerifierSettings.c)
 *     DifZwFlushKeyWrapper @ 0x1405F0750 (DifZwFlushKeyWrapper.c)
 *     ExpRecordShutdownTime @ 0x1406061B8 (ExpRecordShutdownTime.c)
 *     CmpInterlockedFunction @ 0x14080ED54 (CmpInterlockedFunction.c)
 *     SepAuditFailed @ 0x1409D1CF0 (SepAuditFailed.c)
 *     BcdFlushStore @ 0x140A5C298 (BcdFlushStore.c)
 *     PopFlushVolumes @ 0x140AA65A8 (PopFlushVolumes.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
