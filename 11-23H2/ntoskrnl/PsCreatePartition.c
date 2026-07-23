/*
 * XREFs of PsCreatePartition @ 0x14085915C
 * Callers:
 *     NtCreatePartition @ 0x1409B66A0 (NtCreatePartition.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140A4761C (MiInitializePartitionSpecialPurposeMemory.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140B6B5DC (PspInitializeSystemPartitionPhase0.c)
 * Callees:
 *     PsDereferencePartition @ 0x1402F9EDC (PsDereferencePartition.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     PsReferencePartitionByHandle @ 0x14076022C (PsReferencePartitionByHandle.c)
 *     ObCloseHandle @ 0x14076BA80 (ObCloseHandle.c)
 *     PspAllocatePartition @ 0x140859250 (PspAllocatePartition.c)
 */

__int64 __fastcall PsCreatePartition(ULONG_PTR a1, HANDLE *a2, int a3, int a4, KPROCESSOR_MODE PreviousMode, int a6)
{
  int v10; // r8d
  HANDLE *p_Handle; // r14
  int Partition; // edi
  __int64 v14; // rcx
  HANDLE Handle; // [rsp+48h] [rbp-40h] BYREF
  void *v16; // [rsp+50h] [rbp-38h] BYREF
  __int64 v17[3]; // [rsp+58h] [rbp-30h] BYREF

  v16 = 0LL;
  Handle = 0LL;
  v17[0] = 0LL;
  if ( !PreviousMode )
    goto LABEL_22;
  v14 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
    v14 = (__int64)a2;
  *(_QWORD *)v14 = *(_QWORD *)v14;
  if ( a6 )
  {
    Partition = -1073741811;
  }
  else
  {
LABEL_22:
    if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
    {
      if ( !a1 || (Partition = PsReferencePartitionByHandle(a1, 2, PreviousMode, 0x70437350u, v17), Partition >= 0) )
      {
        p_Handle = &Handle;
        if ( (a6 & 1) != 0 )
          p_Handle = 0LL;
        LOBYTE(v10) = PreviousMode;
        Partition = PspAllocatePartition(a4, a3, v10, v17[0], a6, (__int64)&v16, (__int64)p_Handle);
        if ( Partition >= 0 )
        {
          if ( p_Handle )
          {
            PsDereferencePartition((__int64)v16);
            *a2 = Handle;
          }
          else
          {
            PspSystemPartition = v16;
          }
        }
      }
    }
    else
    {
      Partition = -1073741727;
    }
  }
  if ( v17[0] )
    PsDereferencePartition(v17[0]);
  return (unsigned int)Partition;
}
