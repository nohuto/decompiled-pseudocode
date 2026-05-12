/*
 * XREFs of sub_1C00A1BE4 @ 0x1C00A1BE4
 * Callers:
 *     sub_1C0007860 @ 0x1C0007860 (sub_1C0007860.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C001A3AC @ 0x1C001A3AC (sub_1C001A3AC.c)
 */

__int64 __fastcall sub_1C00A1BE4(_DWORD *a1, __int64 a2)
{
  CCHAR v2; // dl
  __int64 v3; // rcx
  __int64 v4; // r9

  if ( a1[243] || a1[244] || a1[245] )
    *(_DWORD *)(a2 + 56) |= 0x20u;
  if ( (unsigned int)sub_1C001A3AC((__int64)a1) )
    *(_DWORD *)(v4 + 56) |= 2u;
  if ( (*(_BYTE *)(v3 + 450) & 0x20) != 0 )
    *(_DWORD *)(v4 + 56) |= 4u;
  return sub_1C0003440((PIRP)v4, v2, 0);
}
