/*
 * XREFs of ZwProtectVirtualMemory @ 0x14041BAF0
 * Callers:
 *     CmSiProtectViewOfSection @ 0x140296F38 (CmSiProtectViewOfSection.c)
 *     KiOpPatchCode @ 0x14057F8F0 (KiOpPatchCode.c)
 *     DifZwProtectVirtualMemoryWrapper @ 0x1405F39A0 (DifZwProtectVirtualMemoryWrapper.c)
 *     MiCheckForUserStackOverflow @ 0x1407BDC68 (MiCheckForUserStackOverflow.c)
 *     sub_140A4DD70 @ 0x140A4DD70 (sub_140A4DD70.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG NewProtect,
        PULONG OldProtect)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
