/*
 * XREFs of ZwDeleteFile @ 0x14041D260
 * Callers:
 *     sub_14061F620 @ 0x14061F620 (sub_14061F620.c)
 *     sub_14080B090 @ 0x14080B090 (sub_14080B090.c)
 *     sub_140964CB8 @ 0x140964CB8 (sub_140964CB8.c)
 *     sub_140B4FF80 @ 0x140B4FF80 (sub_140B4FF80.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return sub_140433F80(ObjectAttributes, v1);
}
