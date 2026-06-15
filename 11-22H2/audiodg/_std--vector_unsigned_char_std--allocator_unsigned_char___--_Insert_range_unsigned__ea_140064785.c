/*
 * XREFs of _std::vector_unsigned_char_std::allocator_unsigned_char___::_Insert_range_unsigned_char_const____::_1_::catch$7 @ 0x140064785
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x140029240 (_CxxThrowException_0.c)
 *     ??$_Uninitialized_move@PEAEV?$allocator@E@std@@@std@@YAPEAEQEAE0PEAEAEAV?$allocator@E@0@@Z @ 0x140064AC0 (--$_Uninitialized_move@PEAEV-$allocator@E@std@@@std@@YAPEAEQEAE0PEAEAEAV-$allocator@E@0@@Z.c)
 */

void __fastcall __noreturn std::vector_unsigned_char_std::allocator_unsigned_char___::_Insert_range_unsigned_char_const____::_1_::catch_7(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rbx

  v3 = *(_QWORD **)(a2 + 112);
  std::_Uninitialized_move<unsigned char *>(*(void **)(a2 + 128));
  *v3 = *(_QWORD *)(a2 + 32);
  throw;
}
