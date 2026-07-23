/*
 * XREFs of sub_140815F88 @ 0x140815F88
 * Callers:
 *     sub_140814FBC @ 0x140814FBC (sub_140814FBC.c)
 *     sub_140815F0C @ 0x140815F0C (sub_140815F0C.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_140815F88(_QWORD *a1)
{
  __int64 v1; // r8
  __int64 *i; // rdx
  __int64 v4; // rcx

  v1 = 0LL;
  if ( a1 )
  {
    for ( i = (__int64 *)qword_140C16800; &qword_140C16800 != i; i = (__int64 *)*i )
    {
      v4 = *a1 - i[2];
      if ( *a1 == i[2] )
        v4 = a1[1] - i[3];
      if ( !v4 )
        return i;
    }
  }
  return (__int64 *)v1;
}
