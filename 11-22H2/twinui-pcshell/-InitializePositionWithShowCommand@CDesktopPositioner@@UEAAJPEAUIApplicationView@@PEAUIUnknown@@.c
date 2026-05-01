/*
 * XREFs of ?InitializePositionWithShowCommand@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAKPEAUtagRECT@@@Z @ 0x1805B3800
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetSnapId@CDesktopPositioner@@AEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18003A55C (-TryGetSnapId@CDesktopPositioner@@AEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?ShouldMaximizeWindow@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x18003A5F8 (-ShouldMaximizeWindow@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x18007620C (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapOnShow@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180119080 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapOnShow@@@details@wil@@QEAAX_NW4Report.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapLauncherAPI@@@details@wil@@QEAA_NXZ @ 0x1801D68E8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapLauncherAPI@@@details@wil@@QE.c)
 *     ?TryGetSnapRectForAppView@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@PEAUIUnknown@@PEAURect@Foundation@Windows@@@Z @ 0x180213068 (-TryGetSnapRectForAppView@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@PEAUIUnknown@@PEAURect.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopPositioner::InitializePositionWithShowCommand(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4,
        unsigned int *a5,
        struct tagRECT *a6)
{
  char IsEnabled; // al
  CDesktopPositioner *v11; // rcx
  LONG v12; // r8d
  LONG v13; // edx
  LONG v14; // ecx
  unsigned int SnapId; // r9d
  LONG v16; // ebx
  LONG v17; // r11d
  LONG v18; // r10d
  int v19; // eax
  unsigned int v20; // ebx
  __int128 v22; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+40h]

  *a5 = 0;
  *a6 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapOnShow>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SnapOnShow>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    (__int64)a4);
  if ( CDesktopPositioner::ShouldMaximizeWindow((CDesktopPositioner *)((char *)this - 144), a2) )
  {
    *a5 = 2;
  }
  else
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapLauncherAPI>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_SnapLauncherAPI>::GetImpl'::`2'::impl);
    v11 = (CDesktopPositioner *)((char *)this - 144);
    if ( IsEnabled )
    {
      v22 = 0LL;
      if ( CDesktopPositioner::TryGetSnapRectForAppView(v11, a2, a3, (struct Windows::Foundation::Rect *)&v22) )
      {
        *a5 = 3;
        v12 = (int)*((float *)&v22 + 1);
        v13 = (int)(float)(*((float *)&v22 + 2) + *(float *)&v22);
        v14 = (int)(float)(*((float *)&v22 + 3) + *((float *)&v22 + 1));
        a6->left = (int)*(float *)&v22;
        a6->top = v12;
        a6->right = v13;
        a6->bottom = v14;
      }
    }
    else
    {
      SnapId = CDesktopPositioner::TryGetSnapId(v11, a2, a3);
      if ( SnapId != -1 )
      {
        v22 = 0LL;
        if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int128 *))(**((_QWORD **)this + 27) + 80LL))(
               *((_QWORD *)this + 27),
               SnapId,
               &v22) >= 0 )
        {
          *a5 = 3;
          v16 = (int)*((float *)&v22 + 1);
          v17 = (int)(float)(*((float *)&v22 + 2) + *(float *)&v22);
          v18 = (int)(float)(*((float *)&v22 + 3) + *((float *)&v22 + 1));
          a6->left = (int)*(float *)&v22;
          a6->top = v16;
          a6->right = v17;
          a6->bottom = v18;
        }
      }
    }
  }
  v19 = CDesktopPositioner::InitializePositionHelper((CDesktopPositioner *)((char *)this - 144), a2, a3, a4);
  v20 = v19;
  if ( v19 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x47A,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v19);
  return v20;
}
