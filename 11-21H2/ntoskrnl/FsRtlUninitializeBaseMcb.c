/*
 * XREFs of FsRtlUninitializeBaseMcb @ 0x140203D00
 * Callers:
 *     FsRtlUninitializeLargeMcb @ 0x1402554A0 (FsRtlUninitializeLargeMcb.c)
 * Callees:
 *     sub_140203D50 @ 0x140203D50 (sub_140203D50.c)
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlUninitializeBaseMcb(PBASE_MCB Mcb)
{
  PVOID Mapping; // rdx

  if ( Mcb->MaximumPairCount == 15 )
  {
    Mapping = Mcb->Mapping;
    if ( Mcb->PoolType == 1 )
      sub_140203D50(&stru_140CE2500, Mapping);
    else
      sub_140203D88(&stru_140CE2480, Mapping);
  }
  else
  {
    ExFreePoolWithTag(Mcb->Mapping, 0);
  }
}
