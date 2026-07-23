/*
 * XREFs of ZwQuerySymbolicLinkObject @ 0x14041D3C0
 * Callers:
 *     DifZwQuerySymbolicLinkObjectWrapper @ 0x1405F5890 (DifZwQuerySymbolicLinkObjectWrapper.c)
 *     SiTranslateSymbolicLink @ 0x1407C0548 (SiTranslateSymbolicLink.c)
 *     BiTranslateSymbolicLink @ 0x14080A234 (BiTranslateSymbolicLink.c)
 *     ExpTranslateSymbolicLink @ 0x140840638 (ExpTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x140948630 (IoIsValidNameGraftingBuffer.c)
 *     SiGetBiosSystemDisk @ 0x140A60394 (SiGetBiosSystemDisk.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
