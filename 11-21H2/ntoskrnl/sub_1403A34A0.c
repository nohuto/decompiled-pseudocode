/*
 * XREFs of sub_1403A34A0 @ 0x1403A34A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A34E0 @ 0x1403A34E0 (sub_1403A34E0.c)
 *     sub_1403D20CC @ 0x1403D20CC (sub_1403D20CC.c)
 */

__int64 __fastcall sub_1403A34A0(__int64 a1)
{
  int v2; // ecx

  if ( *(_BYTE *)(a1 + 138) )
    v2 = sub_1403D20CC(a1) + *(_DWORD *)(a1 + 20);
  else
    v2 = (unsigned __int16)(*(_WORD *)(a1 + 20) + sub_1403A34E0(a1));
  *(_DWORD *)(a1 + 104) = v2;
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 112) & 0xF;
  return 1LL;
}
