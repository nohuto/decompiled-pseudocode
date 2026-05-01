/*
 * XREFs of ??4?$ComPtr@UITabletModeInputCallback@@@WRL@Microsoft@@QEAAAEAV012@PEAUITabletModeInputCallback@@@Z @ 0x1804CFFC8
 * Callers:
 *     ?SetInputCallback@DragInputHandler@@UEAAJPEAUITabletModeInputCallback@@@Z @ 0x1804D0370 (-SetInputCallback@DragInputHandler@@UEAAJPEAUITabletModeInputCallback@@@Z.c)
 *     ?RuntimeClassInitialize@TabletModeInputHandler@@QEAAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputCallback@@@Z @ 0x180520648 (-RuntimeClassInitialize@TabletModeInputHandler@@QEAAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ITabletModeInputCallback>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a1;
  if ( *a1 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = *a1;
    }
    v6 = v4;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  }
  return a1;
}
