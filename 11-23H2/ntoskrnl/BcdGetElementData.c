/*
 * XREFs of BcdGetElementData @ 0x14080210C
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1406122E0 (WheaPersistBadPageToBcd.c)
 *     BiResolveLocateDevice @ 0x140A5CCA4 (BiResolveLocateDevice.c)
 *     PopAdaptiveInitializeBootContext @ 0x140B35F44 (PopAdaptiveInitializeBootContext.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x140804F8C (BcdGetElementDataWithFlags.c)
 */

NTSTATUS __cdecl BcdGetElementData(HANDLE BcdObjectHandle, ULONG BcdElement, PVOID Buffer, PULONG BufferSize)
{
  return BcdGetElementDataWithFlags(BcdObjectHandle, BcdElement, (BCD_FLAGS)Buffer, Buffer, BufferSize);
}
