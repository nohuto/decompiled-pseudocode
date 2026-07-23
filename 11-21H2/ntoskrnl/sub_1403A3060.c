/*
 * XREFs of sub_1403A3060 @ 0x1403A3060
 * Callers:
 *     sub_1403A2770 @ 0x1403A2770 (sub_1403A2770.c)
 *     sub_1403A2810 @ 0x1403A2810 (sub_1403A2810.c)
 *     sub_1403A2920 @ 0x1403A2920 (sub_1403A2920.c)
 *     sub_1403A2FD0 @ 0x1403A2FD0 (sub_1403A2FD0.c)
 *     sub_140534F80 @ 0x140534F80 (sub_140534F80.c)
 *     sub_140535340 @ 0x140535340 (sub_140535340.c)
 *     sub_140535490 @ 0x140535490 (sub_140535490.c)
 *     sub_140535570 @ 0x140535570 (sub_140535570.c)
 * Callees:
 *     sub_1403A340C @ 0x1403A340C (sub_1403A340C.c)
 *     sub_1403A34E0 @ 0x1403A34E0 (sub_1403A34E0.c)
 *     sub_1403D20CC @ 0x1403D20CC (sub_1403D20CC.c)
 */

__int64 __fastcall sub_1403A3060(__int64 a1, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 120);
  if ( !v2 )
    return (unsigned __int8)sub_1403A340C();
  if ( v2 == 1 )
  {
    if ( a2 )
      return (unsigned __int16)(char)sub_1403A340C();
    else
      return (unsigned __int16)sub_1403A34E0();
  }
  else if ( a2 )
  {
    return (unsigned int)(char)sub_1403A340C();
  }
  else
  {
    return sub_1403D20CC();
  }
}
