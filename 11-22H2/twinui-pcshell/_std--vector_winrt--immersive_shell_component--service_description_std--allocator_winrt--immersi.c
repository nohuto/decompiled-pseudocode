/*
 * XREFs of _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$0 @ 0x1802B9BDF
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAXPEAUservice_description@immersive_shell_component@winrt@@QEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x1801109D4 (--$_Destroy_range@V-$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(
    *(__int64 **)(a2 + 152),
    *(__int64 **)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 40), 32LL * *(_QWORD *)(a2 + 32));
  throw;
}
