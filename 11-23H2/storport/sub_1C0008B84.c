/*
 * XREFs of sub_1C0008B84 @ 0x1C0008B84
 * Callers:
 *     sub_1C00052B0 @ 0x1C00052B0 (sub_1C00052B0.c)
 *     sub_1C0008990 @ 0x1C0008990 (sub_1C0008990.c)
 *     sub_1C0008A7C @ 0x1C0008A7C (sub_1C0008A7C.c)
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 *     sub_1C0010614 @ 0x1C0010614 (sub_1C0010614.c)
 *     sub_1C0012B64 @ 0x1C0012B64 (sub_1C0012B64.c)
 *     sub_1C0012E40 @ 0x1C0012E40 (sub_1C0012E40.c)
 *     sub_1C00130BC @ 0x1C00130BC (sub_1C00130BC.c)
 *     sub_1C001313C @ 0x1C001313C (sub_1C001313C.c)
 *     sub_1C0013220 @ 0x1C0013220 (sub_1C0013220.c)
 *     sub_1C001AEA8 @ 0x1C001AEA8 (sub_1C001AEA8.c)
 *     sub_1C001AF48 @ 0x1C001AF48 (sub_1C001AF48.c)
 *     sub_1C0026320 @ 0x1C0026320 (sub_1C0026320.c)
 *     sub_1C004C09C @ 0x1C004C09C (sub_1C004C09C.c)
 *     sub_1C004D6F0 @ 0x1C004D6F0 (sub_1C004D6F0.c)
 *     sub_1C004D880 @ 0x1C004D880 (sub_1C004D880.c)
 *     sub_1C004D914 @ 0x1C004D914 (sub_1C004D914.c)
 *     sub_1C004DAE0 @ 0x1C004DAE0 (sub_1C004DAE0.c)
 *     sub_1C004EDF0 @ 0x1C004EDF0 (sub_1C004EDF0.c)
 *     sub_1C004EF10 @ 0x1C004EF10 (sub_1C004EF10.c)
 *     sub_1C004F2C0 @ 0x1C004F2C0 (sub_1C004F2C0.c)
 *     sub_1C004F608 @ 0x1C004F608 (sub_1C004F608.c)
 *     sub_1C004F710 @ 0x1C004F710 (sub_1C004F710.c)
 *     sub_1C004F800 @ 0x1C004F800 (sub_1C004F800.c)
 *     sub_1C004F920 @ 0x1C004F920 (sub_1C004F920.c)
 *     sub_1C004FCC0 @ 0x1C004FCC0 (sub_1C004FCC0.c)
 *     sub_1C005E76C @ 0x1C005E76C (sub_1C005E76C.c)
 *     sub_1C00602B8 @ 0x1C00602B8 (sub_1C00602B8.c)
 *     sub_1C0060344 @ 0x1C0060344 (sub_1C0060344.c)
 *     sub_1C0063710 @ 0x1C0063710 (sub_1C0063710.c)
 *     sub_1C006BD2C @ 0x1C006BD2C (sub_1C006BD2C.c)
 *     sub_1C006C180 @ 0x1C006C180 (sub_1C006C180.c)
 *     sub_1C0071BB8 @ 0x1C0071BB8 (sub_1C0071BB8.c)
 *     sub_1C00A408C @ 0x1C00A408C (sub_1C00A408C.c)
 *     sub_1C00A48BC @ 0x1C00A48BC (sub_1C00A48BC.c)
 *     sub_1C00ABA28 @ 0x1C00ABA28 (sub_1C00ABA28.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall sub_1C0008B84(__int64 a1)
{
  BOOLEAN result; // al

  result = 0;
  if ( *(char *)(a1 + 449) < 0 )
    return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
  return result;
}
