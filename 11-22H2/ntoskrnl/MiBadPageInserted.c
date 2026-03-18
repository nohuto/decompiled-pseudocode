/*
 * XREFs of MiBadPageInserted @ 0x1406297FC
 * Callers:
 *     MiInsertPageInList @ 0x14026EAE0 (MiInsertPageInList.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiBadPageInserted(int a1)
{
  unsigned __int16 *v1; // rbx

  if ( a1 )
  {
    v1 = 0LL;
  }
  else
  {
    v1 = MiSystemPartition;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C6CF60);
  }
  ++dword_140C6806C;
  if ( !byte_140C68043 )
    byte_140C68043 = 1;
  if ( v1 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1 + 1688);
}
