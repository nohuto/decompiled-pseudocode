/*
 * XREFs of sub_140B50C1C @ 0x140B50C1C
 * Callers:
 *     sub_140B07AB0 @ 0x140B07AB0 (sub_140B07AB0.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID sub_140B50C1C()
{
  SIZE_T v0; // rdi
  PVOID PoolWithTag; // rax
  PVOID v2; // rbx

  v0 = 2LL * (unsigned __int16)word_140D05000 * (unsigned __int16)word_140D05000;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v0, 0x616D754Eu);
  v2 = PoolWithTag;
  if ( PoolWithTag )
    memmove(PoolWithTag, qword_140C2BD50, v0);
  return v2;
}
