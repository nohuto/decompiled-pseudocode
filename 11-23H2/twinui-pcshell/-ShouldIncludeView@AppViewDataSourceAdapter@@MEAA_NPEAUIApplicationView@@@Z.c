/*
 * XREFs of ?ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z @ 0x180082A60
 * Callers:
 *     ?InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x180082560 (-InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x18005CE70 (--$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWin32.c)
 *     ?IsTabWindowOwner@@YA_NPEAUIApplicationView@@@Z @ 0x180082AD4 (-IsTabWindowOwner@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?ShouldIncludeView@AppViewDataSourceAdapterBase@@MEAA_NPEAUIApplicationView@@@Z @ 0x180082B10 (-ShouldIncludeView@AppViewDataSourceAdapterBase@@MEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180082B54 (-IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAA_NXZ @ 0x1800D1AC0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAA_NX.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAA_NXZ @ 0x180117BCC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall AppViewDataSourceAdapter::ShouldIncludeView(
        AppViewDataSourceAdapter *this,
        struct IApplicationView *a2)
{
  struct IApplicationView *v4; // rdx
  int v5; // eax
  HWND WindowForView; // rax
  struct IApplicationView *v8; // rdx
  HWND v9; // rax
  HANDLE PropW; // rax
  int v11; // eax
  void (__fastcall ***v12)(_QWORD, GUID *, _QWORD *); // [rsp+38h] [rbp+10h] BYREF
  int v13; // [rsp+40h] [rbp+18h] BYREF
  __int64 v14; // [rsp+48h] [rbp+20h] BYREF

  v12 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))a2;
  if ( HolographicViewHelpers::IsApplicationViewHolographic(a2, a2) )
    return 0;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl)
    || (*((_BYTE *)this + 184) & 8) != 0 )
  {
LABEL_3:
    v5 = *((_DWORD *)this + 46);
    if ( (v5 & 2) != 0 )
    {
      WindowForView = ApplicationViewHelpers::GetWindowForView(a2, v4);
      if ( GetPropW(WindowForView, (LPCWSTR)0xA921) )
        return 0;
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl) )
      {
        if ( *((_QWORD *)this + 30) )
        {
          v9 = ApplicationViewHelpers::GetWindowForView(a2, v8);
          if ( v9 )
          {
            PropW = GetPropW(v9, (LPCWSTR)0xA920);
            if ( PropW )
            {
              LOBYTE(v13) = 0;
              v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(**((_QWORD **)this + 30) + 104LL))(
                      *((_QWORD *)this + 30),
                      (unsigned int)PropW,
                      &v13);
              if ( v11 < 0 )
                winrt::throw_hresult((unsigned int)v11);
              if ( !(_BYTE)v13 )
                return 0;
            }
          }
        }
      }
    }
    else if ( (v5 & 1) != 0 && IsTabWindowOwner(a2) )
    {
      return 0;
    }
    return AppViewDataSourceAdapterBase::ShouldIncludeView(this, a2);
  }
  wil::try_com_query<IWin32ApplicationView,IApplicationView * &>(&v14, &v12);
  if ( !v14 || (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 40LL))(v14, &v13) < 0 || v13 != 1 )
  {
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
    goto LABEL_3;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
  return 0;
}
