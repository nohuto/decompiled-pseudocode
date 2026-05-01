/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapper@3456@PEAU73456@AEAW4ViewSizePreference@ViewManagement@UI@6@AEAW489UI@6@AEA_KAEAPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@PEAUIWindowingEnvironmentSettings@3456@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapper@4567@1AEAW4ViewSizePreference@ViewManagement@UI@7@2AEA_KAEAPEAUIAsyncCallback@@$$QEAPEAUIPropertySet@Collections@Foundation@7@$$QEAPEAUIWindowingEnvironmentSettings@4567@@Z @ 0x1804B94D4
 * Callers:
 *     ?TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x1804CAEEC (-TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@W.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@UIWindowingEnironmentSettingsArgsForImplicitEvent@6789@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802D8340 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_1802D8340.c)
 *     ??0ViewEventArgsForShowAsStandalone@@QEAA@XZ @ 0x1804BBD08 (--0ViewEventArgsForShowAsStandalone@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$ImplementsMarker@VViewEventArgsBase@@@Details@23@UIWeakReferenceSource@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@UIWindowingEnironmentSettingsArgsForImplicitEvent@89Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804C2E0C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U-$Implem_ea_1804C2E0C.c)
 *     ?RuntimeClassInitialize@ViewEventArgsForShowAsStandalone@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@0W4ViewSizePreference@ViewManagement@UI@6@1_KPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@PEAUIWindowingEnvironmentSettings@3456@@Z @ 0x1804C95D8 (-RuntimeClassInitialize@ViewEventArgsForShowAsStandalone@@QEAAJPEAUIViewWrapper@ViewManagerInter.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForShowAsStandalone,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,enum Windows::UI::ViewManagement::ViewSizePreference &,enum Windows::UI::ViewManagement::ViewSizePreference &,unsigned __int64 &,IAsyncCallback * &,Windows::Foundation::Collections::IPropertySet *,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *>(
        ViewEventArgsForShowAsStandalone **a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4,
        _DWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  ViewEventArgsForShowAsStandalone *v13; // rax
  int CanCastTo; // edi
  ViewEventArgsForShowAsStandalone *v15; // rbx
  _DWORD *v16; // rcx
  __int64 v17; // rcx

  *a1 = 0LL;
  v13 = (ViewEventArgsForShowAsStandalone *)operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v13 )
  {
    v15 = ViewEventArgsForShowAsStandalone::ViewEventArgsForShowAsStandalone(v13);
    CanCastTo = ViewEventArgsForShowAsStandalone::RuntimeClassInitialize(v15, *a2, *a3, *a4, *a5, *a6, *a7, *a8, *a9);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_96c11dea_68de_44ef_a7f7_3aa869663d57, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(v16, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
      {
        *a1 = v15;
        (*(void (__fastcall **)(ViewEventArgsForShowAsStandalone *))(*(_QWORD *)v15 + 8LL))(v15);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Microsoft::WRL::Details::ImplementsMarker<ViewEventArgsBase>,IWeakReferenceSource,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>::CanCastTo(
                      v15,
                      v17,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(ViewEventArgsForShowAsStandalone *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v15 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>::Release((__int64)v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
