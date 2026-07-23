/*
 * XREFs of sub_1403BB97C @ 0x1403BB97C
 * Callers:
 *     sub_140A55270 @ 0x140A55270 (sub_140A55270.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403BB97C(__int64 a1, __int64 a2)
{
  __int64 *i; // rbx
  __int64 result; // rax

  if ( !byte_140C4BCBC )
  {
    for ( i = (__int64 *)qword_140C4BCE0; i != &qword_140C4BCE0; i = (__int64 *)*i )
    {
      if ( i[36] )
        result = sub_14042A5E0(i[2], a2);
    }
  }
  return result;
}
