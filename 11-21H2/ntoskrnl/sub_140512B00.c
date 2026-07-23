/*
 * XREFs of sub_140512B00 @ 0x140512B00
 * Callers:
 *     sub_140456F16 @ 0x140456F16 (sub_140456F16.c)
 *     sub_140908F2C @ 0x140908F2C (sub_140908F2C.c)
 *     sub_1409094F8 @ 0x1409094F8 (sub_1409094F8.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x140214190 (MmAllocateContiguousNodeMemory.c)
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 */

__int64 __fastcall sub_140512B00(__int64 a1, unsigned int a2, _QWORD *a3, PHYSICAL_ADDRESS *a4, _QWORD *a5)
{
  __int64 v5; // rsi
  char v6; // r12
  __int64 v7; // rax
  __int64 v8; // r13
  unsigned int v9; // ebp
  __int64 v10; // rdi
  char i; // r14
  __int64 v12; // rbx
  void *ContiguousNodeMemory; // rax
  void *v14; // r15
  PHYSICAL_ADDRESS PhysicalAddress; // rax

  v5 = *(_QWORD *)(a1 + 136);
  v6 = 0;
  v7 = a1;
  v8 = (unsigned __int64)a2 << 12;
  v9 = a2;
  while ( 2 )
  {
    if ( v6 || *(_BYTE *)(v7 + 145) || v9 > 0x10 )
      v10 = 0LL;
    else
      v10 = 0x10000LL;
    for ( i = 0; ; i = 1 )
    {
      v12 = 0LL;
      if ( !i && (_DWORD)v5 == -1 )
        v12 = 0x1000000LL;
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(v8, v12, v5, v10, 4, 0x80000000);
      v14 = ContiguousNodeMemory;
      if ( ContiguousNodeMemory )
      {
        PhysicalAddress = MmGetPhysicalAddress(ContiguousNodeMemory);
        *a3 = v14;
        *a4 = PhysicalAddress;
        goto LABEL_20;
      }
      if ( i || !v12 )
        break;
    }
    if ( !v6 && v10 )
    {
      v7 = a1;
      v6 = 1;
      continue;
    }
    break;
  }
  v9 = 0;
LABEL_20:
  *a5 = 0LL;
  return v9;
}
