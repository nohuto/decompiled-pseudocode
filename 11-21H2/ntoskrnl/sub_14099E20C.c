/*
 * XREFs of sub_14099E20C @ 0x14099E20C
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_1403CEDC4 @ 0x1403CEDC4 (sub_1403CEDC4.c)
 *     sub_1403CF1A0 @ 0x1403CF1A0 (sub_1403CF1A0.c)
 *     sub_14081A654 @ 0x14081A654 (sub_14081A654.c)
 */

__int64 __fastcall sub_14099E20C(_WORD *a1)
{
  unsigned int v2; // ebx
  unsigned int v4; // r9d
  char v5; // r8
  unsigned __int16 i; // cx
  __int64 v7; // rdx
  char v8; // al

  sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
  if ( *a1 < 0x20u )
  {
    v4 = dword_140C1CF34;
    v2 = 0;
    v5 = 0;
    for ( i = 0; i < v4; ++i )
    {
      v7 = qword_140C1CF38 + 336LL * i;
      if ( *(_WORD *)(v7 + 4) == *a1 )
      {
        v8 = *(_BYTE *)(v7 + 146);
        if ( (v8 & 1) != 0 )
        {
          v5 = 1;
          *(_BYTE *)(v7 + 146) = v8 & 0xFE;
        }
      }
    }
    if ( v5 )
    {
      sub_1403CEDC4();
      sub_14081A654();
      sub_1403CF1A0();
      return v2;
    }
  }
  else
  {
    v2 = -1073741811;
  }
  sub_140224C00(&qword_140C22FE0);
  return v2;
}
