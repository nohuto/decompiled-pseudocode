/*
 * XREFs of DifGetAvailableSystemPages @ 0x1406289C8
 * Callers:
 *     VfLwSPEntry @ 0x140628A6C (VfLwSPEntry.c)
 * Callees:
 *     MmCreatePartition @ 0x1403D981C (MmCreatePartition.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MmManagePartitionMemoryInformation @ 0x1407DE98C (MmManagePartitionMemoryInformation.c)
 */

__int64 DifGetAvailableSystemPages()
{
  __int64 result; // rax

  if ( DifIsVolatileMode )
  {
    DifpLwSPAvailableSystemPages = *(_QWORD *)(*(_QWORD *)qword_140C51F48 + 16896LL);
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
        dword_140D019AC = -1;
        dword_140D019B0 = -1;
        result = MmManagePartitionMemoryInformation(&DifpSystemPartition, &DifpSPMemoryInfo);
        if ( (int)result >= 0 )
          DifpLwSPAvailableSystemPages = qword_140D019E0;
      }
      else
      {
        return 3221225506LL;
      }
    }
  }
  return result;
}
