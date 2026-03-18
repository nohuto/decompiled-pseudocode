/*
 * XREFs of MiMakePageFilePte @ 0x14064E250
 * Callers:
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x140A4338C (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402857A0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakePageFilePte(__int64 a1)
{
  return MiSwizzleInvalidPte(a1 << 32);
}
