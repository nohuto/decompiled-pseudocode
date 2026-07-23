/*
 * XREFs of ZwFlushKey @ 0x14041CEF0
 * Callers:
 *     VfClearVerifierSettings @ 0x1405CE38C (VfClearVerifierSettings.c)
 *     DifZwFlushKeyWrapper @ 0x1405F0C30 (DifZwFlushKeyWrapper.c)
 *     ExpRecordShutdownTime @ 0x140606698 (ExpRecordShutdownTime.c)
 *     CmpInterlockedFunction @ 0x14080CAA4 (CmpInterlockedFunction.c)
 *     SepAuditFailed @ 0x1409D1E40 (SepAuditFailed.c)
 *     BcdFlushStore @ 0x140A5C4D8 (BcdFlushStore.c)
 *     PopFlushVolumes @ 0x140AA6358 (PopFlushVolumes.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
