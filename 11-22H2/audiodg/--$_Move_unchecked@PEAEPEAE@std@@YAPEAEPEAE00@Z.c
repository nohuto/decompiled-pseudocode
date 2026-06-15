/*
 * XREFs of ??$_Move_unchecked@PEAEPEAE@std@@YAPEAEPEAE00@Z @ 0x1400647E4
 * Callers:
 *     _std::vector_unsigned_char_std::allocator_unsigned_char___::_Insert_range_unsigned_char_const____::_1_::catch$5 @ 0x140064716 (_std--vector_unsigned_char_std--allocator_unsigned_char___--_Insert_range_unsigned__ea_140064716.c)
 * Callees:
 *     memmove_0 @ 0x14002F1D4 (memmove_0.c)
 */

__int64 __fastcall std::_Move_unchecked<unsigned char *,unsigned char *>(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove_0(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
