/*
 * XREFs of sub_1402585E8 @ 0x1402585E8
 * Callers:
 *     sub_1403ED150 @ 0x1403ED150 (sub_1403ED150.c)
 *     sub_140670488 @ 0x140670488 (sub_140670488.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     sub_140817258 @ 0x140817258 (sub_140817258.c)
 *     sub_1408590B0 @ 0x1408590B0 (sub_1408590B0.c)
 *     sub_140A062C8 @ 0x140A062C8 (sub_140A062C8.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1402585E8(__int64 a1, char a2)
{
  __int64 v2; // rax

  v2 = *(unsigned __int16 *)(a1 + 8);
  return (unsigned __int16)v2 < (unsigned __int16)word_140D05014
      && (a2 || *(_QWORD *)a1)
      && (qword_140D06E48[v2] & *(_QWORD *)a1) == *(_QWORD *)a1
      && !(*(_WORD *)(a1 + 10) | (unsigned __int16)(*(_WORD *)(a1 + 12) | *(_WORD *)(a1 + 14)));
}
