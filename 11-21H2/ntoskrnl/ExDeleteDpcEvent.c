/*
 * XREFs of ExDeleteDpcEvent @ 0x14063E310
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 */

__int64 __fastcall ExDeleteDpcEvent(ULONG_PTR BugCheckParameter3)
{
  ObfDereferenceObjectWithTag(*(PVOID *)(BugCheckParameter3 + 56), 0x65447845u);
  return sub_140348B40(BugCheckParameter3);
}
