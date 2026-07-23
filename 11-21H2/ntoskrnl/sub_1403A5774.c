/*
 * XREFs of sub_1403A5774 @ 0x1403A5774
 * Callers:
 *     sub_140350070 @ 0x140350070 (sub_140350070.c)
 * Callees:
 *     sub_140353A00 @ 0x140353A00 (sub_140353A00.c)
 *     sub_14036E090 @ 0x14036E090 (sub_14036E090.c)
 *     sub_1405F31D8 @ 0x1405F31D8 (sub_1405F31D8.c)
 */

unsigned __int64 __fastcall sub_1403A5774(__int64 a1, unsigned __int64 i, int a3, int a4)
{
  char v4; // r11
  unsigned int v6; // r10d
  __int64 v9; // r8
  unsigned __int8 v10; // al
  unsigned int v11; // ebx
  unsigned __int64 j; // rcx
  __int64 v14; // r9
  unsigned __int64 v15; // r8
  int v16; // ebx
  __int16 *v17; // rdx
  unsigned __int64 v18; // rax
  _QWORD **v19; // rax
  unsigned __int64 v20; // rcx
  _QWORD *v21; // rcx
  __int64 v22; // rbx

  v4 = *(_BYTE *)(a1 + 8);
  v6 = a3 << v4;
  while ( 1 )
  {
    v9 = *(unsigned __int8 *)(i + 31) << v4;
    if ( !a4 )
      goto LABEL_14;
    v10 = *(_BYTE *)(i + 30);
    if ( v10 <= 2u )
      break;
LABEL_21:
    v19 = *(_QWORD ***)(i + 8);
    v20 = i;
    if ( v19 )
    {
      v21 = *v19;
      for ( i = *(_QWORD *)(i + 8); v21; v21 = (_QWORD *)*v21 )
        i = (unsigned __int64)v21;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v20 )
          break;
        v20 = i;
      }
    }
    if ( !i )
      return 0LL;
  }
  if ( !v10 && (v6 <= ((unsigned int)v9 & 0x1FFFFF) || (v9 & 0x1FFFFF) == 0) )
  {
    v11 = 0;
LABEL_7:
    sub_14036E090(a1, i);
    goto LABEL_8;
  }
LABEL_14:
  v14 = (i & *(_QWORD *)a1) + ((__int64)(i - (i & *(_QWORD *)a1)) >> 5 << v4);
  v15 = v14 + v9;
  v16 = v14;
  v17 = (__int16 *)(*(_QWORD *)((v14 & *(_QWORD *)a1) + 0x18)
                  + 2 * ((v14 - ((unsigned __int64)v14 & *(_QWORD *)a1)) >> 21));
  for ( j = (v14 + 0x200000) & 0xFFFFFFFFFFE00000uLL; ; j += 0x200000LL )
  {
    if ( *v17 < 0 )
    {
      v18 = v15;
      if ( j < v15 )
        v18 = j;
      j = v18;
      if ( (int)v18 - v16 >= v6 )
        break;
    }
    if ( j >= v15 )
      goto LABEL_21;
    v16 = j;
    ++v17;
  }
  v11 = v16 - v14;
  if ( a4 )
    goto LABEL_7;
LABEL_8:
  if ( v11 )
  {
    LOBYTE(j) = *(_BYTE *)(a1 + 8);
    v22 = sub_1405F31D8(j, i, v11 >> j);
    sub_140353A00(a1, i, 0);
    return v22;
  }
  return i;
}
