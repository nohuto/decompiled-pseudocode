/*
 * XREFs of RtlpFreeAtom @ 0x1406AB544
 * Callers:
 *     RtlCreateAtomTableEx @ 0x14022EB30 (RtlCreateAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x140232EF0 (RtlDestroyLowBoxAtoms.c)
 *     RtlpDereferenceAtom @ 0x140232FC4 (RtlpDereferenceAtom.c)
 *     RtlpFreeAllAtom @ 0x140233054 (RtlpFreeAllAtom.c)
 *     RtlAddAtomToAtomTableEx @ 0x1402F1090 (RtlAddAtomToAtomTableEx.c)
 *     RtlpAllocateAtomTableEntry @ 0x1403547BC (RtlpAllocateAtomTableEntry.c)
 *     RtlDestroyAtomTable @ 0x1406AB410 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1409B8CC0 (RtlEmptyAtomTable.c)
 * Callees:
 *     PsReturnSharedPoolQuota @ 0x140724DC8 (PsReturnSharedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFreeAtom(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 16);
  PsReturnSharedPoolQuota(*(PVOID *)(a1 - 16));
  ExFreePoolWithTag(v1, 0);
}
