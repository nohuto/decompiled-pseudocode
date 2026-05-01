/*
 * XREFs of ?IsVisible@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1800D15B0
 * Callers:
 *     ?IsVisibleOnlyOnDesktop@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1805FAC90 (-IsVisibleOnlyOnDesktop@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtua.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAA_NXZ @ 0x1800D1AC0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAA_NX.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsAppBarView@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@@Z @ 0x1805FA97C (-IsAppBarView@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall CVirtualDesktopVisibilityPolicy::IsVisible(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        __int64 (__fastcall ***a3)(struct IVirtualDesktop *, GUID *, __int64 *))
{
  bool v5; // bl
  int v6; // eax
  CVirtualDesktopVisibilityPolicy *v7; // rcx
  int v8; // eax
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rdx
  __int64 (__fastcall **v12)(struct IVirtualDesktop *, GUID *, __int64 *); // rax
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  int v18; // [rsp+20h] [rbp-40h] BYREF
  __int64 v19; // [rsp+28h] [rbp-38h] BYREF
  int v20; // [rsp+30h] [rbp-30h] BYREF
  int v21; // [rsp+34h] [rbp-2Ch] BYREF
  __int64 v22; // [rsp+38h] [rbp-28h] BYREF
  __int64 v23; // [rsp+40h] [rbp-20h]
  __int64 v24; // [rsp+48h] [rbp-18h] BYREF
  __int64 v25; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v5 = 0;
  v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 216LL))(a2, &v20);
  if ( v6 >= 0 )
  {
    if ( !v20 )
      return 1;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4C,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v6,
      v18);
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl)
    && CVirtualDesktopVisibilityPolicy::IsAppBarView(v7, a2) )
  {
    return 1;
  }
  v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 336LL))(a2, &v21);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x59,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v8,
      v18);
    goto LABEL_9;
  }
  if ( v21 )
    return 1;
LABEL_9:
  v9 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *), __int64 *))(*a3)[4])(
         a3,
         &v22);
  v10 = retaddr;
  if ( v9 < 0 )
  {
    v11 = 95LL;
LABEL_16:
    wil::details::in1diag3::_Log_Hr(
      v10,
      (void *)v11,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v9,
      v18);
    return v5;
  }
  if ( v22 == 0x4658059A45DB96FFLL && v23 == 0x1012647F7CCD4687LL )
    return 1;
  v9 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 200LL))(a2, &v24);
  v10 = retaddr;
  if ( v9 < 0 )
  {
    v11 = 104LL;
    goto LABEL_16;
  }
  v18 = 0;
  v12 = *a3;
  v19 = 0LL;
  v13 = (*v12)((struct IVirtualDesktop *)a3, &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30, &v19);
  v14 = retaddr;
  if ( v13 < 0 )
  {
    v15 = 109LL;
LABEL_21:
    wil::details::in1diag3::_Log_Hr(
      v14,
      (void *)v15,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v13,
      v18);
LABEL_22:
    v5 = v24 == 0x4CF966F2C2DDEA68LL && v25 == 0xACBBFB00FD1B6482uLL
      || v24 == 0x4AB24DE3BB64D5B7LL && v25 == 0xDCA7AE0176DB7CA8uLL
      || v24 == 0x45D551C0B4620C71LL && v25 == 0xF37E7C3AA90DD8ABuLL
      || v24 == v22 && v25 == v23;
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    return v5;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 56LL))(v19, &v18);
  v14 = retaddr;
  if ( v13 < 0 )
  {
    v15 = 111LL;
    goto LABEL_21;
  }
  if ( !v18 )
    goto LABEL_22;
  v16 = v24 - v22;
  if ( v24 == v22 )
    v16 = v25 - v23;
  v5 = v16 == 0;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
  return v5;
}
