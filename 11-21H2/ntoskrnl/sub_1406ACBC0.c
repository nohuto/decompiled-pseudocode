/*
 * XREFs of sub_1406ACBC0 @ 0x1406ACBC0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     SeValidSecurityDescriptor @ 0x1406ACC40 (SeValidSecurityDescriptor.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406ACBC0(__int64 a1, int a2, void *a3, ULONG a4, __int64 a5, _QWORD *a6)
{
  unsigned int v6; // ebx
  PVOID PoolWithTag; // rax

  v6 = 0;
  if ( a2 == 3 && a3 && SeValidSecurityDescriptor(a4, a3) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, a4, 0x70696D57u);
    *a6 = PoolWithTag;
    if ( PoolWithTag )
      memmove(PoolWithTag, a3, a4);
    else
      return (unsigned int)-1073741670;
  }
  return v6;
}
