/*
 * XREFs of ZwDeleteFile @ 0x14041CC10
 * Callers:
 *     DifZwDeleteFileWrapper @ 0x1405EFAC0 (DifZwDeleteFileWrapper.c)
 *     NtEnableLastKnownGood @ 0x1408840B0 (NtEnableLastKnownGood.c)
 *     KsepDeletePatchSdb @ 0x1409776F4 (KsepDeletePatchSdb.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140B94930 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
