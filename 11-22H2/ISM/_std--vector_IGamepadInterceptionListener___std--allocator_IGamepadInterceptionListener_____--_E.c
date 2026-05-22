/*
 * XREFs of _std::vector_IGamepadInterceptionListener___std::allocator_IGamepadInterceptionListener_____::_Emplace_reallocate_IGamepadInterceptionListener___const_&__::_1_::catch$21 @ 0x180068F8D
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180057B56 (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@PEAUIGamepadInterceptionListener@@@std@@QEAAXQEAPEAUIGamepadInterceptionListener@@_K@Z @ 0x18006B2A8 (-deallocate@-$allocator@PEAUIGamepadInterceptionListener@@@std@@QEAAXQEAPEAUIGamepadInterception.c)
 */

void __fastcall __noreturn std::vector_IGamepadInterceptionListener___std::allocator_IGamepadInterceptionListener_____::_Emplace_reallocate_IGamepadInterceptionListener___const____::_1_::catch_21(
        __int64 a1,
        __int64 a2)
{
  std::allocator<IGamepadInterceptionListener *>::deallocate(a1, *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
