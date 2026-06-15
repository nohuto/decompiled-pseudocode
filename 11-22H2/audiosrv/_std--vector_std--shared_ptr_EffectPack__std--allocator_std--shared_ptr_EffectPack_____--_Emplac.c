/*
 * XREFs of _std::vector_std::shared_ptr_EffectPack__std::allocator_std::shared_ptr_EffectPack_____::_Emplace_reallocate_std::shared_ptr_EffectPack__&__::_1_::catch$0 @ 0x18007C2FA
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VEffectPack@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VEffectPack@@@std@@@0@@Z @ 0x18004AA0C (--$_Destroy_range@V-$allocator@V-$shared_ptr@VEffectPack@@@std@@@std@@@std@@YAXPEAV-$shared_ptr@.c)
 *     _CxxThrowException_0 @ 0x1800759D0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::shared_ptr_EffectPack__std::allocator_std::shared_ptr_EffectPack_____::_Emplace_reallocate_std::shared_ptr_EffectPack_____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::shared_ptr<EffectPack>>>(*(_QWORD *)(a2 + 112), *(_QWORD *)(a2 + 120));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 16LL * *(_QWORD *)(a2 + 136));
  throw;
}
