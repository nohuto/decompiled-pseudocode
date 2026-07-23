/*
 * XREFs of sub_14063C25C @ 0x14063C25C
 * Callers:
 *     sub_1409ABED8 @ 0x1409ABED8 (sub_1409ABED8.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 */

__int64 __fastcall sub_14063C25C(ULONG_PTR BugCheckParameter3)
{
  void *v2; // rcx

  v2 = *(void **)(BugCheckParameter3 + 8);
  if ( (unsigned __int64)v2 > 1 )
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  return sub_140348B40(BugCheckParameter3);
}
