/*
 * XREFs of KeVerifyGroupAffinity @ 0x140321374
 * Callers:
 *     KeSetUserGroupAffinityThread @ 0x1403AADAC (KeSetUserGroupAffinityThread.c)
 *     sub_1403E5840 @ 0x1403E5840 (sub_1403E5840.c)
 *     NtSetInformationThread @ 0x1407335B0 (NtSetInformationThread.c)
 *     PspBuildCreateProcessContext @ 0x140771168 (PspBuildCreateProcessContext.c)
 *     NtSetInformationProcess @ 0x140774540 (NtSetInformationProcess.c)
 *     IopConnectInterrupt @ 0x14078E760 (IopConnectInterrupt.c)
 *     IopConnectInterruptFullySpecified @ 0x14085B100 (IopConnectInterruptFullySpecified.c)
 *     ExpProfileCreate @ 0x140A03C78 (ExpProfileCreate.c)
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
