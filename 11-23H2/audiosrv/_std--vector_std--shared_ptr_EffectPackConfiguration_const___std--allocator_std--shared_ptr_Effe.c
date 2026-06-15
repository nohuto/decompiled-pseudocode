/*
 * XREFs of _std::vector_std::shared_ptr_EffectPackConfiguration_const___std::allocator_std::shared_ptr_EffectPackConfiguration_const______::_Emplace_reallocate_std::shared_ptr_EffectPackConfiguration_const___&__::_1_::catch$0 @ 0x18010D7EF
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1800759A0 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@0@@Z @ 0x1800EEBB0 (--$_Destroy_range@V-$allocator@V-$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@std@@@std@@YAX.c)
 */

void __fastcall __noreturn std::vector_std::shared_ptr_EffectPackConfiguration_const___std::allocator_std::shared_ptr_EffectPackConfiguration_const______::_Emplace_reallocate_std::shared_ptr_EffectPackConfiguration_const______::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::shared_ptr<EffectPackConfiguration const>>>(
    *(_QWORD *)(a2 + 112),
    *(_QWORD *)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 16LL * *(_QWORD *)(a2 + 120));
  throw;
}
