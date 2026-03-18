/*
 * XREFs of BiSaveFirmwareVariable @ 0x140A5D424
 * Callers:
 *     BiUpdateBcdObject @ 0x140804304 (BiUpdateBcdObject.c)
 * Callees:
 *     BiSetRegistryValue @ 0x140803A1C (BiSetRegistryValue.c)
 */

__int64 __fastcall BiSaveFirmwareVariable(__int64 a1, void *a2, ULONG a3)
{
  return BiSetRegistryValue(a1, L"FirmwareVariable", (__int64)L"Description", 3u, a2, a3);
}
