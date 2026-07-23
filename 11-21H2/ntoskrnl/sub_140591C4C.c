/*
 * XREFs of sub_140591C4C @ 0x140591C4C
 * Callers:
 *     sub_1405875A0 @ 0x1405875A0 (sub_1405875A0.c)
 * Callees:
 *     sub_140216544 @ 0x140216544 (sub_140216544.c)
 *     sub_1402165BC @ 0x1402165BC (sub_1402165BC.c)
 *     sub_14058676C @ 0x14058676C (sub_14058676C.c)
 */

__int64 __fastcall sub_140591C4C(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  int v5; // ebp
  int v6; // esi
  char v7; // di
  unsigned __int8 v8; // r15
  __int128 *i; // r8
  unsigned __int64 j; // rcx
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rax
  _QWORD **v13; // rax
  unsigned __int64 v14; // rdx
  _QWORD *v15; // rdx

  v2 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 1;
LABEL_2:
  v8 = sub_1402165BC(v5 + 1);
  for ( i = &xmmword_140C53100; (__int64)i < (__int64)xmmword_140C53110; i = (__int128 *)((char *)i + 8) )
  {
    j = *(_QWORD *)i;
    if ( !*(_QWORD *)i )
      continue;
    v11 = a2 + 0x3FFFF;
    while ( 1 )
    {
      v12 = *(_QWORD *)(j + 24);
      if ( v11 >= v12 )
        break;
      j = *(_QWORD *)j;
LABEL_10:
      if ( !j )
        goto LABEL_23;
    }
    if ( a2 >= v12 + 512 )
    {
      j = *(_QWORD *)(j + 8);
      goto LABEL_10;
    }
LABEL_23:
    while ( j && v11 >= *(_QWORD *)(j + 24) )
    {
      if ( *(_DWORD *)(j + 68) )
      {
        if ( !v5 )
        {
          sub_140216544(v8, 1);
          v5 = 1;
          goto LABEL_2;
        }
        ++v6;
      }
      v13 = *(_QWORD ***)(j + 8);
      v14 = j;
      if ( v13 )
      {
        v15 = *v13;
        for ( j = *(_QWORD *)(j + 8); v15; v15 = (_QWORD *)*v15 )
          j = (unsigned __int64)v15;
      }
      else
      {
        while ( 1 )
        {
          j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !j || *(_QWORD *)j == v14 )
            break;
          v14 = j;
        }
      }
    }
  }
  if ( v5 )
  {
    if ( v6 )
      sub_14058676C(a1, a2, v6);
    v7 = 2;
  }
  sub_140216544(v8, v7);
  LOBYTE(v2) = v6 != 0;
  return v2;
}
