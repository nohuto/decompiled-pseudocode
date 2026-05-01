/*
 * XREFs of ?CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1803EE8D8
 * Callers:
 *     ?GetChromeConfigurationForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1803ED210 (-GetChromeConfigurationForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIAppl.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x1803EDA44 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 * Callees:
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x1800263C0 (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 *     ?IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180044A70 (-IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ @ 0x18004D7B0 (-InternalRelease@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18009FF88 (-IsPPIEdition@@YA_NXZ.c)
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CD1C0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall FullScreenPositionerHelpers::CreateTitlebarConfiguration(
        int (__fastcall ***this)(FullScreenPositionerHelpers *, GUID *, __int64 *),
        struct IApplicationView *a2,
        void **a3,
        struct IApplicationViewTitlebarConfiguration **a4)
{
  int v5; // ebp
  __int64 v7; // rbx
  int v8; // ebx
  __int64 v9; // rdx
  int v10; // edi
  bool v11; // al
  struct IApplicationView *v12; // rdx
  char IsFullScreenCompatQuirkedApp; // al
  BOOL v14; // ecx
  _DWORD *v15; // rcx
  _DWORD *v16; // r9
  const struct _GUID *v17; // rdx
  int CanCastTo; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v21; // [rsp+50h] [rbp+18h] BYREF

  v5 = (unsigned __int8)a2;
  *a3 = 0LL;
  Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(&v21);
  v7 = v21;
  if ( !v21 )
  {
    v8 = -2147024882;
    v9 = 68LL;
    goto LABEL_24;
  }
  v10 = 1;
  *(_WORD *)(v21 + 48) = 1;
  *(_DWORD *)(v7 + 52) = 1;
  *(_DWORD *)(v7 + 56) = 1;
  *(_DWORD *)(v7 + 88) = 0;
  *(_DWORD *)(v7 + 68) = 255;
  *(_DWORD *)(v7 + 72) = 0;
  v11 = IsPPIEdition();
  *(_DWORD *)(v7 + 60) = 55;
  if ( v11 )
  {
    *(_DWORD *)(v7 + 64) = 32;
    *(_DWORD *)(v7 + 76) = 0;
  }
  else
  {
    *(_DWORD *)(v7 + 64) = (v5 ^ 1) + 36;
    *(_DWORD *)(v7 + 76) = 32 * ((v5 ^ 1) + 2);
  }
  IsFullScreenCompatQuirkedApp = FullScreenPositionerHelpers::IsFullScreenCompatQuirkedApp(this, v12);
  v14 = (_BYTE)v5 && !IsFullScreenCompatQuirkedApp;
  *(_DWORD *)(v7 + 80) = v14;
  *(_BYTE *)(v7 + 84) = 1;
  if ( IsFullScreenCompatQuirkedApp )
  {
    if ( (_BYTE)v5 || IsPPIEdition() )
      v10 = 0;
    *(_DWORD *)(v7 + 60) = 51;
    *(_DWORD *)(v7 + 64) = v10;
  }
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_47dcddaf_0882_4312_b34f_a5ee46048bd6, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a3 = (void *)v7;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v15, v16) )
    {
      *a3 = (void *)v7;
      v8 = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v7 + 8), v17, a3);
      v8 = -2147467262;
      if ( CanCastTo == -2147467262 )
        goto LABEL_22;
      v8 = CanCastTo;
      if ( CanCastTo < 0 )
        goto LABEL_22;
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
  }
LABEL_22:
  if ( v8 >= 0 )
  {
    v8 = 0;
    goto LABEL_26;
  }
  v9 = 109LL;
LABEL_24:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositionerhelpers.cpp",
    (const char *)(unsigned int)v8);
LABEL_26:
  Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease(&v21);
  return (unsigned int)v8;
}
