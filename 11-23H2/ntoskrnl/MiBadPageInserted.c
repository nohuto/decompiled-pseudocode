/*
 * XREFs of MiBadPageInserted @ 0x14062978C
 * Callers:
 *     MiInsertPageInList @ 0x14026EC00 (MiInsertPageInList.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402894C0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A930 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
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
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C6CEA0);
  }
  ++dword_140C67F6C;
  if ( !byte_140C67F43 )
    byte_140C67F43 = 1;
  if ( v1 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1 + 1688);
}
