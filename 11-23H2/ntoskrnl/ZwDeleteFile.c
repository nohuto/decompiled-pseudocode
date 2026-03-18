/*
 * XREFs of ZwDeleteFile @ 0x14041C880
 * Callers:
 *     DifZwDeleteFileWrapper @ 0x1405EF550 (DifZwDeleteFileWrapper.c)
 *     NtEnableLastKnownGood @ 0x140883E70 (NtEnableLastKnownGood.c)
 *     KsepDeletePatchSdb @ 0x1409774F4 (KsepDeletePatchSdb.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140B94930 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes, v1);
}
