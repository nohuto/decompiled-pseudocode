/*
 * XREFs of sub_1403A3038 @ 0x1403A3038
 * Callers:
 *     sub_1403A2770 @ 0x1403A2770 (sub_1403A2770.c)
 *     sub_1403A2810 @ 0x1403A2810 (sub_1403A2810.c)
 *     sub_1403A2E90 @ 0x1403A2E90 (sub_1403A2E90.c)
 *     sub_1403A2EE0 @ 0x1403A2EE0 (sub_1403A2EE0.c)
 *     sub_1403A2FD0 @ 0x1403A2FD0 (sub_1403A2FD0.c)
 *     sub_1403CC4C0 @ 0x1403CC4C0 (sub_1403CC4C0.c)
 *     sub_1403CCF30 @ 0x1403CCF30 (sub_1403CCF30.c)
 *     sub_1403CFB60 @ 0x1403CFB60 (sub_1403CFB60.c)
 *     sub_1403D0D90 @ 0x1403D0D90 (sub_1403D0D90.c)
 *     sub_1403D0DF0 @ 0x1403D0DF0 (sub_1403D0DF0.c)
 *     sub_1403D0E30 @ 0x1403D0E30 (sub_1403D0E30.c)
 *     sub_1403D2130 @ 0x1403D2130 (sub_1403D2130.c)
 *     sub_140535030 @ 0x140535030 (sub_140535030.c)
 *     sub_140535070 @ 0x140535070 (sub_140535070.c)
 *     sub_140535190 @ 0x140535190 (sub_140535190.c)
 *     sub_1405351F0 @ 0x1405351F0 (sub_1405351F0.c)
 *     sub_140535340 @ 0x140535340 (sub_140535340.c)
 *     sub_1405353C0 @ 0x1405353C0 (sub_1405353C0.c)
 *     sub_1405354E0 @ 0x1405354E0 (sub_1405354E0.c)
 *     sub_1405355F0 @ 0x1405355F0 (sub_1405355F0.c)
 *     sub_1405362F0 @ 0x1405362F0 (sub_1405362F0.c)
 *     sub_140536620 @ 0x140536620 (sub_140536620.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403A3038(__int64 a1, unsigned __int16 *a2)
{
  int v2; // eax
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 88) = a2;
  if ( v2 )
  {
    if ( v2 == 1 )
      result = *a2;
    else
      result = *(unsigned int *)a2;
  }
  else
  {
    result = *(unsigned __int8 *)a2;
  }
  *(_DWORD *)(a1 + 104) = result;
  return result;
}
