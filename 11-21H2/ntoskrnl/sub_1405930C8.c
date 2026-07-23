/*
 * XREFs of sub_1405930C8 @ 0x1405930C8
 * Callers:
 *     sub_14055CF88 @ 0x14055CF88 (sub_14055CF88.c)
 *     sub_140A66EB4 @ 0x140A66EB4 (sub_140A66EB4.c)
 *     sub_140A67248 @ 0x140A67248 (sub_140A67248.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140592758 @ 0x140592758 (sub_140592758.c)
 *     sub_140593218 @ 0x140593218 (sub_140593218.c)
 */

__int64 __fastcall sub_1405930C8(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 *v6; // rsi
  __int64 v7; // rbp
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 *v11; // rsi
  int v12; // eax
  int v13; // eax

  v2 = 0;
  if ( (a2 & 1) != 0 )
  {
    v5 = sub_140593218(a1, qword_140D069A8, 48 * (qword_140C50840 + 1));
    if ( v5 < 0 )
      v2 = v5;
  }
  if ( (a2 & 2) != 0 && (_DWORD)dword_140D06884 )
  {
    v6 = qword_140D088C0;
    v7 = (unsigned int)dword_140D06884;
    do
    {
      v8 = sub_14042A5E0(a1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v6++ + 8) + 184LL) + 40LL) >> 12);
      if ( v8 < 0 )
        v2 = v8;
      --v7;
    }
    while ( v7 );
  }
  if ( (a2 & 4) != 0 )
  {
    v9 = sub_140593218(a1, qword_140D068F0, qword_140D06AD8 - (_QWORD)qword_140D068F0);
    if ( v9 < 0 )
      v2 = v9;
  }
  if ( (a2 & 8) != 0 )
  {
    v10 = sub_140593218(a1, qword_140D06988, qword_140D06AF0 - (_QWORD)qword_140D06988);
    if ( v10 < 0 )
      v2 = v10;
  }
  if ( (a2 & 0x10) != 0 )
  {
    v11 = (__int64 *)qword_140C53480;
    while ( v11 != &qword_140C53480 )
    {
      v12 = sub_140593218(a1, v11 - 15, 960LL);
      v11 = (__int64 *)*v11;
      if ( v12 < 0 )
        v2 = v12;
    }
  }
  if ( (a2 & 0x20) != 0 )
  {
    v13 = sub_140592758(a1);
    if ( v13 < 0 )
      return (unsigned int)v13;
  }
  return v2;
}
