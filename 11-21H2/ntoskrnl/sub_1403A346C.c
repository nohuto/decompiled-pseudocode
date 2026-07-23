/*
 * XREFs of sub_1403A346C @ 0x1403A346C
 * Callers:
 *     sub_1403A2720 @ 0x1403A2720 (sub_1403A2720.c)
 *     sub_1403A2770 @ 0x1403A2770 (sub_1403A2770.c)
 *     sub_1403A2810 @ 0x1403A2810 (sub_1403A2810.c)
 *     sub_1403A2980 @ 0x1403A2980 (sub_1403A2980.c)
 *     sub_1403A2EE0 @ 0x1403A2EE0 (sub_1403A2EE0.c)
 *     sub_1403A2FD0 @ 0x1403A2FD0 (sub_1403A2FD0.c)
 *     sub_1403CC4C0 @ 0x1403CC4C0 (sub_1403CC4C0.c)
 *     sub_1403CCF30 @ 0x1403CCF30 (sub_1403CCF30.c)
 *     sub_1403D0D90 @ 0x1403D0D90 (sub_1403D0D90.c)
 *     sub_1403D0E30 @ 0x1403D0E30 (sub_1403D0E30.c)
 *     sub_1403D7560 @ 0x1403D7560 (sub_1403D7560.c)
 *     sub_1403D81F0 @ 0x1403D81F0 (sub_1403D81F0.c)
 *     sub_140535490 @ 0x140535490 (sub_140535490.c)
 *     sub_140535530 @ 0x140535530 (sub_140535530.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1403A346C(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 112);
  if ( (v1 & 1) != 0 )
  {
    LOBYTE(v1) = -*(_BYTE *)(a1 + 138);
    *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  }
  else
  {
    *(_DWORD *)(a1 + 120) = 0;
  }
  return v1;
}
