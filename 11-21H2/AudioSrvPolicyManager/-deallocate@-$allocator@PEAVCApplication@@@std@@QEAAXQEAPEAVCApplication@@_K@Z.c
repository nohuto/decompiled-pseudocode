/*
 * XREFs of ?deallocate@?$allocator@PEAVCApplication@@@std@@QEAAXQEAPEAVCApplication@@_K@Z @ 0x180031804
 * Callers:
 *     _std::vector_CApplication___std::allocator_CApplication_____::_Emplace_reallocate_CApplication___&__::_1_::catch$0 @ 0x180045DB6 (_std--vector_CApplication___std--allocator_CApplication_____--_Emplace_reallocate_CApplication__.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<CApplication *>::deallocate(__int64 a1, char *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, 8 * a3);
}
