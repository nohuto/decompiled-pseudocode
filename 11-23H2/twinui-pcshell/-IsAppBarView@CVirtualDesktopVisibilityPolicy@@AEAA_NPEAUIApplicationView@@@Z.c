/*
 * XREFs of ?IsAppBarView@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@@Z @ 0x1805FA97C
 * Callers:
 *     ?IsVisible@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1800D15B0 (-IsVisible@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 *     ?CanViewMoveDesktops@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@@Z @ 0x1800D3C80 (-CanViewMoveDesktops@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsVisibleOnlyOnDesktop@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1805FAC90 (-IsVisibleOnlyOnDesktop@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtua.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIApplicationView@@@Z @ 0x1803A5520 (--4-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIApplicationVi.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID47173054@@@details@wil@@QEAA_NXZ @ 0x1805FB334 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID47173054@@@details@wil@@QEAA_NX.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall CVirtualDesktopVisibilityPolicy::IsAppBarView(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2)
{
  int (__fastcall *v3)(struct IApplicationView *, void (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  __int64 v4; // rcx
  int v5; // eax
  char v6; // bl
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  CVirtualDesktopVisibilityPolicy *v9; // [rsp+40h] [rbp+20h] BYREF
  void (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp+30h] BYREF
  __int64 v11; // [rsp+58h] [rbp+38h] BYREF

  v9 = this;
  v10 = 0LL;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID47173054>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID47173054>::GetImpl'::`2'::impl) )
    goto LABEL_5;
  v3 = *(int (__fastcall **)(struct IApplicationView *, void (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)a2 + 360LL);
  v4 = (__int64)v10;
  v10 = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v3(a2, &v10) < 0 )
LABEL_5:
    wil::com_ptr_t<IApplicationView,wil::err_exception_policy>::operator=((__int64 *)&v10, (__int64)a2);
  v11 = 0LL;
  (**v10)(v10, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v11);
  if ( v11 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, CVirtualDesktopVisibilityPolicy **))(*(_QWORD *)v11 + 40LL))(v11, &v9);
    if ( v5 >= 0 )
    {
      v6 = 1;
      if ( (_DWORD)v9 == 1 )
      {
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
        goto LABEL_10;
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3C,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
        (const char *)(unsigned int)v5);
    }
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
  v6 = 0;
LABEL_10:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v10);
  return v6;
}
