/*
 * XREFs of MiSetProcessPartitionId @ 0x140292928
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x140706060 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetProcessPartitionId(__int64 a1, __int16 a2)
{
  *(_WORD *)(a1 + 1838) = a2;
}
