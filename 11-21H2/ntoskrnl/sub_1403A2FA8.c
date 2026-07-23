/*
 * XREFs of sub_1403A2FA8 @ 0x1403A2FA8
 * Callers:
 *     sub_1403A26C0 @ 0x1403A26C0 (sub_1403A26C0.c)
 *     sub_1403A2770 @ 0x1403A2770 (sub_1403A2770.c)
 *     sub_1403A2980 @ 0x1403A2980 (sub_1403A2980.c)
 *     sub_1403A2E90 @ 0x1403A2E90 (sub_1403A2E90.c)
 *     sub_1403A2EE0 @ 0x1403A2EE0 (sub_1403A2EE0.c)
 *     sub_1403A2F5C @ 0x1403A2F5C (sub_1403A2F5C.c)
 *     sub_1403CC230 @ 0x1403CC230 (sub_1403CC230.c)
 *     sub_1403CFBE0 @ 0x1403CFBE0 (sub_1403CFBE0.c)
 *     sub_1403D0DF0 @ 0x1403D0DF0 (sub_1403D0DF0.c)
 *     sub_1403D0E30 @ 0x1403D0E30 (sub_1403D0E30.c)
 *     sub_1403D0EC0 @ 0x1403D0EC0 (sub_1403D0EC0.c)
 *     sub_1403D2130 @ 0x1403D2130 (sub_1403D2130.c)
 *     sub_1403D7560 @ 0x1403D7560 (sub_1403D7560.c)
 *     sub_1403D88E0 @ 0x1403D88E0 (sub_1403D88E0.c)
 *     sub_140534F20 @ 0x140534F20 (sub_140534F20.c)
 *     sub_140535030 @ 0x140535030 (sub_140535030.c)
 *     sub_140535070 @ 0x140535070 (sub_140535070.c)
 *     sub_140535110 @ 0x140535110 (sub_140535110.c)
 *     sub_1405353C0 @ 0x1405353C0 (sub_1405353C0.c)
 *     sub_1405355F0 @ 0x1405355F0 (sub_1405355F0.c)
 *     sub_140535670 @ 0x140535670 (sub_140535670.c)
 *     sub_140536090 @ 0x140536090 (sub_140536090.c)
 *     sub_1405362F0 @ 0x1405362F0 (sub_1405362F0.c)
 *     sub_140536510 @ 0x140536510 (sub_140536510.c)
 *     sub_140536590 @ 0x140536590 (sub_140536590.c)
 *     sub_140536620 @ 0x140536620 (sub_140536620.c)
 *     sub_1405368B0 @ 0x1405368B0 (sub_1405368B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403A2FA8(__int64 a1, unsigned __int16 *a2)
{
  int v2; // eax
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 96) = a2;
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
  *(_DWORD *)(a1 + 108) = result;
  return result;
}
