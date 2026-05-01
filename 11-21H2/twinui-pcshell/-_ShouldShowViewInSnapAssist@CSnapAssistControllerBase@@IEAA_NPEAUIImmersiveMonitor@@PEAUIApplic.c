/*
 * XREFs of ?_ShouldShowViewInSnapAssist@CSnapAssistControllerBase@@IEAA_NPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@@Z @ 0x18059E80C
 * Callers:
 *     ?_CollectItemsForSnapAssist@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@PEAPEAUIObjectCollection@@@Z @ 0x18059DF28 (-_CollectItemsForSnapAssist@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEBV-$vector@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CB14C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1800F1820 (-CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISnappedWindow_________lambda_bb885f2e06808031bc3cd483122bbe8b___ @ 0x18059AFD0 (std--find_if_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--Com.c)
 *     ?_IsTabletMode@CSnapAssistControllerBase@@IEAA_NXZ @ 0x18059E5D4 (-_IsTabletMode@CSnapAssistControllerBase@@IEAA_NXZ.c)
 *     ?CanResizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1805EFA40 (-CanResizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?HasRootSwitchableOwner@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1805EFB48 (-HasRootSwitchableOwner@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsViewShownInSwitchers@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1805EFC10 (-IsViewShownInSwitchers@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CSnapAssistControllerBase::_ShouldShowViewInSnapAssist(
        RTL_SRWLOCK *this,
        __int64 a2,
        __int64 (__fastcall ***a3)(ApplicationViewHelpers *, GUID *, __int64),
        _QWORD **a4,
        __int64 a5)
{
  char v8; // r15
  __int64 v9; // r9
  struct IApplicationView *v10; // rdx
  HWND WindowForView; // rax
  PVOID Ptr; // r14
  __int64 (__fastcall *v13)(PVOID, _QWORD, __int64 *); // rbx
  int v14; // eax
  struct IApplicationView *v15; // rdx
  _QWORD *v16; // rbx
  _QWORD *v17; // r14
  struct IApplicationView *v18; // rdx
  struct IApplicationView *v19; // rdx
  int v20; // eax
  int v21; // eax
  struct IApplicationView *v22; // rdx
  int v24; // [rsp+20h] [rbp-20h] BYREF
  __int64 v25; // [rsp+28h] [rbp-18h] BYREF
  RTL_SRWLOCK *v26[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v28; // [rsp+78h] [rbp+38h] BYREF

  v28 = a2;
  v25 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
    0,
    (__int64)a3,
    (__int64)a4);
  v8 = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHost>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WindowTabHost>::GetImpl'::`2'::impl,
    1u,
    3u,
    v9);
  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a3, v10);
  if ( GetPropW(WindowForView, (LPCWSTR)0xA920) )
    goto LABEL_27;
  Ptr = this[12].Ptr;
  if ( Ptr )
  {
    v13 = *(__int64 (__fastcall **)(PVOID, _QWORD, __int64 *))(*(_QWORD *)Ptr + 48LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
    v14 = v13(Ptr, 0LL, &v25);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x254,
        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
        (const char *)(unsigned int)v14);
LABEL_27:
      v8 = 0;
      goto LABEL_28;
    }
  }
  std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISnappedWindow_________lambda_bb885f2e06808031bc3cd483122bbe8b___(
    v26,
    *a4,
    a4[1],
    (__int64)a3);
  if ( v26[0] != (RTL_SRWLOCK *)a4[1] )
    goto LABEL_27;
  AcquireSRWLockShared(this + 19);
  v26[0] = this + 19;
  v16 = this[25].Ptr;
  v17 = this[26].Ptr;
  while ( v16 != v17 && ApplicationViewHelpers::GetWindowForView(a3, v15) != *v16 )
    ++v16;
  if ( v16 != this[26].Ptr )
  {
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v26);
    goto LABEL_27;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v26);
  if ( !ApplicationViewHelpers::CanResizeView((ApplicationViewHelpers *)a3, v18)
    || !ApplicationViewHelpers::CanMaximizeView(a3, v19) )
  {
    goto LABEL_27;
  }
  LODWORD(v28) = 0;
  if ( v25 )
  {
    v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v25 + 24LL))(v25, a3, &v28);
    if ( v20 >= 0 )
    {
      if ( !(_DWORD)v28 )
        goto LABEL_27;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x27B,
        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
        (const char *)(unsigned int)v20);
    }
  }
  v24 = 0;
  v21 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), int *))(*a3)[30])(
          a3,
          &v24);
  if ( v21 >= 0 )
  {
    if ( !v24 )
      goto LABEL_27;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x283,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)v21);
  }
  if ( CSnapAssistControllerBase::_IsTabletMode((CSnapAssistControllerBase *)this)
    && ApplicationViewHelpers::HasRootSwitchableOwner((struct IUnknown *)a3, v22)
    || a5
    && (*(unsigned int (__fastcall **)(__int64, __int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64)))(*(_QWORD *)a5 + 184LL))(
         a5,
         a3)
    || !ApplicationViewHelpers::IsViewShownInSwitchers((ApplicationViewHelpers *)a3, v22) )
  {
    goto LABEL_27;
  }
LABEL_28:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
  return v8;
}
