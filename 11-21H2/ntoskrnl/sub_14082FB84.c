/*
 * XREFs of sub_14082FB84 @ 0x14082FB84
 * Callers:
 *     sub_1403C62EC @ 0x1403C62EC (sub_1403C62EC.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

_DWORD *sub_14082FB84()
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v1; // rbx
  _DWORD *result; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xA8uLL, 0x72746C6Du);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag + 1, 0, 0xA4uLL);
  result = v1;
  *v1 = 1024;
  return result;
}
