/*
 * XREFs of ?InputDeviceKind@?$consume_WindowsUdk_UI_Shell_IDismissShellViewOptions@UIDismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180418BF8
 * Callers:
 *     CActionCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x1801DC300 (CActionCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     CControlCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x1801DE790 (CControlCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewOptions<winrt::WindowsUdk::UI::Shell::IDismissShellViewOptions>::InputDeviceKind(
        __int64 *a1)
{
  __int64 v1; // rcx
  signed int v2; // eax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 48LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  return v4;
}
