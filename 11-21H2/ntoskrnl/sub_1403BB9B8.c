/*
 * XREFs of sub_1403BB9B8 @ 0x1403BB9B8
 * Callers:
 *     sub_140A55270 @ 0x140A55270 (sub_140A55270.c)
 * Callees:
 *     sub_14051B720 @ 0x14051B720 (sub_14051B720.c)
 */

__int64 __fastcall sub_1403BB9B8(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 result; // rax

  v1 = (__int64 *)qword_140C4BCE0;
  result = 0LL;
  while ( v1 != &qword_140C4BCE0 )
  {
    if ( v1[41] )
    {
      result = sub_14051B720(v1, a1);
      if ( (int)result < 0 )
        break;
    }
    v1 = (__int64 *)*v1;
  }
  return result;
}
