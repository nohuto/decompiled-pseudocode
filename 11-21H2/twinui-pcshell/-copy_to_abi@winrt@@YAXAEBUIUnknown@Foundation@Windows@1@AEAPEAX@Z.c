/*
 * XREFs of ?copy_to_abi@winrt@@YAXAEBUIUnknown@Foundation@Windows@1@AEAPEAX@Z @ 0x1800F2A28
 * Callers:
 *     ?CreateInBand@XamlExplorerHostShellComponent@@UEAAJIURect@Foundation@Windows@ABI@@PEAPEAUIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@45@@Z @ 0x18002FC30 (-CreateInBand@XamlExplorerHostShellComponent@@UEAAJIURect@Foundation@Windows@ABI@@PEAPEAUIXamlEx.c)
 *     ?CreateWithParent@XamlExplorerHostShellComponent@@UEAAJ_KPEAUHSTRING__@@PEAPEAUIXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@ABI@@@Z @ 0x1800F2930 (-CreateWithParent@XamlExplorerHostShellComponent@@UEAAJ_KPEAUHSTRING__@@PEAPEAUIXamlExplorerHost.c)
 *     ?GetTaskGroupsDataModel@AppViewDataSourceAdapter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180454670 (-GetTaskGroupsDataModel@AppViewDataSourceAdapter@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetTaskGroupsDataSourceAdapter@AppViewDataSourceAdapter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180454740 (-GetTaskGroupsDataSourceAdapter@AppViewDataSourceAdapter@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall winrt::copy_to_abi(struct IUnknownVtbl **this, const struct IUnknown *a2, void **a3)
{
  struct IUnknownVtbl *v3; // rcx

  v3 = *this;
  a2->lpVtbl = v3;
  if ( v3 )
    (*((void (__fastcall **)(struct IUnknownVtbl *, const struct IUnknown *, void **))v3->QueryInterface + 1))(
      v3,
      a2,
      a3);
}
