/*
 * XREFs of MiContractWsSwapPageFile @ 0x1406EC1C4
 * Callers:
 *     MmInSwapWorkingSet @ 0x14025F4D4 (MmInSwapWorkingSet.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14059D170 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MmCleanProcessAddressSpace @ 0x1406F89A4 (MmCleanProcessAddressSpace.c)
 *     MmInSwapVirtualAddresses @ 0x140980040 (MmInSwapVirtualAddresses.c)
 * Callees:
 *     MiWsSwapPageFileNumber @ 0x14025FF00 (MiWsSwapPageFileNumber.c)
 *     MiNumberWsSwapPagefiles @ 0x140268BB0 (MiNumberWsSwapPagefiles.c)
 *     ExQueueWorkItemToPartition @ 0x1402EF060 (ExQueueWorkItemToPartition.c)
 *     PsReferencePartitionSafe @ 0x1403606EC (PsReferencePartitionSafe.c)
 */

char __fastcall MiContractWsSwapPageFile(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // r11
  __int64 v3; // r11
  _QWORD *v4; // rcx
  __int64 v5; // r11

  LODWORD(v1) = MiNumberWsSwapPagefiles(a1);
  if ( (_DWORD)v1 )
  {
    LODWORD(v1) = MiWsSwapPageFileNumber(v2);
    v4 = *(_QWORD **)(v3 + 8LL * (unsigned int)v1 + 16736);
    if ( v4[3] >= 0x10000uLL && v4[6] >= 0x10000uLL )
    {
      v1 = *v4 - 0x10000LL;
      if ( v1 >= v4[2] )
      {
        LODWORD(v1) = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 1144), 1, 0);
        if ( !(_DWORD)v1 )
        {
          LOBYTE(v1) = PsReferencePartitionSafe(*(_QWORD *)(v3 + 176));
          if ( (_BYTE)v1 )
            LOBYTE(v1) = ExQueueWorkItemToPartition(v5 + 1112, 3, 0xFFFFFFFF, *(_QWORD *)(v5 + 176));
          else
            _InterlockedExchange((volatile __int32 *)(v5 + 1144), 0);
        }
      }
    }
  }
  return v1;
}
