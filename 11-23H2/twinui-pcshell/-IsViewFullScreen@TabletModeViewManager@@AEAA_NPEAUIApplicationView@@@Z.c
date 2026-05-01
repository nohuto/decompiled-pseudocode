/*
 * XREFs of ?IsViewFullScreen@TabletModeViewManager@@AEAA_NPEAUIApplicationView@@@Z @ 0x1805C3D78
 * Callers:
 *     ?MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z @ 0x1805C3E30 (-MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall TabletModeViewManager::IsViewFullScreen(IUnknown **this, struct IApplicationView *a2)
{
  bool v4; // di
  int v6; // [rsp+30h] [rbp+8h] BYREF
  void *ppvOut; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  if ( IUnknown_QueryService(
         this[2],
         (const GUID *const)&SID_FullScreenManager,
         &GUID_f0093591_bfa3_471f_b9f0_f17f8a979c6d,
         &ppvOut) >= 0
    && (*(int (__fastcall **)(void *, struct IApplicationView *, int *))(*(_QWORD *)ppvOut + 40LL))(ppvOut, a2, &v6) >= 0 )
  {
    v4 = v6 != 0;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  return v4;
}
