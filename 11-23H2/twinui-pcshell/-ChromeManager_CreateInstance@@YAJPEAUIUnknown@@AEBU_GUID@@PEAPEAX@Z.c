/*
 * XREFs of ?ChromeManager_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180104E60
 * Callers:
 *     ?Initialize@TabletModePositioner@@AEAAJXZ @ 0x180107378 (-Initialize@TabletModePositioner@@AEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ??$MakeAndInitialize@VChromeManager@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVChromeManager@@AEAPEAUIUnknown@@@Z @ 0x1801034F8 (--$MakeAndInitialize@VChromeManager@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVChrom.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180104DF4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_180104DF4.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VChromeManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1801402D4 (-InternalRelease@-$ComPtr@VChromeManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ChromeManager_CreateInstance(struct IUnknown *a1, const struct _GUID *a2, void **a3)
{
  int v4; // eax
  int CanCastTo; // ebx
  _DWORD *v6; // rcx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  ChromeManager *v10; // rcx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown *v13; // [rsp+30h] [rbp+8h] BYREF
  ChromeManager *v14; // [rsp+38h] [rbp+10h] BYREF

  v13 = a1;
  *a3 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<ChromeManager>::InternalRelease(&v14);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<ChromeManager,ChromeManager,IUnknown * &>(&v14, &v13);
  CanCastTo = v4;
  if ( v4 < 0 )
  {
    v8 = (unsigned int)v4;
    v9 = 122LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"pcshell\\twinui\\tabletmode\\lib\\chromemanager.cpp",
      (const char *)v8,
      v11);
    goto LABEL_6;
  }
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_d9a46771_b4e4_4a04_a1ed_d397de86726f, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v10 = v14;
    *a3 = v14;
    (*(void (__fastcall **)(ChromeManager *))(*(_QWORD *)v10 + 8LL))(v10);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,ITabletModeChromeManager>::CanCastTo(
                  (__int64)v14,
                  v6,
                  a3);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  }
  if ( CanCastTo < 0 )
  {
    v8 = (unsigned int)CanCastTo;
    v9 = 123LL;
    goto LABEL_10;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<ChromeManager>::InternalRelease(&v14);
  return (unsigned int)CanCastTo;
}
