/*
 * XREFs of ?Free@SC_ENV@@SAXPEAX@Z @ 0x1C000E4A0
 * Callers:
 *     PmReadPartitionTable @ 0x1C0021460 (PmReadPartitionTable.c)
 * Callees:
 *     <none>
 */

void __fastcall SC_ENV::Free(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
