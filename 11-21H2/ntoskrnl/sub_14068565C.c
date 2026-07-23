/*
 * XREFs of sub_14068565C @ 0x14068565C
 * Callers:
 *     sub_140207100 @ 0x140207100 (sub_140207100.c)
 *     sub_140683F18 @ 0x140683F18 (sub_140683F18.c)
 *     sub_140684158 @ 0x140684158 (sub_140684158.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_1406D4808 @ 0x1406D4808 (sub_1406D4808.c)
 *     sub_1409B0C74 @ 0x1409B0C74 (sub_1409B0C74.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall sub_14068565C(__int64 a1, _QWORD *a2)
{
  BOOLEAN result; // al

  if ( a1 != *a2 )
    return ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
  return result;
}
