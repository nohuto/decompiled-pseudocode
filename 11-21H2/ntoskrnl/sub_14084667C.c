/*
 * XREFs of sub_14084667C @ 0x14084667C
 * Callers:
 *     sub_1405251A0 @ 0x1405251A0 (sub_1405251A0.c)
 *     sub_1405264A0 @ 0x1405264A0 (sub_1405264A0.c)
 *     sub_140846600 @ 0x140846600 (sub_140846600.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14084667C(__int64 a1, __int64 **a2)
{
  __int64 *v2; // rdi
  unsigned int v3; // ebx
  char v4; // al
  __int64 *v5; // rsi
  __int64 *i; // rdi

  v2 = (__int64 *)qword_140C4BCE0;
  v3 = 0;
  v4 = 0;
  v5 = 0LL;
  while ( v2 != &qword_140C4BCE0 )
  {
    v5 = v2;
    if ( v2[24] )
    {
      v4 = sub_14042A5E0(v2[2], a1);
      if ( v4 )
        break;
    }
    v2 = (__int64 *)*v2;
  }
  for ( i = (__int64 *)qword_140C4BCE0; i != &qword_140C4BCE0; i = (__int64 *)*i )
  {
    if ( v4 )
      goto LABEL_8;
    v5 = i;
    if ( i[24] )
    {
      v4 = sub_14042A5E0(i[2], a1);
      if ( v4 )
        goto LABEL_8;
    }
  }
  if ( !v4 )
    return (unsigned int)-1073741275;
LABEL_8:
  *a2 = v5;
  return v3;
}
