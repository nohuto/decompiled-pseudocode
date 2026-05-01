/*
 * XREFs of ?QueryInsertApp@PPILayoutOperation@@AEAAJPEAUIApplicationView@@@Z @ 0x180514438
 * Callers:
 *     ?InsertApp@PPILayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x180514240 (-InsertApp@PPILayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SurfaceHubProximalAppLaunch@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180505D9C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SurfaceHubProximalAppLaunch@@@details@wil.c)
 *     ?FindLeastRecentlyActivatedItem@PPILayoutOperation@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x1805140AC (-FindLeastRecentlyActivatedItem@PPILayoutOperation@@AEAAJPEAPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall PPILayoutOperation::QueryInsertApp(
        PPILayoutOperation *this,
        struct IApplicationView *a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // eax
  __int64 *v7; // rcx
  __int64 v8; // r11
  int v9; // ebx
  __int64 v10; // rdx
  __int64 *AddressOf; // rax
  int LeastRecentlyActivatedItem; // eax
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v16; // [rsp+50h] [rbp+18h] BYREF
  __int64 v17; // [rsp+58h] [rbp+20h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SurfaceHubProximalAppLaunch>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SurfaceHubProximalAppLaunch>::GetImpl'::`2'::impl,
    0,
    a3,
    a4);
  if ( (*(unsigned int (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 8) + 184LL))(
         *((_QWORD *)this + 8),
         a2) )
  {
    return 0LL;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 8) + 168LL))(
         *((_QWORD *)this + 8),
         0LL,
         &v16);
  v7 = (__int64 *)*((_QWORD *)this + 8);
  v8 = *v7;
  if ( v6 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, struct IApplicationView *, __int64))(v8 + 248))(v7, 0LL, a2, 1LL);
    if ( v9 < 0 )
    {
      v10 = 206LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppilayoutoperation.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
    return 0LL;
  }
  if ( (*(unsigned int (**)(void))(v8 + 72))() > 1 )
  {
    v17 = 0LL;
    AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v17);
    LeastRecentlyActivatedItem = PPILayoutOperation::FindLeastRecentlyActivatedItem(
                                   this,
                                   (struct IApplicationView **)AddressOf);
    v9 = LeastRecentlyActivatedItem;
    if ( LeastRecentlyActivatedItem >= 0 )
    {
      LeastRecentlyActivatedItem = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IApplicationView *, __int64))(**((_QWORD **)this + 8) + 248LL))(
                                     *((_QWORD *)this + 8),
                                     v17,
                                     a2,
                                     1LL);
      v9 = LeastRecentlyActivatedItem;
      if ( LeastRecentlyActivatedItem >= 0 )
      {
        v9 = 0;
        goto LABEL_16;
      }
      v14 = 221LL;
    }
    else
    {
      v14 = 220LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppilayoutoperation.cpp",
      (const char *)(unsigned int)LeastRecentlyActivatedItem);
LABEL_16:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v17);
    return (unsigned int)v9;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(**((_QWORD **)this + 8) + 232LL))(
         *((_QWORD *)this + 8),
         a2,
         1LL);
  if ( v9 < 0 )
  {
    v10 = 213LL;
    goto LABEL_5;
  }
  return 0LL;
}
