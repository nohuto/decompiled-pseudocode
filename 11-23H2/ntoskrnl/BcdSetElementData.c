/*
 * XREFs of BcdSetElementData @ 0x140A5CAE4
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x14059E358 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     WheaPersistBadPageToBcd @ 0x1406122E0 (WheaPersistBadPageToBcd.c)
 * Callees:
 *     BcdSetElementDataWithFlags @ 0x1408043E8 (BcdSetElementDataWithFlags.c)
 */

NTSTATUS __cdecl BcdSetElementData(HANDLE BcdObjectHandle, ULONG BcdElement, PVOID Buffer, ULONG BufferSize)
{
  return BcdSetElementDataWithFlags(BcdObjectHandle, BcdElement, (BCD_FLAGS)Buffer, Buffer, BufferSize);
}
