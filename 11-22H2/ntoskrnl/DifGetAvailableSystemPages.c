/*
 * XREFs of DifGetAvailableSystemPages @ 0x1405F8684
 * Callers:
 *     VfLwSPEntry @ 0x1405F8728 (VfLwSPEntry.c)
 * Callees:
 *     MmCreatePartition @ 0x1403ABECC (MmCreatePartition.c)
 *     memset @ 0x140435400 (memset.c)
 *     MmManagePartitionMemoryInformation @ 0x14076060C (MmManagePartitionMemoryInformation.c)
 */

__int64 DifGetAvailableSystemPages()
{
  __int64 result; // rax

  if ( DifIsVolatileMode )
  {
    DifpLwSPAvailableSystemPages = *(_QWORD *)(*(_QWORD *)qword_140C674C8 + 17216LL);
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
        dword_140D18C84 = -1;
        dword_140D18C88 = -1;
        result = MmManagePartitionMemoryInformation(&DifpSystemPartition, &DifpSPMemoryInfo);
        if ( (int)result >= 0 )
          DifpLwSPAvailableSystemPages = qword_140D18CB8;
      }
      else
      {
        return 3221225506LL;
      }
    }
  }
  return result;
}
