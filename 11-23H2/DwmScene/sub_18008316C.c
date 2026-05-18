/*
 * XREFs of sub_18008316C @ 0x18008316C
 * Callers:
 *     sub_180082034 @ 0x180082034 (sub_180082034.c)
 *     sub_18008214C @ 0x18008214C (sub_18008214C.c)
 *     sub_180082598 @ 0x180082598 (sub_180082598.c)
 *     sub_180082CD8 @ 0x180082CD8 (sub_180082CD8.c)
 *     sub_18008301C @ 0x18008301C (sub_18008301C.c)
 *     sub_180083148 @ 0x180083148 (sub_180083148.c)
 *     sub_18008323C @ 0x18008323C (sub_18008323C.c)
 *     sub_180085154 @ 0x180085154 (sub_180085154.c)
 *     sub_180085280 @ 0x180085280 (sub_180085280.c)
 *     sub_1800856EC @ 0x1800856EC (sub_1800856EC.c)
 *     sub_1800858DC @ 0x1800858DC (sub_1800858DC.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18008316C(__int64 a1, unsigned __int16 a2)
{
  return *(_WORD *)(a1 + 2LL * a2 + 128) != 0xFFFF;
}
