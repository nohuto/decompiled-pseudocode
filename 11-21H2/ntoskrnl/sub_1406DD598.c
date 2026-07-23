/*
 * XREFs of sub_1406DD598 @ 0x1406DD598
 * Callers:
 *     sub_14070E104 @ 0x14070E104 (sub_14070E104.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     sub_1402557A4 @ 0x1402557A4 (sub_1402557A4.c)
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 */

__int64 __fastcall sub_1406DD598(__int64 a1, int a2)
{
  unsigned __int64 v4; // rbx

  v4 = sub_140347920(a1, 0x79517350u);
  sub_1402557A4(v4, a2 == 2);
  return sub_1402F89B0((signed __int64 *)(a1 + 1208), v4, 0x79517350u);
}
