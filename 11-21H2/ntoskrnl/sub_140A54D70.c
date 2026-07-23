/*
 * XREFs of sub_140A54D70 @ 0x140A54D70
 * Callers:
 *     sub_140A54CD8 @ 0x140A54CD8 (sub_140A54CD8.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_1403B913C @ 0x1403B913C (sub_1403B913C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140A54D70(__int64 BaseAddress, PHYSICAL_ADDRESS PhysicalAddress, PHYSICAL_ADDRESS *a3)
{
  unsigned __int64 v5; // r14
  int v6; // ebp
  __int64 *v7; // rsi
  __int64 v8; // rdi
  void *v9; // rax
  __int64 v10; // rcx

  v5 = BaseAddress;
  v6 = 3;
  v7 = (__int64 *)((char *)qword_140C4ACA8 + 8 * (((unsigned __int64)BaseAddress >> 39) & 0x1FF));
  do
  {
    v8 = *v7;
    if ( !*v7 )
    {
      v9 = (void *)sub_1403B1F04(BaseAddress, 4096LL);
      v8 = (__int64)v9;
      if ( !v9 )
        return 3221225626LL;
      memset(v9, 0, 0x1000uLL);
      if ( (int)sub_1403B913C(v8) < 0 )
      {
        sub_1403B1B5C(v10, v8);
        return 3221225626LL;
      }
      *v7 = v8;
    }
    --v6;
    BaseAddress = (unsigned int)(v6 + 8 * v6 + 12);
    v7 = (__int64 *)(v8 + 8 * ((v5 >> (v6 + 8 * (unsigned __int8)v6 + 12)) & 0x1FF));
  }
  while ( v6 );
  if ( !PhysicalAddress.QuadPart )
    PhysicalAddress = MmGetPhysicalAddress((PVOID)v5);
  *v7 = *v7 ^ (*v7 ^ PhysicalAddress.QuadPart) & 0xFFFFFFFFFF000LL | 3;
  if ( a3 )
    *a3 = MmGetPhysicalAddress(v7);
  return 0LL;
}
