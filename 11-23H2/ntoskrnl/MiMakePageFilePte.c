/*
 * XREFs of MiMakePageFilePte @ 0x14064E7A0
 * Callers:
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x140A4363C (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakePageFilePte(__int64 a1)
{
  return MiSwizzleInvalidPte(a1 << 32);
}
