/*
 * XREFs of PsReferencePartitionByHandle @ 0x14076022C
 * Callers:
 *     EtwpSetPartitionContext @ 0x140601CE4 (EtwpSetPartitionContext.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1406F6C30 (MiAllocateVirtualMemoryCommon.c)
 *     MiInitializeCreateSectionPacket @ 0x140723210 (MiInitializeCreateSectionPacket.c)
 *     NtManagePartition @ 0x14075FF60 (NtManagePartition.c)
 *     SmProcessCompressionInfoRequest @ 0x1408417C4 (SmProcessCompressionInfoRequest.c)
 *     PsCreatePartition @ 0x14085915C (PsCreatePartition.c)
 *     SmProcessConfigRequest @ 0x14085BD4C (SmProcessConfigRequest.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140947CCC (IopSetFileMemoryPartitionInformation.c)
 *     PspSetJobMemoryPartition @ 0x1409B2E24 (PspSetJobMemoryPartition.c)
 *     SmProcessListRequest @ 0x1409D6FAC (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x1409D7578 (SmProcessStatsRequest.c)
 *     SmProcessSystemStoreTrimRequest @ 0x1409D788C (SmProcessSystemStoreTrimRequest.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140A4761C (MiInitializePartitionSpecialPurposeMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePartitionSafe @ 0x1402F9EAC (PsReferencePartitionSafe.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PsReferencePartitionByHandle(ULONG_PTR a1, int a2, char a3, ULONG Tag, _QWORD *a5)
{
  unsigned int v5; // ebx
  PVOID Next; // r8
  void *v9; // r8
  __int64 result; // rax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  v11 = 0LL;
  if ( a1 == -1LL )
  {
    Next = KeGetCurrentThread()->ApcState.Process[2].SwapListEntry.Next;
  }
  else if ( a1 == -2LL )
  {
    Next = PspSystemPartition;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(a1, a2, (__int64)PsPartitionType, a3, Tag, &v11, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    Next = (PVOID)v11;
  }
  if ( PsReferencePartitionSafe((__int64)Next) )
    *a5 = v9;
  else
    v5 = -1073740640;
  if ( a1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ObfDereferenceObjectWithTag(v9, Tag);
  return v5;
}
