/*
 * XREFs of ?AppViewSwitchItemZOrderSort_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800811D4
 * Callers:
 *     ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEBUIWindowTabExtension@9UI@Internal@Windows@winrt@@@Z @ 0x180081080 (-RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VAppViewSwitchItemZOrderSort@@@WRL@Microsoft@@IEAAKXZ @ 0x18005A008 (-InternalRelease@-$ComPtr@VAppViewSwitchItemZOrderSort@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitializeOrThrow@VAppViewSwitchItemZOrderSort@@$$V@wil@@YA?AV?$ComPtr@VAppViewSwitchItemZOrderSort@@@WRL@Microsoft@@XZ @ 0x180081294 (--$MakeAndInitializeOrThrow@VAppViewSwitchItemZOrderSort@@$$V@wil@@YA-AV-$ComPtr@VAppViewSwitchI.c)
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801640A0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_1801640A0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppViewSwitchItemZOrderSort_CreateInstance(const struct _GUID *a1, const struct _GUID **a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rdx
  int CanCastTo; // edi
  const struct _GUID *v9; // rcx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  const struct _GUID *v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = a1;
  *a2 = 0LL;
  wil::MakeAndInitializeOrThrow<AppViewSwitchItemZOrderSort,>(&v12);
  *a2 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(
                       &GUID_3ea18911_63f7_4926_87cc_9bd8a30403db,
                       &GUID_00000000_0000_0000_c000_000000000046)
    || (unsigned int)InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    v9 = v12;
    *a2 = v12;
    (*(void (__fastcall **)(const struct _GUID *))(*(_QWORD *)&v9->Data1 + 8LL))(v9);
    CanCastTo = 0;
  }
  else
  {
    if ( (unsigned int)InlineIsEqualGUID(v4, v5) )
    {
      *a2 = v12;
      CanCastTo = 0;
LABEL_5:
      (*(void (__fastcall **)(const struct _GUID *))(*(_QWORD *)&(*a2)->Data1 + 8LL))(*a2);
      goto LABEL_6;
    }
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                  v12->Data4,
                  v6);
    if ( CanCastTo >= 0 )
      goto LABEL_5;
  }
LABEL_6:
  if ( CanCastTo < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x86,
      (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitemzordersort.cpp",
      (const char *)(unsigned int)CanCastTo,
      v10);
  Microsoft::WRL::ComPtr<AppViewSwitchItemZOrderSort>::InternalRelease((__int64 *)&v12);
  return 0LL;
}
