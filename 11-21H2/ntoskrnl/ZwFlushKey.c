/*
 * XREFs of ZwFlushKey @ 0x14041D540
 * Callers:
 *     VfClearVerifierSettings @ 0x1405FDAE4 (VfClearVerifierSettings.c)
 *     DifZwFlushKeyWrapper @ 0x140620810 (DifZwFlushKeyWrapper.c)
 *     ExpRecordShutdownTime @ 0x1406390F8 (ExpRecordShutdownTime.c)
 *     BcdFlushStore @ 0x1408009E0 (BcdFlushStore.c)
 *     CmpInterlockedFunction @ 0x140832128 (CmpInterlockedFunction.c)
 *     SepAuditFailed @ 0x1409CF1A0 (SepAuditFailed.c)
 *     PopFlushVolumes @ 0x140A51CA4 (PopFlushVolumes.c)
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
