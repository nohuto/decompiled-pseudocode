/*
 * XREFs of sub_1403B64E0 @ 0x1403B64E0
 * Callers:
 *     HalAllocateCommonBuffer @ 0x1405054E0 (HalAllocateCommonBuffer.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x140214190 (MmAllocateContiguousNodeMemory.c)
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 */

void *__fastcall sub_1403B64E0(__int64 a1, __int64 *a2, unsigned int a3, PHYSICAL_ADDRESS *a4, int a5, int a6)
{
  __int64 v6; // r10
  __int64 v8; // r8
  void *ContiguousNodeMemory; // rax
  void *v10; // rbx

  v6 = a3;
  if ( a2 )
    v8 = *a2;
  else
    v8 = *(_QWORD *)(a1 + 136);
  ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(
                                   v6,
                                   0,
                                   v8,
                                   *(_BYTE *)(a1 + 145) != 0 ? 0 : 0x10000,
                                   *(_BYTE *)(a1 + 437) != 0 ? 4 : 516,
                                   a6);
  v10 = ContiguousNodeMemory;
  if ( ContiguousNodeMemory )
    *a4 = MmGetPhysicalAddress(ContiguousNodeMemory);
  return v10;
}
