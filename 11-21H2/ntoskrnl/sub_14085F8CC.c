/*
 * XREFs of sub_14085F8CC @ 0x14085F8CC
 * Callers:
 *     sub_140798334 @ 0x140798334 (sub_140798334.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14085F8CC(_QWORD *a1)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v3; // rbx
  unsigned int v4; // ecx
  _QWORD *v5; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xB0uLL, 0x20666E57u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag + 1, 0, 0xACuLL);
  v4 = 0;
  *v3 = 11536641;
  v5 = v3 + 10;
  do
  {
    v5[1] = v5;
    ++v4;
    *v5 = v5;
    *(v5 - 1) = 0LL;
    v5 += 3;
  }
  while ( v4 < 6 );
  *a1 = v3;
  return 0LL;
}
