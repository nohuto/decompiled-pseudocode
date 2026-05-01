/*
 * XREFs of ??1SnapAssistState@@QEAA@XZ @ 0x18078B1EC
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VSnapAssistState@@@std@@EEAAXXZ @ 0x18076EE60 (-_Destroy@-$_Ref_count_obj2@VSnapAssistState@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x1801C5F74 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1801F0838 (-complete@-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180223D70 (--1-$com_ptr_t@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_poli.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Tidy@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXXZ @ 0x18066E41C (-_Tidy@-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$allocator@USna.c)
 */

void __fastcall SnapAssistState::~SnapAssistState(SnapAssistState *this)
{
  void **v2; // rdi
  __int64 v3; // rcx

  v2 = (void **)((char *)this + 176);
  tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>::complete((__int64 *)this + 22);
  if ( *((_QWORD *)this + 23) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((SnapAssistState *)((char *)this + 184));
  wil::com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>(v2);
  if ( *((_QWORD *)this + 21) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((SnapAssistState *)((char *)this + 168));
  if ( *((_QWORD *)this + 20) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((SnapAssistState *)((char *)this + 160));
  v3 = *((_QWORD *)this + 18);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)this + 72);
  std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Tidy((__int64)this + 48);
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)this + 24);
  std::vector<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::_Tidy(this);
}
