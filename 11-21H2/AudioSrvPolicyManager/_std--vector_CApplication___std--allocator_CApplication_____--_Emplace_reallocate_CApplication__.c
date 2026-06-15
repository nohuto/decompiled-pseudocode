/*
 * XREFs of _std::vector_CApplication___std::allocator_CApplication_____::_Emplace_reallocate_CApplication___&__::_1_::catch$0 @ 0x180045DB6
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@PEAVCApplication@@@std@@QEAAXQEAPEAVCApplication@@_K@Z @ 0x180031804 (-deallocate@-$allocator@PEAVCApplication@@@std@@QEAAXQEAPEAVCApplication@@_K@Z.c)
 *     _CxxThrowException_0 @ 0x180044437 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_CApplication___std::allocator_CApplication_____::_Emplace_reallocate_CApplication______::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<CApplication *>::deallocate(a1, *(char **)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
