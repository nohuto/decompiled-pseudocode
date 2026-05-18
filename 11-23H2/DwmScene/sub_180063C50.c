/*
 * XREFs of sub_180063C50 @ 0x180063C50
 * Callers:
 *     sub_18006E3F4 @ 0x18006E3F4 (sub_18006E3F4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180063C50(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 result; // rax

  while ( a1 != a2 )
  {
    result = *a3;
    *a1++ = *a3;
  }
  return result;
}
