/*
 * XREFs of sub_140A616F8 @ 0x140A616F8
 * Callers:
 *     sub_1403BACF8 @ 0x1403BACF8 (sub_1403BACF8.c)
 *     sub_140A61878 @ 0x140A61878 (sub_140A61878.c)
 *     sub_140A619DC @ 0x140A619DC (sub_140A619DC.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140A616F8(__int64 a1, int *a2, char a3, __int64 a4)
{
  int v4; // ecx
  __int16 v5; // ax
  int v6; // ecx
  int v7; // ecx
  char v8; // al
  int v9; // ecx
  int v10; // ecx
  __int16 v11; // ax

  v4 = *a2;
  *(_QWORD *)a4 = 0x4000000000000000LL;
  v5 = *((_WORD *)a2 + 2);
  *(_WORD *)(a4 + 2) = v5;
  v6 = v4 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        v8 = *((_BYTE *)a2 + 8);
        *(_WORD *)(a4 + 6) |= 4u;
        *(_BYTE *)(a4 + 5) = v8;
        LOBYTE(v5) = *((_BYTE *)a2 + 9);
        *(_BYTE *)(a4 + 4) = v5;
      }
    }
    else
    {
      v9 = *((unsigned __int8 *)a2 + 10);
      *(_WORD *)(a4 + 6) &= ~4u;
      *(_BYTE *)(a4 + 1) = *((_BYTE *)a2 + 8);
      LOBYTE(v5) = 8 * *((_BYTE *)a2 + 9);
      *(_BYTE *)a4 = v5 | v9 & 7;
    }
  }
  else
  {
    v10 = *((unsigned __int8 *)a2 + 10);
    *(_BYTE *)(a4 + 1) = *((_BYTE *)a2 + 8);
    v11 = *(_WORD *)(a4 + 6);
    *(_BYTE *)a4 = (8 * *((_BYTE *)a2 + 9)) | v10 & 7;
    v5 = v11 & 0xFFF8;
    *(_WORD *)(a4 + 6) = v5 | a3 & 3;
  }
  return v5;
}
