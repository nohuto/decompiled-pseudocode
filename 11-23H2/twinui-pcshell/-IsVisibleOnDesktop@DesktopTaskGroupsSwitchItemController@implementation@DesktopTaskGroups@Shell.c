/*
 * XREFs of ?IsVisibleOnDesktop@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAA_NAEBUISwitchItem@Multitasking@ComposableShell@567@AEBUIVirtualDesktop@9ComposableShell@567@@Z @ 0x18064AA70
 * Callers:
 *     ?IsVisibleOnDesktop@?$produce@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIPlatformTaskGroupsSwitchItemController@TaskGroups@4567@@impl@winrt@@UEAAHPEAX0PEA_N@Z @ 0x18064AA00 (-IsVisibleOnDesktop@-$produce@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskG.c)
 * Callees:
 *     ?Data@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180027964 (-Data@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem@UISwitchItem@Multitask.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$as@UIVirtualDesktopInternal@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIVirtualDesktopInternal@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18064A6B0 (--$as@UIVirtualDesktopInternal@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0.c)
 *     ??$as@UTaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUTaskGroup@TaskGroups@Shell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18064A718 (--$as@UTaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@Windo.c)
 *     ?IsGroupVisibleOnDesktop@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@AEAA_NAEBUTaskGroup@TaskGroups@4567@PEAUIVirtualDesktop@@@Z @ 0x18064A7A8 (-IsGroupVisibleOnDesktop@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::IsVisibleOnDesktop(
        winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *this,
        const struct winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem *a2,
        const struct winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *a3)
{
  __int64 v5; // rbx
  struct IVirtualDesktop *v6; // rdi
  _QWORD *v7; // rax
  char IsGroupVisibleOnDesktop; // di
  __int64 v10; // [rsp+20h] [rbp-10h] BYREF
  __int64 v11; // [rsp+28h] [rbp-8h] BYREF
  __int64 v12; // [rsp+60h] [rbp+30h] BYREF
  __int64 v13; // [rsp+68h] [rbp+38h] BYREF

  winrt::impl::as<IVirtualDesktopInternal,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v10,
    *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a3);
  v5 = v10;
  v6 = *(struct IVirtualDesktop **)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 24LL))(v10, &v11);
  v7 = winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::Data(
         (__int64 *)a2,
         &v13);
  winrt::impl::as<winrt::Windows::Internal::Shell::TaskGroups::TaskGroup,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v12,
    (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*v7);
  IsGroupVisibleOnDesktop = winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::IsGroupVisibleOnDesktop(
                              this,
                              (const struct winrt::Windows::Internal::Shell::TaskGroups::TaskGroup *)&v12,
                              v6);
  if ( v12 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  if ( v13 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  if ( v5 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v10);
  return IsGroupVisibleOnDesktop;
}
