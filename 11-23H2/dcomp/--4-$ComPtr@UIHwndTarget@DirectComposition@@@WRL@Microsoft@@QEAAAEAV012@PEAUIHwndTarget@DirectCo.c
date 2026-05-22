/*
 * XREFs of ??4?$ComPtr@UIHwndTarget@DirectComposition@@@WRL@Microsoft@@QEAAAEAV012@PEAUIHwndTarget@DirectComposition@@@Z @ 0x180085454
 * Callers:
 *     ?RuntimeClassInitialize@?$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAUHWND__@@W4_HwndTargetType@@@Z @ 0x1800850F0 (-RuntimeClassInitialize@-$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition.c)
 *     ?RuntimeClassInitialize@?$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAUHWND__@@W4_HwndTargetType@@@Z @ 0x18008534C (-RuntimeClassInitialize@-$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<DirectComposition::IHwndTarget>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v5);
  }
  return a1;
}
