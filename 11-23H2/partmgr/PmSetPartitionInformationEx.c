/*
 * XREFs of PmSetPartitionInformationEx @ 0x1C0026BE0
 * Callers:
 *     PartitionIoctlSetPartitionInfo @ 0x1C001E74C (PartitionIoctlSetPartitionInfo.c)
 *     PartitionIoctlSetPartitionAttributes @ 0x1C00253E0 (PartitionIoctlSetPartitionAttributes.c)
 *     PartitionIoctlSetPartitionInfoEx @ 0x1C0025564 (PartitionIoctlSetPartitionInfoEx.c)
 * Callees:
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 *     PmInvalidatePartitionTableCache @ 0x1C0005B8C (PmInvalidatePartitionTableCache.c)
 *     PmSetPartition @ 0x1C0024FD8 (PmSetPartition.c)
 */

__int64 __fastcall PmSetPartitionInformationEx(__int64 a1, struct _SET_PARTITION_INFORMATION_EX *a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 24);
  if ( *(_BYTE *)(v2 + 604) && *(_BYTE *)(a1 + 197) )
    return 3221225506LL;
  result = PmSetPartition(*(_QWORD *)(v2 + 8), *(_DWORD *)(a1 + 160), a2);
  if ( (int)result >= 0 )
  {
    PmInvalidatePartitionTableCache(v2);
    return PmGetDriveLayoutEx((KSPIN_LOCK *)v2, 0LL);
  }
  return result;
}
