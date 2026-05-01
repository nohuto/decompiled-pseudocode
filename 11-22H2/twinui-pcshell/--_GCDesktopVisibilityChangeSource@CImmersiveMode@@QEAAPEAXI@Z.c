/*
 * XREFs of ??_GCDesktopVisibilityChangeSource@CImmersiveMode@@QEAAPEAXI@Z @ 0x1802CFE7C
 * Callers:
 *     ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1801811AC (-_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?_UnregisterDesktopVisibilitySource@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x1802CFEBA (-_UnregisterDesktopVisibilitySource@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 *     ??1?$CAutoMemPtr@VCDesktopVisibilityChangeSource@CImmersiveMode@@@@QEAA@XZ @ 0x1803A7C38 (--1-$CAutoMemPtr@VCDesktopVisibilityChangeSource@CImmersiveMode@@@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

HWND *__fastcall CImmersiveMode::CDesktopVisibilityChangeSource::`scalar deleting destructor'(HWND *this)
{
  DestroyWindow(this[2]);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this);
  operator delete(this);
  return this;
}
