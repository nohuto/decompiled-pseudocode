/*
 * XREFs of WbFreeMemoryBlock @ 0x1407644EC
 * Callers:
 *     WbAllocateUserMemory @ 0x140763F68 (WbAllocateUserMemory.c)
 *     WbAllocateMemoryBlock @ 0x1407A513C (WbAllocateMemoryBlock.c)
 *     WbFreeWarbirdProcess @ 0x1407E0EC0 (WbFreeWarbirdProcess.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x14041B120 (ZwFreeVirtualMemory.c)
 *     MmUnsecureVirtualMemory @ 0x1406B0260 (MmUnsecureVirtualMemory.c)
 *     sub_1407D8F28 @ 0x1407D8F28 (sub_1407D8F28.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall WbFreeMemoryBlock(PVOID *BaseAddress)
{
  int v2; // edi
  struct _MDL *v3; // rcx
  PVOID v4; // rcx

  if ( BaseAddress )
  {
    if ( BaseAddress[2] == KeGetCurrentThread()->ApcState.Process )
    {
      v4 = BaseAddress[135];
      v2 = 1;
      if ( v4 )
        MmUnsecureVirtualMemory(v4);
    }
    else
    {
      v2 = 0;
    }
    v3 = (struct _MDL *)BaseAddress[3];
    if ( v3 )
    {
      sub_1407D8F28(v3);
      BaseAddress[3] = 0LL;
    }
    BaseAddress[4] = 0LL;
    if ( *BaseAddress )
    {
      if ( v2 )
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, (PSIZE_T)BaseAddress + 1, 0x8000u);
      *BaseAddress = 0LL;
      BaseAddress[1] = 0LL;
    }
    ExFreePoolWithTag(BaseAddress, 0);
  }
}
