/*
 * XREFs of ?ChromeManager_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18014F740
 * Callers:
 *     ?Initialize@TabletModePositioner@@AEAAJXZ @ 0x1800B0F0C (-Initialize@TabletModePositioner@@AEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18014F6D4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_18014F6D4.c)
 *     ??$MakeAndInitialize@VChromeManager@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVChromeManager@@AEAPEAUIUnknown@@@Z @ 0x18014F7F8 (--$MakeAndInitialize@VChromeManager@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVChrom.c)
 *     ?InternalRelease@?$ComPtr@VChromeManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18017C9D0 (-InternalRelease@-$ComPtr@VChromeManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ChromeManager_CreateInstance(struct IUnknown *a1, const struct _GUID *a2, void **a3)
{
  int v4; // eax
  int CanCastTo; // ebx
  _DWORD *v6; // rcx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  void *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown *v12; // [rsp+30h] [rbp+8h] BYREF
  void *v13; // [rsp+38h] [rbp+10h] BYREF

  v12 = a1;
  *a3 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<ChromeManager>::InternalRelease(&v13);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<ChromeManager,ChromeManager,IUnknown * &>(&v13, &v12);
  CanCastTo = v4;
  if ( v4 < 0 )
  {
    v8 = (unsigned int)v4;
    v9 = 122LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\chromemanager.cpp",
      (const char *)v8);
    goto LABEL_6;
  }
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_d9a46771_b4e4_4a04_a1ed_d397de86726f, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v10 = v13;
    *a3 = v13;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 8LL))(v10);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,ITabletModeChromeManager>::CanCastTo(
                  (__int64)v13,
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
  Microsoft::WRL::ComPtr<ChromeManager>::InternalRelease(&v13);
  return (unsigned int)CanCastTo;
}
