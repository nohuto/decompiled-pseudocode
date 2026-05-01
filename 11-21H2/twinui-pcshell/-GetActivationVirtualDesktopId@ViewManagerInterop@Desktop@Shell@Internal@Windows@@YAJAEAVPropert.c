/*
 * XREFs of ?GetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@PEAU_GUID@@@Z @ 0x1802F6024
 * Callers:
 *     ?_GetVirtualDesktopForPendingActivation@CAppViewManager@@AEAAJ_KPEAPEAUIVirtualDesktop@@@Z @ 0x1802FC5D4 (-_GetVirtualDesktopForPendingActivation@CAppViewManager@@AEAAJ_KPEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ??$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAU_GUID@@@Z1@Z @ 0x18003864C (--$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::Desktop::ViewManagerInterop::GetActivationVirtualDesktopId(
        Windows::Internal::Shell::Desktop::ViewManagerInterop *this,
        struct Windows::Internal::ShellHelpers::PropertySetHelper *a2,
        struct _GUID *a3)
{
  __int64 v5; // r8
  int v6; // eax
  unsigned int v7; // ebx
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  HSTRING v10; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v10 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"ActivationVirtualDesktopId",
    0x1Bu,
    0x1Au);
  v6 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<_GUID>(this, v10, v5, a2);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x30,
    (__int64)"pcshell\\TwinUI\\viewmanagerinterop\\inc\\ViewManagerInteropPropertySetHelpers.h",
    (const char *)(unsigned int)v6);
  return v7;
}
