/*
 * XREFs of _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$4 @ 0x1802B9D12
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Uninitialized_move@PEAUservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@QEAU123@0PEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x1800BDFE0 (--$_Uninitialized_move@PEAUservice_description@immersive_shell_component@winrt@@V-$allocator@Use.c)
 *     ??$_Destroy_range@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAXPEAUservice_description@immersive_shell_component@winrt@@QEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x1801109D4 (--$_Destroy_range@V-$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  __int64 *v3; // rbx

  v3 = *(__int64 **)(a2 + 32);
  std::_Uninitialized_move<winrt::immersive_shell_component::service_description *>(
    *(_QWORD *)(a2 + 152),
    *v3,
    *(_OWORD **)(a2 + 136));
  std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(
    *(__int64 **)(a2 + 152),
    (__int64 *)*v3);
  *v3 = *(_QWORD *)(a2 + 48);
  throw;
}
