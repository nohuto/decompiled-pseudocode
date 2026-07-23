/*
 * XREFs of sub_1409BEB08 @ 0x1409BEB08
 * Callers:
 *     sub_1409BE9D8 @ 0x1409BE9D8 (sub_1409BE9D8.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409BEB08(_QWORD *a1, __int64 a2)
{
  _QWORD *PoolWithTag; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x67744364u);
  *a1 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0LL;
  PoolWithTag[2] = sub_1409BEBB0;
  PoolWithTag[3] = a2;
  return 0LL;
}
