/*
 * XREFs of sub_1409DA570 @ 0x1409DA570
 * Callers:
 *     sub_1409D9340 @ 0x1409D9340 (sub_1409D9340.c)
 *     sub_1409D9860 @ 0x1409D9860 (sub_1409D9860.c)
 * Callees:
 *     ExInitializeRundownProtection @ 0x1402A0840 (ExInitializeRundownProtection.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1409DA55C @ 0x1409DA55C (sub_1409DA55C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409DA570(ULONG_PTR a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rsi
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF *v5; // rdi
  PVOID v6; // rcx

  v1 = 0;
  v3 = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( !*(_QWORD *)(v3 + 2288) )
  {
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x63506D56u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x80uLL);
      v5[9].Count = a1;
      v5[2].Count = 0LL;
      v5[3].Count = 0LL;
      v5[4].Count = 0LL;
      v5[6].Count = 0LL;
      v5[7].Count = 0LL;
      ExInitializeRundownProtection(v5 + 12);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 2288), (signed __int64)v5, 0LL) )
      {
        sub_1409DA55C((__int64)v5);
        ExFreePoolWithTag(v6, 0);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v1;
}
