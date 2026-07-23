/*
 * XREFs of sub_140995D54 @ 0x140995D54
 * Callers:
 *     sub_1405D6AC0 @ 0x1405D6AC0 (sub_1405D6AC0.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_140809508 @ 0x140809508 (sub_140809508.c)
 *     sub_1409A0730 @ 0x1409A0730 (sub_1409A0730.c)
 */

__int64 __fastcall sub_140995D54(char a1, int a2, int a3)
{
  int v6; // ecx
  unsigned int v7; // edi

  sub_1402D66A8((ULONG_PTR)&qword_140C21D20);
  if ( (_DWORD)xmmword_140C20BF8 == 1 )
  {
    v7 = 0;
    if ( a1 )
      goto LABEL_5;
    goto LABEL_7;
  }
  if ( (_DWORD)xmmword_140C20BF8 == 4 )
  {
    v7 = 0;
    if ( !a1 )
    {
LABEL_5:
      LOBYTE(xmmword_140C20C08) = 0;
      *(_QWORD *)((char *)&xmmword_140C20C08 + 4) = 0LL;
      goto LABEL_8;
    }
LABEL_7:
    LOBYTE(xmmword_140C20C08) = 1;
    DWORD1(xmmword_140C20C08) = a2;
    DWORD2(xmmword_140C20C08) = a3;
    sub_140809508((__int64)&qword_140C20BC0);
    v7 = 259;
    goto LABEL_8;
  }
  v7 = -1073741811;
LABEL_8:
  LOBYTE(v6) = a1;
  sub_1409A0730(v6, a2, (unsigned int)&xmmword_140C20BD0, (unsigned int)&xmmword_140C20BF8, v7);
  sub_1402935D0((ULONG_PTR)&qword_140C21D20);
  return v7;
}
