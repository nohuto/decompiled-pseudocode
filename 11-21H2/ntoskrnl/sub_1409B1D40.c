/*
 * XREFs of sub_1409B1D40 @ 0x1409B1D40
 * Callers:
 *     PsStartSiloMonitor @ 0x140852D60 (PsStartSiloMonitor.c)
 *     sub_1409B1F54 @ 0x1409B1F54 (sub_1409B1F54.c)
 * Callees:
 *     sub_1403D683C @ 0x1403D683C (sub_1403D683C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

BOOLEAN __fastcall sub_1409B1D40(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx

  sub_1403D683C(2, a1, (unsigned __int16 *)(a2 + 40), 0);
  sub_14042A5E0(a1, v4);
  return sub_1403D683C(3, a1, (unsigned __int16 *)(a2 + 40), 0);
}
