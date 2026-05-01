/*
 * XREFs of ?RegisterHotKeys@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18019B0E0
 * Callers:
 *     ?subscribe_to_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800E8760 (-subscribe_to_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAU.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveChat@@@details@wil@@QEAA_NXZ @ 0x180098788 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveChat@@@details@wil@@QEAA_NX.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MainKey_ChatCompliance@@@details@wil@@QEAA_NXZ @ 0x180098904 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MainKey_ChatCompliance@@@details@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::RegisterHotKeys(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  _DWORD v4[4]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveChat>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_RemoveChat>::GetImpl'::`2'::impl)
    && !wil::details::FeatureImpl<__WilFeatureTraits_Feature_MainKey_ChatCompliance>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_MainKey_ChatCompliance>::GetImpl'::`2'::impl) )
  {
    v2 = *((_QWORD *)this + 20);
    v4[0] = 2;
    v4[1] = 107;
    v4[2] = 16392;
    v4[3] = 67;
    v3 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *))(*(_QWORD *)v2 + 56LL))(
           v2,
           1LL,
           v4,
           this);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1FC,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
        (const char *)(unsigned int)v3,
        (_DWORD)this + 168);
  }
}
