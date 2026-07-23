/*
 * XREFs of sub_140643AFC @ 0x140643AFC
 * Callers:
 *     WheaRecoveryBugCheck @ 0x1406435C0 (WheaRecoveryBugCheck.c)
 *     WheaReportHwError @ 0x140643630 (WheaReportHwError.c)
 * Callees:
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 */

char __fastcall sub_140643AFC(__int64 a1, int a2)
{
  char result; // al

  if ( a1 )
  {
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) != 0 )
      return sub_1403D99B4(a1 & 0xFFFFF000, (PVOID)(((a1 & 0xFFF) + 4095 + a2) & 0xFFFFF000));
  }
  return result;
}
