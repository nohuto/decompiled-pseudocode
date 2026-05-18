/*
 * XREFs of ??4?$vector@IV?$allocator@I@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001F178
 * Callers:
 *     ?CloneInternal@ColorTransform@Engine@Spectre@@UEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x18008F840 (-CloneInternal@ColorTransform@Engine@Spectre@@UEBAXV-$shared_ptr@VComponent@Engine@Spectre@@@std.c)
 * Callees:
 *     ??$_Assign_range@PEAI@?$vector@IV?$allocator@I@std@@@std@@AEAAXPEAI0Uforward_iterator_tag@1@@Z @ 0x18001E8A4 (--$_Assign_range@PEAI@-$vector@IV-$allocator@I@std@@@std@@AEAAXPEAI0Uforward_iterator_tag@1@@Z.c)
 */

_QWORD *__fastcall std::vector<unsigned int>::operator=(_QWORD *a1, __int64 a2)
{
  if ( a1 != (_QWORD *)a2 )
    std::vector<unsigned int>::_Assign_range<unsigned int *>(a1, *(void **)a2, *(_QWORD *)(a2 + 8));
  return a1;
}
