/*
 * XREFs of sub_140693188 @ 0x140693188
 * Callers:
 *     sub_140690378 @ 0x140690378 (sub_140690378.c)
 *     sub_14069061C @ 0x14069061C (sub_14069061C.c)
 *     sub_1407806B0 @ 0x1407806B0 (sub_1407806B0.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

_OWORD *__fastcall sub_140693188(PVOID Object)
{
  _OWORD *PoolWithTag; // rax
  _OWORD *v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x67655256u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    ObfReferenceObjectWithTag(Object, 0x67655256u);
    *((_QWORD *)v3 + 5) = Object;
  }
  return v3;
}
