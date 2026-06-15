/*
 * XREFs of _std::vector_unsigned_char_std::allocator_unsigned_char___::_Insert_range_unsigned_char_const____::_1_::catch$5 @ 0x1400646C6
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x140029240 (_CxxThrowException_0.c)
 *     ??$_Move_unchecked@PEAEPEAE@std@@YAPEAEPEAE00@Z @ 0x140064794 (--$_Move_unchecked@PEAEPEAE@std@@YAPEAEPEAE00@Z.c)
 *     ??$_Uninitialized_move@PEAEV?$allocator@E@std@@@std@@YAPEAEQEAE0PEAEAEAV?$allocator@E@0@@Z @ 0x140064A70 (--$_Uninitialized_move@PEAEV-$allocator@E@std@@@std@@YAPEAEQEAE0PEAEAEAV-$allocator@E@0@@Z.c)
 */

void __fastcall __noreturn std::vector_unsigned_char_std::allocator_unsigned_char___::_Insert_range_unsigned_char_const____::_1_::catch_5(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  void *v5; // rcx
  _QWORD *v6; // rbx

  v3 = a2[15];
  v4 = a2[5];
  std::_Uninitialized_move<unsigned char *>((void *)(v4 + v3));
  v5 = (void *)(v3 + 2 * v4);
  v6 = (_QWORD *)a2[14];
  std::_Move_unchecked<unsigned char *,unsigned char *>(v5);
  *v6 = a2[4];
  throw;
}
