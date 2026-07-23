/*
 * XREFs of ZwQuerySymbolicLinkObject @ 0x14041DE10
 * Callers:
 *     DifZwQuerySymbolicLinkObjectWrapper @ 0x1405F5D70 (DifZwQuerySymbolicLinkObjectWrapper.c)
 *     SiTranslateSymbolicLink @ 0x1407C0288 (SiTranslateSymbolicLink.c)
 *     BiTranslateSymbolicLink @ 0x140807F84 (BiTranslateSymbolicLink.c)
 *     ExpTranslateSymbolicLink @ 0x14083EBA8 (ExpTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x140948780 (IoIsValidNameGraftingBuffer.c)
 *     SiGetBiosSystemDisk @ 0x140A605D4 (SiGetBiosSystemDisk.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
