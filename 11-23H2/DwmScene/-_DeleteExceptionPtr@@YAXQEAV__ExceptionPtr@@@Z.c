/*
 * XREFs of ?_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z @ 0x1800A0D64
 * Callers:
 *     sub_18002D520 @ 0x18002D520 (sub_18002D520.c)
 * Callees:
 *     sub_1800A1190 @ 0x1800A1190 (sub_1800A1190.c)
 */

void __fastcall _DeleteExceptionPtr(struct __ExceptionPtr *const a1)
{
  sub_1800A1190();
  sub_1800A0D1C((__int64)a1);
}
