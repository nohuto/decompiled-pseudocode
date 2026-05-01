/*
 * XREFs of ?Show@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1805BA6F4
 * Callers:
 *     ?Show@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHXZ @ 0x1805B0490 (-Show@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?Position@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBAXAEBURect@Foundation@Windows@3@@Z @ 0x18058B20C (-Position@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWin.c)
 *     ?CalculateFlyoutBounds@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AURect@Foundation@67@PEAUHMONITOR__@@AEBUFrameworkElement@Xaml@UI@67@PEAUHWND__@@_NAEBU8967@@Z @ 0x1805B87B8 (-CalculateFlyoutBounds@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@wi.c)
 *     ?View@?$consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUFrameworkElement@Xaml@UI@Windows@3@XZ @ 0x1805BB6EC (-View@-$consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension@UISnapLayoutPickerExtension@Shell.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Show(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  _DWORD *v5; // rcx
  char v6; // bl
  HWND v7; // rdi
  __int64 *v8; // rax
  __int64 v9; // rdx
  signed int v10; // eax
  signed int v11; // eax
  __int64 v12; // [rsp+30h] [rbp-58h] BYREF
  __int128 v13; // [rsp+38h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+48h] [rbp-40h] BYREF
  __int64 *v15; // [rsp+68h] [rbp-20h]
  int v16; // [rsp+70h] [rbp-18h]
  int v17; // [rsp+74h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( *((_BYTE *)this + 299) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x62,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyoutinstance.cpp",
      a4);
  if ( *((_BYTE *)this + 300) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x63,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyoutinstance.cpp",
      a4);
  v5 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   (__int64)retaddr,
                   _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 5u )
  {
    LODWORD(v12) = *((_DWORD *)this + 70);
    v15 = &v12;
    v16 = 4;
    v17 = 0;
    tlgWriteTransfer_EventWriteTransfer((__int64)v5, (unsigned __int8 *)dword_1806CB873, 0LL, 0LL, 3u, &v14);
  }
  v6 = *((_BYTE *)this + 296);
  v7 = (HWND)*((_QWORD *)this + 36);
  v8 = (__int64 *)winrt::impl::consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension<winrt::WindowsUdk::UI::Shell::ISnapLayoutPickerExtension>::View(
                    (char *)this + 240,
                    &v12);
  winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBounds(
    (float *)&v13,
    *((_QWORD *)this + 40),
    v8,
    v7,
    v6,
    (float *)this + 76);
  if ( v12 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  LOBYTE(v9) = 1;
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 88LL))(*((_QWORD *)this + 32), v9);
  if ( v10 < 0 )
    winrt::throw_hresult(v10);
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 32) + 104LL))(*((_QWORD *)this + 32), 0LL);
  if ( v11 < 0 )
    winrt::throw_hresult(v11);
  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupWindowInformation>::Position(
    (__int64 **)this + 32,
    &v13);
  *((_BYTE *)this + 299) = 1;
}
