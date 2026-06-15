/*
 * XREFs of ??$_Uninitialized_move@PEAEV?$allocator@E@std@@@std@@YAPEAEQEAE0PEAEAEAV?$allocator@E@0@@Z @ 0x140064A70
 * Callers:
 *     ??$_Insert_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE1Uforward_iterator_tag@1@@Z @ 0x1400644C4 (--$_Insert_range@PEBE@-$vector@EV-$allocator@E@std@@@std@@AEAAXV-$_Vector_const_iterator@V-$_Vec.c)
 *     _std::vector_unsigned_char_std::allocator_unsigned_char___::_Insert_range_unsigned_char_const____::_1_::catch$5 @ 0x1400646C6 (_std--vector_unsigned_char_std--allocator_unsigned_char___--_Insert_range_unsigned__ea_1400646C6.c)
 *     _std::vector_unsigned_char_std::allocator_unsigned_char___::_Insert_range_unsigned_char_const____::_1_::catch$7 @ 0x140064735 (_std--vector_unsigned_char_std--allocator_unsigned_char___--_Insert_range_unsigned__ea_140064735.c)
 * Callees:
 *     memmove_0 @ 0x14002F194 (memmove_0.c)
 */

__int64 __fastcall std::_Uninitialized_move<unsigned char *>(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove_0(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
