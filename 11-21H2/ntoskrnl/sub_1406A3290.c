/*
 * XREFs of sub_1406A3290 @ 0x1406A3290
 * Callers:
 *     sub_140733B40 @ 0x140733B40 (sub_140733B40.c)
 * Callees:
 *     sub_1406A340C @ 0x1406A340C (sub_1406A340C.c)
 */

__int64 __fastcall sub_1406A3290(__int64 a1, int *a2, _DWORD *a3)
{
  int *v5; // rbx
  __int64 v6; // r9
  __int64 v7; // rax
  bool v8; // zf
  int *v9; // rcx
  int v11; // r11d
  _DWORD *v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r14d
  unsigned int v15; // esi
  __int64 v16; // rax
  unsigned int v17; // ecx

  v5 = a2;
  v6 = byte_140C25440[*(_BYTE *)(a1 + 26) & 7];
  v7 = a1 - v6;
  v8 = (*(_BYTE *)(a1 + 27) & 0x40) == 0;
  v9 = *(int **)(a1 - v6);
  if ( v8 )
  {
    v11 = *v9;
    v12 = v9 + 2;
    v13 = 0LL;
    v14 = 0;
    if ( !*v9 )
      goto LABEL_28;
    do
    {
      if ( *(int **)v12 == v5 )
      {
        if ( *(_BYTE *)(v7 + 11) != 0xFF )
        {
          ++*((_BYTE *)v12 + 11);
          *a3 = v14 + HIBYTE(*(_DWORD *)(v7 + 8)) + (*(_DWORD *)(v7 + 8) & 0xFFFFFF);
          return 0LL;
        }
        v13 = 0LL;
        v17 = *(_DWORD *)(v7 + 8);
        a2 = (int *)(v17 & 0xFFFFFF);
        v14 += HIBYTE(v17) + (_DWORD)a2;
      }
      else if ( !*(_QWORD *)v12 )
      {
        v13 = (__int64)v12;
      }
      v12 += 4;
      --v11;
    }
    while ( v11 );
    if ( v13 )
      goto LABEL_11;
    if ( v14 < 0xFFFF01 )
    {
LABEL_28:
      v13 = sub_1406A340C(a1, a2, v12, 0LL);
      if ( v13 )
      {
LABEL_11:
        *(_DWORD *)(v13 + 8) &= 0xFF000000;
        *a3 = v14 + 1;
        *(_QWORD *)v13 = v5;
        *(_BYTE *)(v13 + 11) = 1;
        return 0LL;
      }
    }
  }
  else
  {
    if ( !v9 )
    {
      *(_BYTE *)(v7 + 11) = 1;
      *(_DWORD *)(v7 + 8) &= 0xFF000000;
      *(_QWORD *)v7 = a2;
      *a3 = 1;
      return 0LL;
    }
    if ( v9 == a2 )
    {
      a2 = (int *)*(unsigned __int8 *)(v7 + 11);
      if ( (_BYTE)a2 != 0xFF )
      {
        *(_BYTE *)(v7 + 11) = (_BYTE)a2 + 1;
        *a3 = (*(_DWORD *)(v7 + 8) & 0xFFFFFF) + HIBYTE(*(_DWORD *)(v7 + 8));
        return 0LL;
      }
    }
    v15 = 0;
    if ( v9 != v5 || (v15 = (*(_DWORD *)(v7 + 8) & 0xFFFFFF) + HIBYTE(*(_DWORD *)(v7 + 8)), v15 < 0xFFFF01) )
    {
      v16 = sub_1406A340C(a1, a2, a3, v6);
      if ( v16 )
      {
        *(_DWORD *)(v16 + 8) &= 0xFF000000;
        *(_BYTE *)(v16 + 11) = 1;
        *(_QWORD *)v16 = v5;
        *a3 = v15 + 1;
        return 0LL;
      }
    }
  }
  return 3221225626LL;
}
