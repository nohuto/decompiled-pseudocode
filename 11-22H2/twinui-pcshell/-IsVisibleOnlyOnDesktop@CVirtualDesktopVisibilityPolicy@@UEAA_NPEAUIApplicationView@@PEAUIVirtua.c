/*
 * XREFs of ?IsVisibleOnlyOnDesktop@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1805FAC90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsVisible@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1800D15B0 (-IsVisible@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAA_NXZ @ 0x1800D1AC0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAA_NX.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsAppBarView@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@@Z @ 0x1805FA97C (-IsAppBarView@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

char __fastcall CVirtualDesktopVisibilityPolicy::IsVisibleOnlyOnDesktop(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        __int64 (__fastcall ***a3)(struct IVirtualDesktop *, GUID *, __int64 *))
{
  int v6; // eax
  int v7; // eax
  CVirtualDesktopVisibilityPolicy *v8; // rcx
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  int v16; // [rsp+20h] [rbp-30h] BYREF
  int v17; // [rsp+24h] [rbp-2Ch] BYREF
  _QWORD v18[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v16 = 0;
  v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 216LL))(a2, &v16);
  if ( v6 >= 0 )
  {
    if ( !v16 )
      return 0;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7F,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v6);
  }
  v17 = 0;
  v7 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 336LL))(a2, &v17);
  if ( v7 >= 0 )
  {
    if ( v17 )
      return 0;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x84,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v7);
  }
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl)
    || !CVirtualDesktopVisibilityPolicy::IsAppBarView(v8, a2) )
  {
    v9 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *), _QWORD *))(*a3)[4])(
           a3,
           v18);
    if ( v9 >= 0 )
    {
      v10 = v18[0] - 0x4658059A45DB96FFLL;
      if ( v18[0] == 0x4658059A45DB96FFLL )
        v10 = v18[1] - 0x1012647F7CCD4687LL;
      if ( !v10 )
        return 0;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x90,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
        (const char *)(unsigned int)v9);
    }
    v11 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 200LL))(a2, &v19);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x95,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
        (const char *)(unsigned int)v11);
      return CVirtualDesktopVisibilityPolicy::IsVisible(this, a2, a3);
    }
    v12 = v19 - 0x4CF966F2C2DDEA68LL;
    if ( v19 == 0x4CF966F2C2DDEA68LL )
      v12 = v20 + 0x534404FF02E49B7ELL;
    if ( v12 )
    {
      v13 = v19 - 0x4AB24DE3BB64D5B7LL;
      if ( v19 == 0x4AB24DE3BB64D5B7LL )
        v13 = v20 + 0x235851FE89248358LL;
      if ( v13 )
      {
        v14 = v19 - 0x45D551C0B4620C71LL;
        if ( v19 == 0x45D551C0B4620C71LL )
          v14 = v20 + 0xC8183C556F22755LL;
        if ( v14 )
          return CVirtualDesktopVisibilityPolicy::IsVisible(this, a2, a3);
      }
    }
  }
  return 0;
}
