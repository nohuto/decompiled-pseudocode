/*
 * XREFs of BcdGetElementData @ 0x140801E3C
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x140611D90 (WheaPersistBadPageToBcd.c)
 *     BiResolveLocateDevice @ 0x140A5C9F4 (BiResolveLocateDevice.c)
 *     PopAdaptiveInitializeBootContext @ 0x140B35F44 (PopAdaptiveInitializeBootContext.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x140804CBC (BcdGetElementDataWithFlags.c)
 */

__int64 __fastcall BcdGetElementData(int a1, int a2, int a3, __int64 a4)
{
  return BcdGetElementDataWithFlags(a1, a2, a3, a3, a4);
}
