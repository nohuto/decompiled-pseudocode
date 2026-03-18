/*
 * XREFs of ZwSetInformationObject @ 0x14041C2E0
 * Callers:
 *     DifZwSetInformationObjectWrapper @ 0x140627550 (DifZwSetInformationObjectWrapper.c)
 *     CmpCmdHiveClose @ 0x14067C24C (CmpCmdHiveClose.c)
 *     CmpCreateHive @ 0x14068A7FC (CmpCreateHive.c)
 *     CmpFlushBackupHive @ 0x140917A40 (CmpFlushBackupHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
