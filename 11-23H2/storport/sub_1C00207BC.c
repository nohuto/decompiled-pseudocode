/*
 * XREFs of sub_1C00207BC @ 0x1C00207BC
 * Callers:
 *     sub_1C0020598 @ 0x1C0020598 (sub_1C0020598.c)
 *     sub_1C0020728 @ 0x1C0020728 (sub_1C0020728.c)
 *     sub_1C0058EFC @ 0x1C0058EFC (sub_1C0058EFC.c)
 *     sub_1C005C584 @ 0x1C005C584 (sub_1C005C584.c)
 *     sub_1C005C8CC @ 0x1C005C8CC (sub_1C005C8CC.c)
 *     sub_1C006D608 @ 0x1C006D608 (sub_1C006D608.c)
 *     sub_1C00A360C @ 0x1C00A360C (sub_1C00A360C.c)
 * Callees:
 *     sub_1C001AE40 @ 0x1C001AE40 (sub_1C001AE40.c)
 */

__int64 sub_1C00207BC(wchar_t *a1, __int64 a2, const wchar_t *a3, ...)
{
  __int64 result; // rax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
    return sub_1C001AE40(a1, a2, (__int64)a3, a3, va);
  result = 3221225485LL;
  if ( a2 )
    *a1 = 0;
  return result;
}
