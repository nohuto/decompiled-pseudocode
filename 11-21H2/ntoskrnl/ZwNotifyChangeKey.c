/*
 * XREFs of ZwNotifyChangeKey @ 0x14041DB60
 * Callers:
 *     sub_1403A73E0 @ 0x1403A73E0 (sub_1403A73E0.c)
 *     sub_1403DC824 @ 0x1403DC824 (sub_1403DC824.c)
 *     sub_1405DFE94 @ 0x1405DFE94 (sub_1405DFE94.c)
 *     sub_1406214C0 @ 0x1406214C0 (sub_1406214C0.c)
 *     sub_140811B60 @ 0x140811B60 (sub_140811B60.c)
 *     sub_14081BE48 @ 0x14081BE48 (sub_14081BE48.c)
 *     sub_14084C25C @ 0x14084C25C (sub_14084C25C.c)
 *     sub_14084C370 @ 0x14084C370 (sub_14084C370.c)
 *     sub_140857F38 @ 0x140857F38 (sub_140857F38.c)
 *     sub_1408620D0 @ 0x1408620D0 (sub_1408620D0.c)
 *     sub_140940408 @ 0x140940408 (sub_140940408.c)
 *     sub_140989150 @ 0x140989150 (sub_140989150.c)
 *     sub_140B23A48 @ 0x140B23A48 (sub_140B23A48.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwNotifyChangeKey(
        HANDLE KeyHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        PVOID Buffer,
        ULONG BufferSize,
        BOOLEAN Asynchronous)
{
  _disable();
  __readeflags();
  return sub_140433F80(KeyHandle, Event);
}
