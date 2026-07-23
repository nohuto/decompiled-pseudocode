/*
 * XREFs of MmAllocatePartitionNodePagesForMdlEx @ 0x1402F8A30
 * Callers:
 *     MmAllocatePagesForMdlEx @ 0x1402F89D0 (MmAllocatePagesForMdlEx.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x1403910A4 (HalpAllocateCommonBufferDmaThin.c)
 *     MmAllocateNodePagesForMdlEx @ 0x1403C41E0 (MmAllocateNodePagesForMdlEx.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x14050F9C0 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140512920 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x1405140A8 (HalpAllocateCommonBufferDmarThin.c)
 *     HvlpDepositPages @ 0x140541254 (HvlpDepositPages.c)
 *     EtwpAllocatePartitionMemory @ 0x140601834 (EtwpAllocatePartitionMemory.c)
 *     MmAllocateSecureKernelPages @ 0x140657CFC (MmAllocateSecureKernelPages.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x14094DA24 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     KiComputeNumaCosts @ 0x140B75D24 (KiComputeNumaCosts.c)
 * Callees:
 *     MiPartitionObjectToPartition @ 0x1402F8D34 (MiPartitionObjectToPartition.c)
 *     MiAllocatePagesForMdl @ 0x1402F8F6C (MiAllocatePagesForMdl.c)
 *     PsDereferencePartition @ 0x1402F9EDC (PsDereferencePartition.c)
 */

__int64 __fastcall MmAllocatePartitionNodePagesForMdlEx(
        int a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6,
        int a7,
        ULONG_PTR BugCheckParameter2)
{
  int v9; // ebx
  int v12; // r14d
  int v13; // ebp
  __int64 v14; // rax

  v9 = a3;
  if ( a6 >= (unsigned __int16)KeNumberNodes )
    return 0LL;
  v12 = a5;
  if ( a5 == -1 || a5 > 2 )
    v12 = 3;
  v13 = a7;
  if ( (a7 & 0xFFFFF800) != 0 )
    return 0LL;
  if ( (a7 & 0x60) == 0x20 )
  {
    v13 = a7 | 0x10;
    if ( a3 )
    {
      if ( ((a3 - 1) & a3) != 0 || a3 < 4096 || a4 % (unsigned int)a3 )
        return 0LL;
    }
    else
    {
      v13 = a7 | 0x14;
    }
  }
  if ( (v13 & 0x100) == 0 || (v13 & 4) == 0 && !KeGetCurrentIrql() )
  {
    v14 = MiPartitionObjectToPartition(BugCheckParameter2);
    if ( v14 )
      return MiAllocatePagesForMdl(
               v14,
               a1,
               a2,
               v9,
               a4,
               v12,
               a6,
               v13,
               (__int64)KeGetCurrentThread()->ApcState.Process,
               0LL);
  }
  return 0LL;
}
