/*
 * XREFs of MiFreePartitionNodePages @ 0x14065A1C0
 * Callers:
 *     MiFreePartitionTree @ 0x14065A3E8 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x14065A9D0 (MiInsertPartitionPages.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     MiActOnPartitionNodePages @ 0x1406585D0 (MiActOnPartitionNodePages.c)
 */

__int64 __fastcall MiFreePartitionNodePages(__int16 *a1, __int64 a2, int a3)
{
  unsigned int v6; // edx
  __int16 *v8[10]; // [rsp+20h] [rbp-58h] BYREF

  memset(v8, 0, 0x48uLL);
  v6 = 4;
  v8[0] = a1;
  if ( (a3 & 4) != 0 )
  {
    v6 = (a3 & 0x20 | 0x10u) >> 4;
  }
  else if ( (a3 & 1) != 0 )
  {
    v6 = 2;
    HIDWORD(v8[2]) = 2;
    if ( (a3 & 0x30) != 0x30 )
      v6 = 0;
  }
  MiActOnPartitionNodePages(a2, v6, a3, v8);
  return LODWORD(v8[3]);
}
