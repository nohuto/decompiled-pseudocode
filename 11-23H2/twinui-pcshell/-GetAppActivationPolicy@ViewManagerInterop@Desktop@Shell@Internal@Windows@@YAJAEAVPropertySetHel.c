/*
 * XREFs of ?GetAppActivationPolicy@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@PEAE@Z @ 0x1804C3F6C
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804BE170 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x1800DDC9C (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::Desktop::ViewManagerInterop::GetAppActivationPolicy(
        Windows::Internal::Shell::Desktop::ViewManagerInterop *this,
        struct Windows::Internal::ShellHelpers::PropertySetHelper *a2,
        unsigned __int8 *a3)
{
  unsigned int v5; // esi
  __int64 v6; // r8
  int v7; // eax
  HSTRING_HEADER v9; // [rsp+20h] [rbp-38h] BYREF
  HSTRING v10; // [rsp+38h] [rbp-20h]

  v5 = 0;
  *(_BYTE *)a2 = 0;
  v10 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v9,
    L"ApplicationMultiviewActivationPolicy",
    0x25u,
    0x24u);
  v7 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(this, v10, v6, a2);
  if ( v7 < 0 )
    return (unsigned int)v7;
  return v5;
}
