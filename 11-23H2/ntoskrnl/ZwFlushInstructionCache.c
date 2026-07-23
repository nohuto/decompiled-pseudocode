/*
 * XREFs of ZwFlushInstructionCache @ 0x14041CED0
 * Callers:
 *     DifZwFlushInstructionCacheWrapper @ 0x1405F0B00 (DifZwFlushInstructionCacheWrapper.c)
 *     sub_140762330 @ 0x140762330 (sub_140762330.c)
 *     sub_140764880 @ 0x140764880 (sub_140764880.c)
 *     sub_140A4E074 @ 0x140A4E074 (sub_140A4E074.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFlushInstructionCache(HANDLE ProcessHandle, PVOID BaseAddress, SIZE_T Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
