/*
 * XREFs of sub_1C003F1F0 @ 0x1C003F1F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0008570 @ 0x1C0008570 (sub_1C0008570.c)
 */

__int64 __fastcall sub_1C003F1F0(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  _BYTE *v4; // rax
  int v5; // r9d
  unsigned int v7; // ecx

  v4 = *(_BYTE **)(a1 + 40);
  *a4 = 0;
  v5 = *(_BYTE *)(a2 + 3) & 0x3F;
  if ( v5 != 1 && v5 != 18 )
    return sub_1C0008570(*(_BYTE *)(a2 + 3));
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v7 = *(_DWORD *)(a2 + 60);
  else
    v7 = *(_DWORD *)(a2 + 16);
  if ( v7 < 9 || v4[3] != 60 || v4[1] != 0xB1 )
    return 3221225473LL;
  if ( (v4[8] & 0x30) == 0x10 )
    *(_WORD *)(a3 + 56) |= 2u;
  return 0LL;
}
