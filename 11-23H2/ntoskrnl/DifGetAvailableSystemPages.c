/*
 * XREFs of DifGetAvailableSystemPages @ 0x1405F85F4
 * Callers:
 *     VfLwSPEntry @ 0x1405F8698 (VfLwSPEntry.c)
 * Callees:
 *     MmCreatePartition @ 0x1403AC6AC (MmCreatePartition.c)
 *     memset @ 0x140435A00 (memset.c)
 *     MmManagePartitionMemoryInformation @ 0x1407600FC (MmManagePartitionMemoryInformation.c)
 */

__int64 DifGetAvailableSystemPages()
{
  __int64 result; // rax

  if ( DifIsVolatileMode )
  {
    DifpLwSPAvailableSystemPages = *(_QWORD *)(*(_QWORD *)qword_140C673C8 + 17216LL);
    return 0LL;
  }
  else
  {
    result = MmCreatePartition((union _SLIST_HEADER **)&DifpSystemPartition, 1);
    if ( (int)result >= 0 )
    {
      if ( DifpSystemPartition )
      {
        memset(&DifpSPMemoryInfo, 0, 0xF0uLL);
        dword_140D18BC4 = -1;
        dword_140D18BC8 = -1;
        result = MmManagePartitionMemoryInformation(&DifpSystemPartition, &DifpSPMemoryInfo);
        if ( (int)result >= 0 )
          DifpLwSPAvailableSystemPages = qword_140D18BF8;
      }
      else
      {
        return 3221225506LL;
      }
    }
  }
  return result;
}
