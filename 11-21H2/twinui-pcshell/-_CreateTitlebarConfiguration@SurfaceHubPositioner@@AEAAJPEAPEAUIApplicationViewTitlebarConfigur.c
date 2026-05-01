/*
 * XREFs of ?_CreateTitlebarConfiguration@SurfaceHubPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1804ED818
 * Callers:
 *     ?GetChromeConfigurationForView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1804ED4A0 (-GetChromeConfigurationForView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIAppl.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1804EE358 (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081EB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewTitlebarConfiguration@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800F21C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationView.c)
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x1800F2244 (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SurfaceHubPositioner::_CreateTitlebarConfiguration(
        SurfaceHubPositioner *this,
        struct IApplicationViewTitlebarConfiguration **a2)
{
  volatile signed __int32 *v3; // rbx
  int v4; // edi
  __int64 v5; // rdx
  _DWORD *v6; // rcx
  _DWORD *v7; // r9
  const struct _GUID *v8; // rdx
  int CanCastTo; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile signed __int32 *v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = (volatile signed __int32 *)this;
  *a2 = 0LL;
  Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(&v12);
  v3 = v12;
  if ( !v12 )
  {
    v4 = -2147024882;
    v5 = 632LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_14;
  }
  *((_WORD *)v12 + 24) = 257;
  *((_DWORD *)v3 + 15) = 55;
  *((_DWORD *)v3 + 16) = 0;
  *((_DWORD *)v3 + 17) = 255;
  *((_DWORD *)v3 + 18) = 0;
  *(_QWORD *)(v3 + 13) = 1LL;
  *(_QWORD *)(v3 + 19) = 1LL;
  *((_BYTE *)v3 + 84) = 1;
  *((_DWORD *)v3 + 22) = 0;
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_47dcddaf_0882_4312_b34f_a5ee46048bd6, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a2 = (struct IApplicationViewTitlebarConfiguration *)v3;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    v4 = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v6, v7) )
    {
      *a2 = (struct IApplicationViewTitlebarConfiguration *)v3;
      v4 = 0;
LABEL_8:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
      goto LABEL_10;
    }
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v3 + 2), v8, (void **)a2);
    v4 = -2147467262;
    if ( CanCastTo != -2147467262 )
    {
      v4 = CanCastTo;
      if ( CanCastTo >= 0 )
        goto LABEL_8;
    }
  }
LABEL_10:
  if ( v4 < 0 )
  {
    v5 = 642LL;
    goto LABEL_12;
  }
  v4 = 0;
LABEL_14:
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::Release(v3);
  return (unsigned int)v4;
}
