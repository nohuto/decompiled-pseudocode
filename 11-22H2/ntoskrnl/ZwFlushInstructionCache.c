/*
 * XREFs of ZwFlushInstructionCache @ 0x14041C480
 * Callers:
 *     DifZwFlushInstructionCacheWrapper @ 0x1405F0620 (DifZwFlushInstructionCacheWrapper.c)
 *     sub_140762650 @ 0x140762650 (sub_140762650.c)
 *     sub_140764BA0 @ 0x140764BA0 (sub_140764BA0.c)
 *     sub_140A4DE34 @ 0x140A4DE34 (sub_140A4DE34.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFlushInstructionCache(HANDLE ProcessHandle, PVOID BaseAddress, SIZE_T Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
