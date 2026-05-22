/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_IGamepadInterceptionTarget__std::allocator_Microsoft::WRL::ComPtr_IGamepadInterceptionTarget_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IGamepadInterceptionTarget__const_&__::_1_::catch$0 @ 0x1800690C4
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180057B56 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@0@@Z @ 0x180068D70 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std.c)
 *     ?deallocate@?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@QEAAXQEAV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@_K@Z @ 0x18006B2C0 (-deallocate@-$allocator@V-$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@QEAAXQEAV-$.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_IGamepadInterceptionTarget__std::allocator_Microsoft::WRL::ComPtr_IGamepadInterceptionTarget_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IGamepadInterceptionTarget__const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>>>(
    *(__int64 **)(a2 + 112),
    *(__int64 **)(a2 + 136));
  std::allocator<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>>::deallocate(
    v3,
    *(_QWORD *)(a2 + 32),
    *(_QWORD *)(a2 + 120));
  throw;
}
