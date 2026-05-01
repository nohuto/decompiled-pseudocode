/*
 * XREFs of ?copy_to_abi@winrt@@YAXAEBUIUnknown@Foundation@Windows@1@AEAPEAX@Z @ 0x180063314
 * Callers:
 *     ?GetTaskGroupsDataModel@AppViewDataSourceAdapter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800631A0 (-GetTaskGroupsDataModel@AppViewDataSourceAdapter@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetTaskGroupsDataSourceAdapter@AppViewDataSourceAdapter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180063260 (-GetTaskGroupsDataSourceAdapter@AppViewDataSourceAdapter@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?TagWindowForSnapAnimation@CSnapAssistControllerBase@@UEAAJ_KURect@Foundation@Windows@@PEAPEAUISnapAnimationTag@WindowSnapping@Shell@Internal@4@@Z @ 0x18066C780 (-TagWindowForSnapAnimation@CSnapAssistControllerBase@@UEAAJ_KURect@Foundation@Windows@@PEAPEAUIS.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
