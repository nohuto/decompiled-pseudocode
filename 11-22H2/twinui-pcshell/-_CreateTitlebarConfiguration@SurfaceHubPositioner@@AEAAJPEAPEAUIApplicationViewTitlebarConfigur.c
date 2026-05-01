/*
 * XREFs of ?_CreateTitlebarConfiguration@SurfaceHubPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1805A5808
 * Callers:
 *     ?GetChromeConfigurationForView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1805A5490 (-GetChromeConfigurationForView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIAppl.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1805A63AC (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 * Callees:
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x1800263C0 (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ @ 0x18004D7B0 (-InternalRelease@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ.c)
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CD1C0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SurfaceHubPositioner::_CreateTitlebarConfiguration(
        SurfaceHubPositioner *this,
        struct IApplicationViewTitlebarConfiguration **a2)
{
  SurfaceHubPositioner *v3; // r8
  int v4; // ebx
  __int64 v5; // rdx
  _DWORD *v6; // rcx
  struct IApplicationViewTitlebarConfiguration *v7; // r8
  _DWORD *v8; // r9
  const struct _GUID *v9; // rdx
  __int64 v10; // r8
  int CanCastTo; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  SurfaceHubPositioner *v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = this;
  *a2 = 0LL;
  Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(&v14);
  v3 = v14;
  if ( !v14 )
  {
    v4 = -2147024882;
    v5 = 632LL;
    goto LABEL_12;
  }
  *((_WORD *)v14 + 24) = 257;
  *((_DWORD *)v3 + 15) = 55;
  *((_DWORD *)v3 + 16) = 0;
  *((_DWORD *)v3 + 17) = 255;
  *((_DWORD *)v3 + 18) = 0;
  *(_QWORD *)((char *)v3 + 52) = 1LL;
  *(_QWORD *)((char *)v3 + 76) = 1LL;
  *((_BYTE *)v3 + 84) = 1;
  *((_DWORD *)v3 + 22) = 0;
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_47dcddaf_0882_4312_b34f_a5ee46048bd6, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a2 = v7;
    (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v7 + 8LL))(v7);
    v4 = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v6, v8) )
    {
      *a2 = (struct IApplicationViewTitlebarConfiguration *)v10;
      v4 = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v10 + 8), v9, (void **)a2);
      v4 = -2147467262;
      if ( CanCastTo == -2147467262 )
        goto LABEL_10;
      v4 = CanCastTo;
      if ( CanCastTo < 0 )
        goto LABEL_10;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
  }
LABEL_10:
  if ( v4 >= 0 )
  {
    v4 = 0;
    goto LABEL_14;
  }
  v5 = 642LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)(unsigned int)v4);
LABEL_14:
  Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease((__int64 *)&v14);
  return (unsigned int)v4;
}
