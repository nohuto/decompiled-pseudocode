/*
 * XREFs of sub_140521D90 @ 0x140521D90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403B38C8 @ 0x1403B38C8 (sub_1403B38C8.c)
 */

__int64 __fastcall sub_140521D90(__int64 a1)
{
  __int64 result; // rax

  result = sub_1403B38C8(a1, (__int64)sub_140521D90, a1, 8LL, &qword_140CF87D0);
  if ( (int)result < 0 )
    qword_140CF87D0 = 0LL;
  return result;
}
