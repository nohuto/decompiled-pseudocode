/*
 * XREFs of sub_14099E10C @ 0x14099E10C
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_1403CEDC4 @ 0x1403CEDC4 (sub_1403CEDC4.c)
 *     sub_1403CF1A0 @ 0x1403CF1A0 (sub_1403CF1A0.c)
 *     sub_14081A654 @ 0x14081A654 (sub_14081A654.c)
 */

__int64 __fastcall sub_14099E10C(__int64 *a1, __int64 *a2)
{
  unsigned __int16 v2; // r14
  __int64 v4; // rbp
  unsigned int v5; // ebx
  unsigned int v8; // r9d
  char v9; // cl
  unsigned __int16 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_WORD *)a1 + 4);
  v4 = *a1;
  v5 = 0;
  v14 = 0LL;
  sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
  if ( v2 > 0x20u || *((_WORD *)a1 + 5) || *((_WORD *)a1 + 6) || *((_WORD *)a1 + 7) )
    goto LABEL_7;
  if ( a2 )
  {
    if ( (~v4 & *a2) != 0 )
      goto LABEL_7;
  }
  else
  {
    a2 = &v14;
  }
  v8 = dword_140C1CF34;
  v9 = 0;
  v10 = 0;
  if ( dword_140C1CF34 )
  {
    do
    {
      v11 = qword_140C1CF38 + 336LL * v10;
      if ( *(_WORD *)(v11 + 4) == v2 )
      {
        v12 = *(_QWORD *)(v11 + 8);
        *(_QWORD *)(v11 + 32) = v4 & v12;
        v13 = *a2 & v12;
        *(_BYTE *)(v11 + 146) |= 1u;
        *(_QWORD *)(v11 + 48) = v13;
        v9 = 1;
      }
      ++v10;
    }
    while ( v10 < v8 );
    if ( v9 )
    {
      sub_1403CEDC4();
      sub_14081A654();
      sub_1403CF1A0();
      return v5;
    }
  }
LABEL_7:
  sub_140224C00(&qword_140C22FE0);
  return (unsigned int)-1073741811;
}
