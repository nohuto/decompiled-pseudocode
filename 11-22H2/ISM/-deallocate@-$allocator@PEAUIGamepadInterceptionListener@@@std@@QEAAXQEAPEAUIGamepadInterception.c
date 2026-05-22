/*
 * XREFs of ?deallocate@?$allocator@PEAUIGamepadInterceptionListener@@@std@@QEAAXQEAPEAUIGamepadInterceptionListener@@_K@Z @ 0x18006B2A8
 * Callers:
 *     _std::vector_IGamepadInterceptionListener___std::allocator_IGamepadInterceptionListener_____::_Emplace_reallocate_IGamepadInterceptionListener___const_&__::_1_::catch$21 @ 0x180068F8D (_std--vector_IGamepadInterceptionListener___std--allocator_IGamepadInterceptionListener_____--_E.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<IGamepadInterceptionListener *>::deallocate(__int64 a1, void *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, 8 * a3);
}
