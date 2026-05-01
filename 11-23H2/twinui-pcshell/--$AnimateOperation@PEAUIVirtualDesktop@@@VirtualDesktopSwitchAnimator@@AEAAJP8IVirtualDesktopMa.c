/*
 * XREFs of ??$AnimateOperation@PEAUIVirtualDesktop@@@VirtualDesktopSwitchAnimator@@AEAAJP8IVirtualDesktopManagerPrivate@@EAAJPEAUIVirtualDesktop@@@Z0W4VirtualDesktopSwitchDirection@@0@Z @ 0x180616398
 * Callers:
 *     ?SwitchDesktop@VirtualDesktopSwitchAnimator@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@@Z @ 0x180617610 (-SwitchDesktop@VirtualDesktopSwitchAnimator@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDir.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180118CC8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_9IVirtualDesktopManagerPrivate@@$BBIA@AA @ 0x1802A92F0 (--_9IVirtualDesktopManagerPrivate@@$BBIA@AA.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopSwitchAnimator::AnimateOperation<IVirtualDesktop *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v13 = a3;
  v12 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VwUpdates>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  v13 = 0LL;
  v5 = *(_QWORD *)(a1 + 200);
  v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 360LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  v7 = v6(v5, &v13);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v12 = 0LL;
    v9 =  IVirtualDesktopManagerPrivate::`vcall'{384,{flat}}(*(_QWORD *)(a1 + 200));
    v8 = v9;
    if ( v9 >= 0 )
    {
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12);
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC2,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopswitchanimator.cpp",
        (const char *)(unsigned int)v9);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB4,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopswitchanimator.cpp",
      (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  return v8;
}
