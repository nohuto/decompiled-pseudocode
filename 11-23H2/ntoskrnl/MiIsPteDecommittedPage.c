/*
 * XREFs of MiIsPteDecommittedPage @ 0x1402E4F94
 * Callers:
 *     MiCommitExistingVad @ 0x140276CC0 (MiCommitExistingVad.c)
 *     MiComputePageCommitment @ 0x1402E4D40 (MiComputePageCommitment.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiIsPrototypePteVadLookup @ 0x14027D190 (MiIsPrototypePteVadLookup.c)
 */

__int64 __fastcall MiIsPteDecommittedPage(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned int v7; // r8d

  v1 = *(_QWORD *)a1;
  if ( MiPteInShadowRange(a1)
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v1 & 1) != 0
    && ((v1 & 0x20) == 0 || (v1 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v5 = v1 | 0x20;
      v6 = *((_QWORD *)&Flink->Flink + ((a1 >> 3) & 0x1FF));
      if ( (v6 & 0x20) == 0 )
        v5 = v1;
      v1 = v5;
      if ( (v6 & 0x42) != 0 )
        v1 = v5 | 0x42;
    }
  }
  if ( (v1 & 0x3E0) != 0x200 || (v1 & 1) != 0 )
    return 0LL;
  if ( (v1 & 0x400) == 0 )
    return 1LL;
  LOBYTE(v7) = MiIsPrototypePteVadLookup(v1);
  return v7;
}
