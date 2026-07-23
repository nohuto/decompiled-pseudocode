/*
 * XREFs of sub_140AB2FBC @ 0x140AB2FBC
 * Callers:
 *     sub_140AB28B8 @ 0x140AB28B8 (sub_140AB28B8.c)
 * Callees:
 *     sub_140AB3214 @ 0x140AB3214 (sub_140AB3214.c)
 *     sub_140AB3730 @ 0x140AB3730 (sub_140AB3730.c)
 *     sub_140AB378C @ 0x140AB378C (sub_140AB378C.c)
 */

__int64 __fastcall sub_140AB2FBC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r11
  char v5; // si
  __int64 v6; // rdi
  int v8; // r9d
  int v9; // r11d

  v4 = a4;
  v5 = a3;
  v6 = a2;
  if ( !a2 )
  {
    if ( (a3 & 8) == 0 )
      *(_BYTE *)(a1 + 1) = 8;
    LOBYTE(a3) = 32;
    LOBYTE(a2) = 16;
    sub_140AB3730(a1, a2, a3);
  }
  v9 = sub_140AB3214(a1, v6, v4);
  if ( v9 >= 0 )
  {
    if ( v6 )
    {
      LOBYTE(v8) = *(_BYTE *)(a1 + 25) & 1;
      sub_140AB378C(a1, v6, v5 & 7, v8, *(_QWORD *)(a1 + 32));
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v9;
}
