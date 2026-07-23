/*
 * XREFs of sub_14037E878 @ 0x14037E878
 * Callers:
 *     sub_14037C48C @ 0x14037C48C (sub_14037C48C.c)
 *     sub_14037E6D8 @ 0x14037E6D8 (sub_14037E6D8.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

_BYTE *__fastcall sub_14037E878(__int64 a1, char a2, char a3)
{
  _BYTE *PoolWithTag; // rax
  _BYTE *v6; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x74426D73u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x1000uLL);
    v6[2] = a3;
    v6[3] = a2;
  }
  return v6;
}
