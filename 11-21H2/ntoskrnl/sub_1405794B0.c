/*
 * XREFs of sub_1405794B0 @ 0x1405794B0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void sub_1405794B0()
{
  PVOID PoolWithTag; // rax

  if ( (_DWORD)dword_140C2AA4C )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)dword_140C2AA4C, 0x7263624Bu);
    if ( PoolWithTag )
    {
      if ( _InterlockedCompareExchange64(&qword_140C2AAA8, (signed __int64)PoolWithTag, 0LL) )
        ExFreePoolWithTag(PoolWithTag, 0);
    }
  }
}
