/*
 * XREFs of ?CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180321388
 * Callers:
 *     ?GetChromeConfigurationForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18031F5B0 (-GetChromeConfigurationForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIAppl.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x180320184 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081EB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180099154 (-IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800C27AC (-IsPPIEdition@@YA_NXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewTitlebarConfiguration@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800F21C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationView.c)
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x1800F2244 (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall FullScreenPositionerHelpers::CreateTitlebarConfiguration(
        FullScreenPositionerHelpers *this,
        struct IApplicationView *a2,
        void **a3,
        struct IApplicationViewTitlebarConfiguration **a4)
{
  int v5; // ebp
  volatile signed __int32 *v7; // rbx
  int v8; // edi
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
  volatile signed __int32 *v21; // [rsp+50h] [rbp+18h] BYREF

  v5 = (unsigned __int8)a2;
  *a3 = 0LL;
  Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(&v21);
  v7 = v21;
  if ( !v21 )
  {
    v8 = -2147024882;
    v9 = 68LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositionerhelpers.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_26;
  }
  v10 = 1;
  *((_WORD *)v21 + 24) = 1;
  *((_DWORD *)v7 + 13) = 1;
  *((_DWORD *)v7 + 14) = 1;
  *((_DWORD *)v7 + 22) = 0;
  *((_DWORD *)v7 + 17) = 255;
  *((_DWORD *)v7 + 18) = 0;
  v11 = IsPPIEdition();
  *((_DWORD *)v7 + 15) = 55;
  if ( v11 )
  {
    *((_DWORD *)v7 + 16) = 32;
    *((_DWORD *)v7 + 19) = 0;
  }
  else
  {
    *((_DWORD *)v7 + 16) = (v5 ^ 1) + 36;
    *((_DWORD *)v7 + 19) = 32 * ((v5 ^ 1) + 2);
  }
  IsFullScreenCompatQuirkedApp = FullScreenPositionerHelpers::IsFullScreenCompatQuirkedApp(this, v12);
  v14 = (_BYTE)v5 && !IsFullScreenCompatQuirkedApp;
  *((_DWORD *)v7 + 20) = v14;
  *((_BYTE *)v7 + 84) = 1;
  if ( IsFullScreenCompatQuirkedApp )
  {
    if ( (_BYTE)v5 || IsPPIEdition() )
      v10 = 0;
    *((_DWORD *)v7 + 15) = 51;
    *((_DWORD *)v7 + 16) = v10;
  }
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_47dcddaf_0882_4312_b34f_a5ee46048bd6, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a3 = (void *)v7;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v15, v16) )
    {
      *a3 = (void *)v7;
      v8 = 0;
LABEL_20:
      (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
      goto LABEL_22;
    }
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v7 + 2), v17, a3);
    v8 = -2147467262;
    if ( CanCastTo != -2147467262 )
    {
      v8 = CanCastTo;
      if ( CanCastTo >= 0 )
        goto LABEL_20;
    }
  }
LABEL_22:
  if ( v8 < 0 )
  {
    v9 = 109LL;
    goto LABEL_24;
  }
  v8 = 0;
LABEL_26:
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::Release(v7);
  return (unsigned int)v8;
}
