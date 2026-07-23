/*
 * XREFs of BiSaveFirmwareVariable @ 0x140A5D6D4
 * Callers:
 *     BiUpdateBcdObject @ 0x1408045D4 (BiUpdateBcdObject.c)
 * Callees:
 *     BiSetRegistryValue @ 0x140803CEC (BiSetRegistryValue.c)
 */

__int64 __fastcall BiSaveFirmwareVariable(__int64 a1, void *a2, ULONG a3)
{
  return BiSetRegistryValue(a1, L"FirmwareVariable", (__int64)L"Description", 3u, a2, a3);
}
