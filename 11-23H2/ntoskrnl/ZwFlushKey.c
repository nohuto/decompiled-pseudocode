/*
 * XREFs of ZwFlushKey @ 0x14041CB60
 * Callers:
 *     VfClearVerifierSettings @ 0x1405CDE1C (VfClearVerifierSettings.c)
 *     DifZwFlushKeyWrapper @ 0x1405F06C0 (DifZwFlushKeyWrapper.c)
 *     ExpRecordShutdownTime @ 0x140606148 (ExpRecordShutdownTime.c)
 *     CmpInterlockedFunction @ 0x14080C7D4 (CmpInterlockedFunction.c)
 *     SepAuditFailed @ 0x1409D1C40 (SepAuditFailed.c)
 *     BcdFlushStore @ 0x140A5C228 (BcdFlushStore.c)
 *     PopFlushVolumes @ 0x140AA64E8 (PopFlushVolumes.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushKey(HANDLE KeyHandle)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, v1);
}
