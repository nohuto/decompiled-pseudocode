/*
 * XREFs of PspDeletePartition @ 0x1409B6870
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     PspRemovePartitionFromGlobalList @ 0x1405A6B38 (PspRemovePartitionFromGlobalList.c)
 */

void __fastcall PspDeletePartition(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // r9

  v1 = *(_QWORD *)(BugCheckParameter2 + 32);
  if ( v1 )
    KeBugCheckEx(0x18Eu, 0LL, BugCheckParameter2, v1, 0LL);
  if ( *(_QWORD *)(BugCheckParameter2 + 48) )
    PspRemovePartitionFromGlobalList(BugCheckParameter2);
}
