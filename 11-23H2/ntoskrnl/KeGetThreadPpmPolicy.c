/*
 * XREFs of KeGetThreadPpmPolicy @ 0x14057718C
 * Callers:
 *     PspGetThreadPpmPolicy @ 0x1409AE688 (PspGetThreadPpmPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetThreadPpmPolicy(__int64 a1)
{
  return (*(_DWORD *)(a1 + 956) >> 8) & 7;
}
