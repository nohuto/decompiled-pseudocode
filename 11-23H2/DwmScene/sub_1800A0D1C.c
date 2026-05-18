/*
 * XREFs of sub_1800A0D1C @ 0x1800A0D1C
 * Callers:
 *     ?_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z @ 0x1800A0D64 (-_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z.c)
 * Callees:
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_180028004 @ 0x180028004 (sub_180028004.c)
 *     sub_1800A0C4C @ 0x1800A0C4C (sub_1800A0C4C.c)
 */

__int64 __fastcall sub_1800A0D1C(__int64 a1)
{
  sub_18000B4B0(a1 + 64, 16LL, 5LL);
  sub_180028004((void **)(a1 + 48));
  sub_1800A0C4C(a1 + 8);
  return sub_1800E0DB0(a1);
}
