/*
 * XREFs of MiPartitionObjectToPartition @ 0x1402F8AA4
 * Callers:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1402F87A0 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmQueryMemoryListInformation @ 0x1402F8958 (MmQueryMemoryListInformation.c)
 *     MmAllocateContiguousMemoryEx @ 0x140391220 (MmAllocateContiguousMemoryEx.c)
 *     MmGetNodeFastLargePageCounts @ 0x140617904 (MmGetNodeFastLargePageCounts.c)
 *     MmAllocateNonChargedSecurePages @ 0x14065749C (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x1406577AC (MmAllocateSecureKernelPages.c)
 *     MmFreeNonChargedSecurePages @ 0x140657CB8 (MmFreeNonChargedSecurePages.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140834410 (MmGetPhysicalMemoryRangesEx2.c)
 *     MmQueryMemoryRanges @ 0x14085D580 (MmQueryMemoryRanges.c)
 *     MmGetPageFileInformation @ 0x140874E10 (MmGetPageFileInformation.c)
 *     MmAllocateMemoryRanges @ 0x140A2E2C0 (MmAllocateMemoryRanges.c)
 *     MmBuildLargePages @ 0x140A45F68 (MmBuildLargePages.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x1402F9C1C (PsReferencePartitionSafe.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

void ***__fastcall MiPartitionObjectToPartition(void **BugCheckParameter2, char a2, _BYTE *a3)
{
  ULONG_PTR BugCheckParameter4; // r9
  int v6; // r11d
  void **v7; // r10
  void ***v8; // r10
  ULONG_PTR v10; // r8

  LOBYTE(BugCheckParameter4) = 0;
  v6 = 0;
  if ( BugCheckParameter2 )
  {
    if ( BugCheckParameter2 == (void **)-1LL )
    {
      v7 = (void **)(qword_140C673C8 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]);
    }
    else
    {
      if ( BugCheckParameter2 == (void **)-2LL )
      {
        v8 = 0LL;
        goto LABEL_11;
      }
      v6 = 1;
      v7 = BugCheckParameter2;
    }
    v8 = (void ***)*v7;
    if ( !v8 )
      goto LABEL_11;
  }
  else
  {
    v8 = (void ***)&MiSystemPartition;
  }
  if ( *((_DWORD *)v8 + 2) != 305535296 )
    goto LABEL_11;
  if ( !v6 )
    goto LABEL_7;
  if ( v8[25] != BugCheckParameter2 )
LABEL_11:
    KeBugCheckEx(0x1Au, 0x41001uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v8, 0LL);
  if ( (unsigned __int8)PsReferencePartitionSafe(BugCheckParameter2) )
  {
    LOBYTE(BugCheckParameter4) = 1;
  }
  else
  {
    if ( a2 )
      KeBugCheckEx(0x1Au, 0x41002uLL, v10, (ULONG_PTR)v8, BugCheckParameter4);
    v8 = (void ***)BugCheckParameter4;
  }
LABEL_7:
  *a3 = BugCheckParameter4;
  return v8;
}
