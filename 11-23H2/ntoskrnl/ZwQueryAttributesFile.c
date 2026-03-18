/*
 * XREFs of ZwQueryAttributesFile @ 0x14041B500
 * Callers:
 *     BiDoesHiveExist @ 0x140807E30 (BiDoesHiveExist.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140A1CD04 (CmpOpenFileWithExtremePrejudice.c)
 *     BiResolveLocateDevice @ 0x140A5C9F4 (BiResolveLocateDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryAttributesFile(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
