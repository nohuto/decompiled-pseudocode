/*
 * XREFs of MiPartitionObjectToPartition @ 0x140264ED0
 * Callers:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140264F60 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmAllocateContiguousMemoryEx @ 0x1403B28D0 (MmAllocateContiguousMemoryEx.c)
 *     MmGetNodeFastLargePageCounts @ 0x14057F740 (MmGetNodeFastLargePageCounts.c)
 *     MmAllocateNonChargedSecurePages @ 0x14058A110 (MmAllocateNonChargedSecurePages.c)
 *     MmFreeNonChargedSecurePages @ 0x14058A2D8 (MmFreeNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x1405B1A10 (MmAllocateSecureKernelPages.c)
 *     MmGetPageFileInformation @ 0x1407FC0D0 (MmGetPageFileInformation.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140852570 (MmGetPhysicalMemoryRangesEx2.c)
 *     MmAllocateMemoryRanges @ 0x14096AB50 (MmAllocateMemoryRanges.c)
 *     MmQueryMemoryRanges @ 0x14096ADD0 (MmQueryMemoryRanges.c)
 *     MmBuildLargePages @ 0x14097F59C (MmBuildLargePages.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x1403606EC (PsReferencePartitionSafe.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

ULONG_PTR *__fastcall MiPartitionObjectToPartition(ULONG_PTR **BugCheckParameter2, __int64 a2, _BYTE *a3)
{
  ULONG_PTR BugCheckParameter4; // r9
  char v5; // di
  int v6; // r11d
  ULONG_PTR *v7; // r10
  ULONG_PTR **v9; // r10
  ULONG_PTR v10; // r8

  LOBYTE(BugCheckParameter4) = 0;
  v5 = a2;
  v6 = 0;
  if ( BugCheckParameter2 )
  {
    if ( BugCheckParameter2 == (ULONG_PTR **)-1LL )
    {
      a2 = KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25];
      v9 = (ULONG_PTR **)(qword_140C51F48 + 8 * a2);
    }
    else
    {
      if ( BugCheckParameter2 == (ULONG_PTR **)-2LL )
      {
        v7 = 0LL;
        goto LABEL_12;
      }
      v6 = 1;
      v9 = BugCheckParameter2;
    }
    v7 = *v9;
    if ( !v7 )
LABEL_12:
      KeBugCheckEx(0x1Au, 0x41001uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v7, 0LL);
  }
  else
  {
    v7 = &MiSystemPartition;
  }
  if ( *((_DWORD *)v7 + 2) != 305535296 )
    goto LABEL_12;
  if ( !v6 )
    goto LABEL_5;
  if ( (ULONG_PTR **)v7[22] != BugCheckParameter2 )
    goto LABEL_12;
  if ( (unsigned __int8)PsReferencePartitionSafe(BugCheckParameter2, a2, BugCheckParameter2) )
  {
    LOBYTE(BugCheckParameter4) = 1;
  }
  else
  {
    if ( v5 )
      KeBugCheckEx(0x1Au, 0x41002uLL, v10, (ULONG_PTR)v7, BugCheckParameter4);
    v7 = (ULONG_PTR *)BugCheckParameter4;
  }
LABEL_5:
  *a3 = BugCheckParameter4;
  return v7;
}
