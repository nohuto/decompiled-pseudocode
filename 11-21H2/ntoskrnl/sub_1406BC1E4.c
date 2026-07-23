/*
 * XREFs of sub_1406BC1E4 @ 0x1406BC1E4
 * Callers:
 *     sub_14072427C @ 0x14072427C (sub_14072427C.c)
 *     sub_140726520 @ 0x140726520 (sub_140726520.c)
 *     sub_14072ACC0 @ 0x14072ACC0 (sub_14072ACC0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1406BC1E4(char a1, unsigned int *a2)
{
  int v2; // r9d
  unsigned int v4; // r8d
  _DWORD *v5; // rcx
  __int64 v6; // rbx
  __int64 **v7; // r10
  _DWORD *v8; // rax
  _DWORD *v9; // rcx
  __int64 v10; // r11
  LUID **v11; // r10
  LUID *v12; // rax

  v2 = 0;
  if ( !a2 )
    return 0;
  v4 = *a2;
  if ( !*a2 )
    return 0;
  v5 = a2 + 2;
  v6 = v4;
  do
  {
    v7 = off_140D3B238;
    v8 = *off_140D3B238;
    while ( *v5 != *v8 || v5[1] != v8[1] )
    {
      v8 = *++v7;
      if ( !*v7 )
        goto LABEL_10;
    }
    ++v2;
LABEL_10:
    v5 += 3;
    --v6;
  }
  while ( v6 );
  if ( (a1 & 1) != 0 && v4 )
  {
    v9 = a2 + 2;
    v10 = *a2;
    do
    {
      v11 = &off_140A38AE0;
      v12 = &stru_140D3CB60;
      while ( *v9 != v12->LowPart || v9[1] != v12->HighPart )
      {
        v12 = *++v11;
        if ( !*v11 )
          goto LABEL_17;
      }
      ++v2;
LABEL_17:
      v9 += 3;
      --v10;
    }
    while ( v10 );
  }
  return v2 != v4;
}
