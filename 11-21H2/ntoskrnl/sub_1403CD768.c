/*
 * XREFs of sub_1403CD768 @ 0x1403CD768
 * Callers:
 *     sub_140846E20 @ 0x140846E20 (sub_140846E20.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403CD768(__int64 a1, _QWORD *a2, __int64 **a3)
{
  __int64 *i; // rbx
  __int64 result; // rax

  *a2 = 0LL;
  *a3 = 0LL;
  i = (__int64 *)qword_140C4BCE0;
  result = 3221226021LL;
  while ( i != &qword_140C4BCE0 )
  {
    if ( i[11] )
    {
      result = sub_14042A5E0(i[2], a1);
      if ( (int)result >= 0 )
      {
LABEL_12:
        *a3 = i;
        return result;
      }
    }
    i = (__int64 *)*i;
  }
  for ( i = (__int64 *)qword_140C4BCE0; i != &qword_140C4BCE0; i = (__int64 *)*i )
  {
    if ( i[11] )
    {
      result = sub_14042A5E0(i[2], a1);
      if ( (int)result >= 0 )
        goto LABEL_12;
    }
  }
  return result;
}
