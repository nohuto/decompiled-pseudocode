/*
 * XREFs of ZwQuerySymbolicLinkObject @ 0x14041DA80
 * Callers:
 *     DifZwQuerySymbolicLinkObjectWrapper @ 0x1405F5800 (DifZwQuerySymbolicLinkObjectWrapper.c)
 *     SiTranslateSymbolicLink @ 0x1407BFFB8 (SiTranslateSymbolicLink.c)
 *     BiTranslateSymbolicLink @ 0x140807CB4 (BiTranslateSymbolicLink.c)
 *     ExpTranslateSymbolicLink @ 0x14083E8A8 (ExpTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x140948580 (IoIsValidNameGraftingBuffer.c)
 *     SiGetBiosSystemDisk @ 0x140A60324 (SiGetBiosSystemDisk.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle, LinkTarget);
}
