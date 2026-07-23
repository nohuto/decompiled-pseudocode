/*
 * XREFs of FsRtlInitializeBaseMcbEx @ 0x1402021D0
 * Callers:
 *     FsRtlInitializeLargeMcb @ 0x140202160 (FsRtlInitializeLargeMcb.c)
 *     FsRtlInitializeBaseMcb @ 0x140541180 (FsRtlInitializeBaseMcb.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 */

BOOLEAN __stdcall FsRtlInitializeBaseMcbEx(PBASE_MCB Mcb, POOL_TYPE PoolType, USHORT Flags)
{
  char v3; // di
  void *v5; // rax

  Mcb->PairCount = 0;
  v3 = Flags;
  Mcb->PoolType = PoolType;
  Mcb->Flags = Flags;
  if ( PoolType == PagedPool )
    v5 = (void *)sub_140202234(&stru_140CE2500);
  else
    v5 = (void *)sub_140202234(&stru_140CE2480);
  Mcb->Mapping = v5;
  if ( v5 )
  {
    Mcb->MaximumPairCount = 15;
    return 1;
  }
  else
  {
    if ( (v3 & 1) != 0 )
      RtlRaiseStatus(-1073741670);
    return 0;
  }
}
