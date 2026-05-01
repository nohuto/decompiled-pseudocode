/*
 * XREFs of ?IsAgile@@YA_NPEAUIUnknown@@@Z @ 0x1802DB774
 * Callers:
 *     ?SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$AAUISwitchItemDataSource@2345@@Z @ 0x180437F30 (-SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$A.c)
 *     ?put_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUIActivationViewSwitcher@ViewManagement@UI@Windows@@@Z @ 0x1805E6A50 (-put_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUIActivationViewSwitcher@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall IsAgile(struct IUnknown *a1)
{
  char v2; // di
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v5 = 0LL;
  if ( !a1
    || (QueryInterface = a1->lpVtbl->QueryInterface,
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5),
        ((int (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
          a1,
          &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90,
          &v5) >= 0) )
  {
    v2 = 1;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  return v2;
}
