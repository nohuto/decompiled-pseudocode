/*
 * XREFs of ??$init_once_nothrow@V_lambda_fec816bb0b05b80584cec4bf4afa1817_@@@wil@@YAJAEAT_RTL_RUN_ONCE@@V_lambda_fec816bb0b05b80584cec4bf4afa1817_@@PEA_N@Z @ 0x18000B6D4
 * Callers:
 *     ?GetPropertyValueStatics@PropertyValueHelper@Composition@UI@Windows@@CAPEAUIPropertyValueStatics@Foundation@4@XZ @ 0x18000B6B8 (-GetPropertyValueStatics@PropertyValueHelper@Composition@UI@Windows@@CAPEAUIPropertyValueStatics.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180086C8C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800E4E88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 wil::init_once_nothrow<_lambda_fec816bb0b05b80584cec4bf4afa1817_>()
{
  const char *v0; // r9
  __int64 v2; // rcx
  __int64 v3; // rbx
  int ActivationFactory; // eax
  WINBOOL fPending; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  fPending = 0;
  if ( !InitOnceBeginInitialize(
          &`Windows::UI::Composition::PropertyValueHelper::GetPropertyValueStatics'::`2'::init,
          0,
          &fPending,
          0LL) )
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0x253, (unsigned int)"wil", v0);
  if ( fPending )
  {
    v7 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.PropertyValue",
      0x21u,
      0x20u);
    v2 = Windows::UI::Composition::PropertyValueHelper::s_propertyValueFactory;
    v3 = v7;
    if ( Windows::UI::Composition::PropertyValueHelper::s_propertyValueFactory )
    {
      Windows::UI::Composition::PropertyValueHelper::s_propertyValueFactory = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
    ActivationFactory = RoGetActivationFactory(
                          v3,
                          &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858,
                          &Windows::UI::Composition::PropertyValueHelper::s_propertyValueFactory);
    if ( ActivationFactory < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x67,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\PropertyValueHelper.h",
        (const char *)(unsigned int)ActivationFactory,
        fPending);
    InitOnceComplete(&`Windows::UI::Composition::PropertyValueHelper::GetPropertyValueStatics'::`2'::init, 0, 0LL);
  }
  return 0LL;
}
