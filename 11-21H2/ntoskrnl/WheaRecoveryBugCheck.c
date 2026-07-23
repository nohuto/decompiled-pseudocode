/*
 * XREFs of WheaRecoveryBugCheck @ 0x1406435C0
 * Callers:
 *     ?Process@CPullPin@@AEAAXXZ @ 0x14057C3C0 (-Process@CPullPin@@AEAAXXZ.c)
 *     WheaReportHwError @ 0x140643630 (WheaReportHwError.c)
 * Callees:
 *     sub_140643AFC @ 0x140643AFC (sub_140643AFC.c)
 *     sub_140643DCC @ 0x140643DCC (sub_140643DCC.c)
 *     sub_140643FCC @ 0x140643FCC (sub_140643FCC.c)
 */

__int64 __fastcall WheaRecoveryBugCheck(__int64 a1, __int64 a2)
{
  sub_140643DCC(3LL, a1);
  sub_140643FCC(a1);
  PshedWriteErrorRecord(0LL, *(unsigned int *)(a1 + 20), a1);
  sub_140643AFC(a1, *(unsigned int *)(a1 + 20));
  return PshedBugCheckSystem(a2, a1);
}
