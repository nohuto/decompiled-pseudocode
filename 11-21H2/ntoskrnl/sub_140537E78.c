/*
 * XREFs of sub_140537E78 @ 0x140537E78
 * Callers:
 *     sub_140537B84 @ 0x140537B84 (sub_140537B84.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_140537E78(__int64 a1)
{
  char v2; // cl
  char v3; // di
  int v4; // eax

  v2 = *(_BYTE *)(a1 + 24);
  v3 = -121;
  if ( v2 == 9 && (*(_BYTE *)(a1 + 36) & 1) != 0 || v2 == 10 && (*(_BYTE *)(a1 + 36) & 3) != 0 )
  {
    *(_DWORD *)(a1 + 16) |= 1u;
    *(_BYTE *)(a1 + 25) = -121;
  }
  v4 = sub_14042A5E0(
         *(unsigned __int8 *)(a1 + 37),
         (*(unsigned __int8 *)(a1 + 36) >> 3) | (32 * (*(_BYTE *)(a1 + 36) & 7u)));
  if ( v4 )
  {
    switch ( *(_BYTE *)(a1 + 24) )
    {
      case 8:
        LOBYTE(v4) = 0;
        *(_BYTE *)(a1 + 28) = 0;
        break;
      case 9:
        LOBYTE(v4) = 0;
        *(_WORD *)(a1 + 28) = 0;
        break;
      case 0xA:
        LOBYTE(v4) = 0;
        *(_DWORD *)(a1 + 28) = 0;
        break;
    }
    *(_DWORD *)(a1 + 16) &= ~1u;
    v3 = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 16) |= 1u;
  }
  *(_BYTE *)(a1 + 25) = v3;
  return v4;
}
