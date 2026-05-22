/*
 * XREFs of ?deallocate@?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@QEAAXQEAV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@_K@Z @ 0x18006B2C0
 * Callers:
 *     _std::vector_Microsoft::WRL::ComPtr_IGamepadInterceptionTarget__std::allocator_Microsoft::WRL::ComPtr_IGamepadInterceptionTarget_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IGamepadInterceptionTarget__const_&__::_1_::catch$0 @ 0x1800690C4 (_std--vector_Microsoft--WRL--ComPtr_IGamepadInterceptionTarget__std--allocator_Microsoft--WRL--C.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>>::deallocate(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  std::_Deallocate<16,0>(a2, 8 * a3);
}
