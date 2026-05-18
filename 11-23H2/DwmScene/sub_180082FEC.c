/*
 * XREFs of sub_180082FEC @ 0x180082FEC
 * Callers:
 *     sub_180082034 @ 0x180082034 (sub_180082034.c)
 *     sub_18008301C @ 0x18008301C (sub_18008301C.c)
 *     sub_18008323C @ 0x18008323C (sub_18008323C.c)
 *     sub_1800838E4 @ 0x1800838E4 (sub_1800838E4.c)
 *     sub_180084E14 @ 0x180084E14 (sub_180084E14.c)
 *     sub_180085154 @ 0x180085154 (sub_180085154.c)
 *     sub_180085280 @ 0x180085280 (sub_180085280.c)
 *     sub_1800856EC @ 0x1800856EC (sub_1800856EC.c)
 *     sub_1800858DC @ 0x1800858DC (sub_1800858DC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180082FEC(__int64 a1, unsigned __int16 a2)
{
  return *(_QWORD *)(a1 + 56) + 56LL * *(unsigned __int16 *)(a1 + 2LL * a2 + 128);
}
