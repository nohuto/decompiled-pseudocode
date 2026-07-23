/*
 * XREFs of sub_14068FF20 @ 0x14068FF20
 * Callers:
 *     sub_14068FEF0 @ 0x14068FEF0 (sub_14068FEF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14068FF20(_DWORD *a1, unsigned int **a2, int *a3)
{
  int v3; // r11d
  unsigned int v4; // r9d
  __int64 result; // rax
  unsigned int *v7; // r10
  __int64 v8; // r14
  int v9; // esi
  char v10; // di
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  char v13; // al
  bool v14; // zf
  int v15; // ecx
  int v16; // eax
  bool v17; // si

  v3 = *((_DWORD *)a2 + 2);
  v4 = 0;
  result = 0LL;
  if ( !v3 )
    return result;
  v7 = *a2;
  v8 = (unsigned int)a1[21];
  while ( 1 )
  {
    v9 = a1[9];
    v10 = 0;
    v11 = a1[8];
    *a3 = 0;
    v12 = *v7;
    if ( *v7 <= (unsigned int)result || v12 >= v11 )
      break;
    v13 = 1;
    if ( v9 )
    {
      v13 = (v9 & 1) == 0;
      if ( (v9 & 2) != 0 )
        v13 |= 2u;
    }
    if ( (unsigned int)v8 <= 4 )
    {
      v17 = 0;
    }
    else
    {
      v10 = *((_BYTE *)v7 + 4);
      v14 = (unsigned __int8)(v13 & v10) == 0;
      v15 = (unsigned __int8)(v13 & v10);
      v16 = 0;
      v17 = !v14;
      if ( v15 )
        goto LABEL_9;
    }
    *a3 = 1;
    v16 = 1;
LABEL_9:
    if ( (v10 & 2) != 0 )
    {
      v16 |= 4u;
      *a3 = v16;
    }
    if ( (v10 & 8) != 0 )
      *a3 = v16 | 8;
    v7 = (unsigned int *)((char *)v7 + v8);
    --v3;
    if ( !v17 )
    {
      v4 = v12;
LABEL_15:
      *((_DWORD *)a2 + 2) = v3;
      *a2 = v7;
      return v4;
    }
    LODWORD(result) = v12;
    if ( !v3 )
      goto LABEL_15;
  }
  dword_140C4F400 = 14;
  return v4;
}
