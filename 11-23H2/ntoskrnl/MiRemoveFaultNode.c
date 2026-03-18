/*
 * XREFs of MiRemoveFaultNode @ 0x1403D6AC8
 * Callers:
 *     MiZeroLocalPages @ 0x1402CF540 (MiZeroLocalPages.c)
 *     MiDecrementHugeContext @ 0x1403D6658 (MiDecrementHugeContext.c)
 *     MiScrubLargePage @ 0x14065E96C (MiScrubLargePage.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402894C0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A930 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x14028AF50 (RtlAvlRemoveNode.c)
 */

void __fastcall MiRemoveFaultNode(__int64 a1)
{
  volatile LONG *v2; // rdi
  __int64 *v3; // rsi

  if ( *(_BYTE *)(a1 + 73) )
  {
    v2 = &dword_140C67260;
    v3 = &qword_140C67268;
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 68) )
    {
      *(_BYTE *)(a1 + 69) = 0;
      return;
    }
    v2 = &dword_140C67270;
    v3 = &qword_140C67278;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(v2);
  RtlAvlRemoveNode((unsigned __int64 *)v3, (unsigned __int64 *)a1);
  *(_BYTE *)(a1 + 69) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
}
