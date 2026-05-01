/*
 * XREFs of _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$10 @ 0x18021A068
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Uninitialized_move@PEAUservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@QEAU123@0PEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x18017AE50 (--$_Uninitialized_move@PEAUservice_description@immersive_shell_component@winrt@@V-$allocator@Use.c)
 *     ??$_Destroy_range@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAXPEAUservice_description@immersive_shell_component@winrt@@QEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x18017C508 (--$_Destroy_range@V-$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??$_Move_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@PEAU123@00@Z @ 0x1803B5360 (--$_Move_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@std@@YAPEAU.c)
 */

void __fastcall __noreturn std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch_10(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rdx
  _OWORD *v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 **v8; // rdi
  __int64 *v9; // rbx

  v3 = a2[4];
  v4 = (_OWORD *)a2[17];
  v5 = (__int64)&v4[4 * v3];
  v6 = (__int64)&v4[2 * v3];
  std::_Uninitialized_move<winrt::immersive_shell_component::service_description *>(v6, v5, v4);
  v7 = v6;
  v8 = (__int64 **)a2[18];
  std::_Move_unchecked<winrt::immersive_shell_component::service_description *,winrt::immersive_shell_component::service_description *>(
    v5,
    *v8,
    v7);
  v9 = (__int64 *)a2[5];
  std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(v9, *v8);
  *v8 = v9;
  throw;
}
