/*
 * XREFs of HalpMapEarlyPages @ 0x140505740
 * Callers:
 *     <none>
 * Callees:
 *     HalpMap @ 0x14037E878 (HalpMap.c)
 */

unsigned __int64 __fastcall HalpMapEarlyPages(__int64 a1, __int64 a2, unsigned int a3)
{
  return HalpMap(a1, a2, 1u, 0LL, a3);
}
