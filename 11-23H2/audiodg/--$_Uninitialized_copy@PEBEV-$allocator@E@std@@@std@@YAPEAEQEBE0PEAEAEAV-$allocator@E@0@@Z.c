/*
 * XREFs of ??$_Uninitialized_copy@PEBEV?$allocator@E@std@@@std@@YAPEAEQEBE0PEAEAEAV?$allocator@E@0@@Z @ 0x140064A38
 * Callers:
 *     ??$_Insert_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE1Uforward_iterator_tag@1@@Z @ 0x1400644C4 (--$_Insert_range@PEBE@-$vector@EV-$allocator@E@std@@@std@@AEAAXV-$_Vector_const_iterator@V-$_Vec.c)
 * Callees:
 *     memmove_0 @ 0x14002F194 (memmove_0.c)
 */

__int64 __fastcall std::_Uninitialized_copy<unsigned char const *>(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove_0(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
