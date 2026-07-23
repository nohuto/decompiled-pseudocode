/*
 * XREFs of MiUnfreezeIoPfnNode @ 0x14062EFB8
 * Callers:
 *     MiDbgUnTranslatePhysicalAddress @ 0x1406447B0 (MiDbgUnTranslatePhysicalAddress.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7E90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

void __fastcall MiUnfreezeIoPfnNode(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx

  v1 = *a1;
  v2 = *((_QWORD *)KeGetCurrentPrcb()->MmInternal + 1577);
  if ( v1 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 172));
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v2 + 384));
}
