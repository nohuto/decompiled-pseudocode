/*
 * XREFs of sub_1403C087C @ 0x1403C087C
 * Callers:
 *     sub_140825964 @ 0x140825964 (sub_140825964.c)
 * Callees:
 *     sub_1403C0934 @ 0x1403C0934 (sub_1403C0934.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403C087C(__int64 a1)
{
  __int64 result; // rax

  if ( sub_1403C0934(a1, 0LL, 0LL) )
    result = sub_14042A5E0(a1 + 96, a1 + 68);
  else
    result = 3221225474LL;
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 92));
  return result;
}
