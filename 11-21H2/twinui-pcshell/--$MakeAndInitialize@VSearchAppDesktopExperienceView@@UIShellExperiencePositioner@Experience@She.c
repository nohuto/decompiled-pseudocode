/*
 * XREFs of ??$MakeAndInitialize@VSearchAppDesktopExperienceView@@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@AEAPEAUIServiceProvider@@AEAPEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@AEAPEAUIServiceProvider@@AEAPEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180397BA4
 * Callers:
 *     ?RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x18038A6E4 (-RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExp.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@VISearchAppDesktopNotifications@Cortana@TwinUI@@VISearchAppExperienceView@Cortana@TwinUI@@UIImmersiveWindowMessageNotification@@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInputHostLayoutChanges@@VICortanaWNFNotification@Cortana@TwinUI@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18022CE10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShe_ea_18022CE10.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@VISearchAppDesktopNotifications@Cortana@TwinUI@@VISearchAppExperienceView@Cortana@TwinUI@@UIImmersiveWindowMessageNotification@@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInputHostLayoutChanges@@VICortanaWNFNotification@Cortana@TwinUI@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@VISearchAppDesktopNotifications@Cortana@TwinUI@@VISearchAppExperienceView@Cortana@TwinUI@@UIImmersiveWindowMessageNotification@@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInputHostLayoutChanges@@VICortanaWNFNotification@Cortana@TwinUI@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1803977F8 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperience.c)
 *     ??0SearchAppDesktopExperienceView@@QEAA@XZ @ 0x1803981C8 (--0SearchAppDesktopExperienceView@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x18039D9E8 (-RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAp.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SearchAppDesktopExperienceView,Windows::Internal::Shell::Experience::IShellExperiencePositioner,IServiceProvider * &,TwinUI::Cortana::ISearchAppExperienceManagerNotification * &>(
        _QWORD *a1,
        struct IServiceProvider **a2,
        struct TwinUI::Cortana::ISearchAppExperienceManagerNotification **a3)
{
  SearchAppDesktopExperienceView *v6; // rax
  int v7; // esi
  SearchAppDesktopExperienceView *v8; // rdi

  *a1 = 0LL;
  v6 = (SearchAppDesktopExperienceView *)operator new(0xF8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = SearchAppDesktopExperienceView::SearchAppDesktopExperienceView(v6);
    v7 = SearchAppDesktopExperienceView::RuntimeClassInitialize(v8, *a2, *a3);
    if ( v7 >= 0 )
      v7 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperiencePositioner,TwinUI::Cortana::ISearchAppDesktopNotifications,TwinUI::Cortana::ISearchAppExperienceView,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>>(
             (__int64)v8,
             &GUID_c6ff146a_7f1d_492e_8981_e95cda605ef7,
             a1);
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperiencePositioner,TwinUI::Cortana::ISearchAppDesktopNotifications,TwinUI::Cortana::ISearchAppExperienceView,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>::Release((__int64)v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
