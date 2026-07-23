/*
 * XREFs of ZwQueryAttributesFile @ 0x14041AE40
 * Callers:
 *     BiDoesHiveExist @ 0x14080A3B0 (BiDoesHiveExist.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140A1CDB4 (CmpOpenFileWithExtremePrejudice.c)
 *     BiResolveLocateDevice @ 0x140A5CA64 (BiResolveLocateDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
