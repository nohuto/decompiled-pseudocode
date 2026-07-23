/*
 * XREFs of MiFreePartitionPhysicalPages @ 0x140A44DA4
 * Callers:
 *     MiDeletePartitionResources @ 0x1406599D8 (MiDeletePartitionResources.c)
 * Callees:
 *     MiReturnResident @ 0x1402930A0 (MiReturnResident.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiIncreaseCommitLimits @ 0x140396244 (MiIncreaseCommitLimits.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     MiReturnPartitionPagesToParent @ 0x14065B9A8 (MiReturnPartitionPagesToParent.c)
 */

void __fastcall MiFreePartitionPhysicalPages(_QWORD *a1, unsigned __int16 *a2)
{
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned int v5; // eax
  ULONG_PTR *v6; // rcx
  unsigned __int64 v7; // rbx

  BugCheckParameter4 = a1[2130];
  MiReturnPartitionPagesToParent((ULONG_PTR)a1);
  v5 = 0;
  if ( KeNumberNodes )
  {
    v6 = (ULONG_PTR *)(a1[2] + 23136LL);
    do
    {
      if ( *v6 )
        KeBugCheckEx(0x1Au, 0x41008uLL, *v6, 0LL, 0LL);
      v6 += 3176;
      ++v5;
    }
    while ( v5 < (unsigned __int16)KeNumberNodes );
  }
  if ( a1[840] )
    KeBugCheckEx(0x1Au, 0x41006uLL, BugCheckParameter4, a1[2130], a1[2152]);
  if ( a1[2130] )
    KeBugCheckEx(0x1Au, 0x41005uLL, BugCheckParameter4, a1[2130], a1[2152]);
  if ( a1[2152] )
    KeBugCheckEx(0x1Au, 0x41004uLL, BugCheckParameter4, a1[2152], 0LL);
  if ( a1[2197] )
    KeBugCheckEx(0x1Au, 0x41009uLL, a1[2197], a1[2227], BugCheckParameter4);
  if ( a1[2160] != BugCheckParameter4 )
    KeBugCheckEx(0x1Au, 0x41003uLL, BugCheckParameter4, a1[2160], a1[2227]);
  MiReturnResident((__int64)a2, a1[2160]);
  v7 = a1[2227];
  if ( a2 == MiSystemPartition )
  {
    MiReturnCommit((__int64)a2, v7);
    _InterlockedExchangeAdd64(&qword_140C699B0, -(__int64)v7);
  }
  else
  {
    MiIncreaseCommitLimits((__int64)a2, v7, v7, 0, 0LL);
  }
}
