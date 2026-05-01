/*
 * XREFs of ?OnViewCloaking@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18039C144
 * Callers:
 *     ?OnViewChanged@SearchAppDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18039C070 (-OnViewChanged@SearchAppDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@In.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180093360 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800A47E0 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NotifyView@SearchAppDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18039BC6C (-NotifyView@SearchAppDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Win.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SearchAppDesktopExperienceView::OnViewCloaking(SearchAppDesktopExperienceView *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // r8d
  __int64 v5; // rax
  __int64 v6; // r8
  int v7; // eax
  __int64 v8; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v10; // [rsp+20h] [rbp-40h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v11; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 88LL))(*((_QWORD *)this + 10));
  v10 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v2 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v13,
         (__int64 *)&v10);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v11 = v10;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
           (__int64)&hstringHeader,
           (const WCHAR **)&off_180669638,
           v4);
    v7 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)&v11,
           *(HSTRING *)(v5 + 24),
           v6,
           0);
    v3 = v7;
    if ( v7 >= 0 )
    {
      v7 = SearchAppDesktopExperienceView::NotifyView(this, L"NotifyCloakStateChanged", v10);
      v3 = v7;
      if ( v7 >= 0 )
      {
        *((_BYTE *)this + 209) = 0;
        v3 = 0;
        goto LABEL_9;
      }
      v8 = 804LL;
    }
    else
    {
      v8 = 802LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v7);
LABEL_9:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x31D,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)(unsigned int)v2);
LABEL_10:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
  return v3;
}
