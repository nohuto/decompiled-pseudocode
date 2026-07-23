/*
 * XREFs of sub_14024F74C @ 0x14024F74C
 * Callers:
 *     sub_1406D4CBC @ 0x1406D4CBC (sub_1406D4CBC.c)
 *     sub_1406D4DF0 @ 0x1406D4DF0 (sub_1406D4DF0.c)
 *     sub_1406D4EFC @ 0x1406D4EFC (sub_1406D4EFC.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_14024F74C(PRTL_BALANCED_NODE Node)
{
  unsigned __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v5; // eax
  __int64 v6; // r8
  bool v7; // zf

  v2 = ExAcquireSpinLockExclusive(&dword_140C46D6C);
  RtlRbRemoveNode(&Parent, Node);
  Node->ParentValue = -1LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C46D6C);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v5 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v6 = *((_QWORD *)CurrentPrcb + 4375);
        v7 = (v5 & *(_DWORD *)(v6 + 20)) == 0;
        *(_DWORD *)(v6 + 20) &= v5;
        if ( v7 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&Node[7]);
}
