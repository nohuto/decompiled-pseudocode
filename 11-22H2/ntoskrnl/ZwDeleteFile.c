/*
 * XREFs of ZwDeleteFile @ 0x14041C1C0
 * Callers:
 *     DifZwDeleteFileWrapper @ 0x1405EF5E0 (DifZwDeleteFileWrapper.c)
 *     NtEnableLastKnownGood @ 0x140884340 (NtEnableLastKnownGood.c)
 *     KsepDeletePatchSdb @ 0x1409775A4 (KsepDeletePatchSdb.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140B95930 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
