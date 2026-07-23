/*
 * XREFs of ZwQueryAttributesFile @ 0x14041B890
 * Callers:
 *     BiDoesHiveExist @ 0x140808100 (BiDoesHiveExist.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140A1CFB4 (CmpOpenFileWithExtremePrejudice.c)
 *     BiResolveLocateDevice @ 0x140A5CCA4 (BiResolveLocateDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
