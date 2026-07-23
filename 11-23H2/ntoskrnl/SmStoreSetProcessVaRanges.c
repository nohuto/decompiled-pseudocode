/*
 * XREFs of SmStoreSetProcessVaRanges @ 0x1407B750C
 * Callers:
 *     MmInSwapWorkingSet @ 0x1402000BC (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x140342290 (MmOutSwapWorkingSet.c)
 * Callees:
 *     SSHSupportAllocateNonPaged @ 0x14032D5E4 (SSHSupportAllocateNonPaged.c)
 *     SmpKeyedStoreSetVaRanges @ 0x140342CD8 (SmpKeyedStoreSetVaRanges.c)
 *     SmpGetProcessPartition @ 0x140344D10 (SmpGetProcessPartition.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmStoreSetProcessVaRanges(void *Src, __int64 a2)
{
  void *v4; // rdi
  __int64 ProcessPartition; // r14
  __int64 v6; // rdx
  __int64 v7; // rbx
  void *NonPaged; // rax
  int v9; // ebx

  v4 = 0LL;
  ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( v6 )
  {
    v7 = 16 * a2;
    NonPaged = (void *)SSHSupportAllocateNonPaged(v7, 0x52566D73u);
    v4 = NonPaged;
    if ( !NonPaged )
      return (unsigned int)-1073741670;
    memmove(NonPaged, Src, v7);
  }
  v9 = SmpKeyedStoreSetVaRanges((volatile signed __int64 *)(ProcessPartition + 2072));
  if ( v9 >= 0 )
  {
    return 0;
  }
  else if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
  }
  return (unsigned int)v9;
}
