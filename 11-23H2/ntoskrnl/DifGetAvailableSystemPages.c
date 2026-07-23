/*
 * XREFs of DifGetAvailableSystemPages @ 0x1405F8B64
 * Callers:
 *     VfLwSPEntry @ 0x1405F8C08 (VfLwSPEntry.c)
 * Callees:
 *     MmCreatePartition @ 0x1403AC88C (MmCreatePartition.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MmManagePartitionMemoryInformation @ 0x1407602EC (MmManagePartitionMemoryInformation.c)
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
    result = MmCreatePartition((_SLIST_HEADER **)&DifpSystemPartition, 1);
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
