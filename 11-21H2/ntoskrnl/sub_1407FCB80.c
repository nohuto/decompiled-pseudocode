/*
 * XREFs of sub_1407FCB80 @ 0x1407FCB80
 * Callers:
 *     sub_1407F2400 @ 0x1407F2400 (sub_1407F2400.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1407FCB80(int *a1, __int64 a2)
{
  int v2; // r8d
  char v4; // cl
  int v6; // r8d
  int v7; // r8d
  bool v8; // zf

  v2 = *a1;
  if ( *a1 != *(_DWORD *)a2 || a1[1] != *(_DWORD *)(a2 + 4) || a1[2] != *(_DWORD *)(a2 + 8) )
    return 0;
  v4 = 0;
  if ( !v2 )
    return 1;
  v6 = v2 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 2 )
        return 1;
      if ( *((_BYTE *)a1 + 24) != *(_BYTE *)(a2 + 24) )
        return v4;
      v8 = a1[7] == *(_DWORD *)(a2 + 28);
    }
    else
    {
      if ( *((_BYTE *)a1 + 28) != *(_BYTE *)(a2 + 28) )
        return v4;
      v8 = a1[6] == *(_DWORD *)(a2 + 24);
    }
LABEL_18:
    if ( !v8 )
      return v4;
    return 1;
  }
  if ( *((_BYTE *)a1 + 25) == *(_BYTE *)(a2 + 25) && *((_BYTE *)a1 + 26) == *(_BYTE *)(a2 + 26) )
  {
    v8 = *((_BYTE *)a1 + 24) == *(_BYTE *)(a2 + 24);
    goto LABEL_18;
  }
  return v4;
}
