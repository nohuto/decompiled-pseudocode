/*
 * XREFs of sub_140862D20 @ 0x140862D20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1408193F4 @ 0x1408193F4 (sub_1408193F4.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_140862D20(int a1, char a2)
{
  char v3; // di
  __int64 v4; // rdx
  __int64 v5; // rcx

  v3 = a1;
  sub_140A48330(a1);
  if ( (v3 & 1) != 0 )
  {
    if ( a2 )
    {
      if ( (_BYTE)xmmword_140C23400 == 1 )
        goto LABEL_6;
      LOBYTE(xmmword_140C23400) = 1;
      goto LABEL_5;
    }
    if ( (_BYTE)xmmword_140C23400 )
    {
      LOBYTE(xmmword_140C23400) = 0;
LABEL_5:
      sub_1408193F4();
    }
  }
LABEL_6:
  if ( (v3 & 2) == 0 )
    goto LABEL_7;
  if ( a2 )
  {
    if ( BYTE1(xmmword_140C23400) == 1 )
      goto LABEL_7;
    BYTE1(xmmword_140C23400) = 1;
  }
  else
  {
    if ( !BYTE1(xmmword_140C23400) )
      goto LABEL_7;
    BYTE1(xmmword_140C23400) = 0;
  }
  sub_1408193F4();
LABEL_7:
  if ( (v3 & 4) != 0 )
  {
    if ( a2 )
    {
      if ( BYTE2(xmmword_140C23400) == 1 )
        return sub_140A47CF8(v5, v4);
      BYTE2(xmmword_140C23400) = 1;
    }
    else
    {
      if ( !BYTE2(xmmword_140C23400) )
        return sub_140A47CF8(v5, v4);
      BYTE2(xmmword_140C23400) = 0;
    }
    sub_1408193F4();
  }
  return sub_140A47CF8(v5, v4);
}
