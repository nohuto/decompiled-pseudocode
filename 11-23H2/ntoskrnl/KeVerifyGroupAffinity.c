/*
 * XREFs of KeVerifyGroupAffinity @ 0x140321604
 * Callers:
 *     KeSetUserGroupAffinityThread @ 0x1403AAF8C (KeSetUserGroupAffinityThread.c)
 *     sub_1403E5A20 @ 0x1403E5A20 (sub_1403E5A20.c)
 *     NtSetInformationThread @ 0x1407337A0 (NtSetInformationThread.c)
 *     PspBuildCreateProcessContext @ 0x140771358 (PspBuildCreateProcessContext.c)
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 *     IopConnectInterrupt @ 0x14078E950 (IopConnectInterrupt.c)
 *     IopConnectInterruptFullySpecified @ 0x14085B340 (IopConnectInterruptFullySpecified.c)
 *     ExpProfileCreate @ 0x140A03F08 (ExpProfileCreate.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeVerifyGroupAffinity(__int64 a1, char a2)
{
  __int64 v2; // rax

  v2 = *(unsigned __int16 *)(a1 + 8);
  return (unsigned __int16)v2 < (unsigned __int16)KiActiveGroups
      && (a2 || *(_QWORD *)a1)
      && (qword_140D1EFF8[v2] & *(_QWORD *)a1) == *(_QWORD *)a1
      && !(*(_WORD *)(a1 + 10) | (unsigned __int16)(*(_WORD *)(a1 + 12) | *(_WORD *)(a1 + 14)));
}
