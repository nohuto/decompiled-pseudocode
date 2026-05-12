/*
 * XREFs of sub_1C00076F4 @ 0x1C00076F4
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 *     sub_1C0007650 @ 0x1C0007650 (sub_1C0007650.c)
 *     sub_1C0011EE8 @ 0x1C0011EE8 (sub_1C0011EE8.c)
 *     sub_1C0012228 @ 0x1C0012228 (sub_1C0012228.c)
 *     sub_1C00127A8 @ 0x1C00127A8 (sub_1C00127A8.c)
 *     sub_1C001284C @ 0x1C001284C (sub_1C001284C.c)
 *     sub_1C0012900 @ 0x1C0012900 (sub_1C0012900.c)
 *     sub_1C0014A1C @ 0x1C0014A1C (sub_1C0014A1C.c)
 *     sub_1C00161D0 @ 0x1C00161D0 (sub_1C00161D0.c)
 *     sub_1C001C0C0 @ 0x1C001C0C0 (sub_1C001C0C0.c)
 *     sub_1C001D8EC @ 0x1C001D8EC (sub_1C001D8EC.c)
 *     sub_1C00222EC @ 0x1C00222EC (sub_1C00222EC.c)
 *     sub_1C003D5C0 @ 0x1C003D5C0 (sub_1C003D5C0.c)
 *     sub_1C0045280 @ 0x1C0045280 (sub_1C0045280.c)
 *     sub_1C00454F4 @ 0x1C00454F4 (sub_1C00454F4.c)
 *     sub_1C005E3A8 @ 0x1C005E3A8 (sub_1C005E3A8.c)
 *     sub_1C0060100 @ 0x1C0060100 (sub_1C0060100.c)
 *     sub_1C0067DA0 @ 0x1C0067DA0 (sub_1C0067DA0.c)
 *     sub_1C00A3A64 @ 0x1C00A3A64 (sub_1C00A3A64.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C00076F4(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 296)) )
    return (unsigned int)-1073741738;
  return v1;
}
