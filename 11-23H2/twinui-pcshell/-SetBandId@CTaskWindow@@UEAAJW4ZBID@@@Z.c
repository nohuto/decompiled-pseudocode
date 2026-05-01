/*
 * XREFs of ?SetBandId@CTaskWindow@@UEAAJW4ZBID@@@Z @ 0x18005DA30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_SetAssociatedWindowBandId@CTaskWindow@@AEAAXW4ZBID@@PEBG@Z @ 0x18005DAC4 (-_SetAssociatedWindowBandId@CTaskWindow@@AEAAXW4ZBID@@PEBG@Z.c)
 *     ??$As@UINtUserViewWrapper@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800BA2B8 (--$As@UINtUserViewWrapper@@@-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@W.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTaskWindow::SetBandId(__int64 a1, unsigned int a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<INtUserViewWrapper>(
    a1 + 48,
    &v5);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 40LL))(v5, a2);
  CTaskWindow::_SetAssociatedWindowBandId(a1 - 8, a2, L"{1CADE38A-8C26-4D73-A0D7-3ADE69F02A94}");
  CTaskWindow::_SetAssociatedWindowBandId(a1 - 8, a2, L"{A086F28F-D579-49B1-9117-F2A3AC324349}");
  *(_DWORD *)(a1 + 44) = a2 - 8;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  return 0LL;
}
