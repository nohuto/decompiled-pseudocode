/*
 * XREFs of sub_1403CB454 @ 0x1403CB454
 * Callers:
 *     sub_140841B4C @ 0x140841B4C (sub_140841B4C.c)
 *     sub_140841E78 @ 0x140841E78 (sub_140841E78.c)
 *     sub_14084205C @ 0x14084205C (sub_14084205C.c)
 * Callees:
 *     sub_1402DCD64 @ 0x1402DCD64 (sub_1402DCD64.c)
 */

__int64 __fastcall sub_1403CB454(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 *v4; // r11
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  *a1 = 0LL;
  if ( (unsigned __int64)(a3 - 8) > 0x7FF7 )
    return 3221225485LL;
  result = sub_1402DCD64((_WORD *)(a2 + 6), a3 - 6, &v5);
  if ( (int)result >= 0 )
  {
    if ( v5 + 8 < v5 )
    {
      return 3221225621LL;
    }
    else
    {
      *v4 = (v5 + 11) & 0xFFFFFFFFFFFFFFFCuLL;
      return 0LL;
    }
  }
  return result;
}
