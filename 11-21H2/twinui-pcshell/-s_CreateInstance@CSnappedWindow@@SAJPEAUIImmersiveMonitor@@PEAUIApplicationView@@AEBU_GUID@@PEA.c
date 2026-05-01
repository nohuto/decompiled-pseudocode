/*
 * XREFs of ?s_CreateInstance@CSnappedWindow@@SAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x1805AB918
 * Callers:
 *     ?GetAdjacentHalfSnappedView@CShellSnapComponent@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z @ 0x1805928A0 (-GetAdjacentHalfSnappedView@CShellSnapComponent@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z.c)
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAKPEAUtagRECT@@3@Z @ 0x1805944A0 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAKPE.c)
 *     ?_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@@Z @ 0x180599D64 (-_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@@Z.c)
 *     ?GetSnapRectForDesktopMode@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAUCRect@Geometry@@@Z @ 0x18059F50C (-GetSnapRectForDesktopMode@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAU.c)
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805A9A60 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 *     ?UpdateMonitorDataFromPoint@SnapLayoutProvider@@AEAA_NAEBUCPoint@Geometry@@PEAUIApplicationView@@PEAUISnappedWindowModel@@@Z @ 0x1805ACDD8 (-UpdateMonitorDataFromPoint@SnapLayoutProvider@@AEAA_NAEBUCPoint@Geometry@@PEAUIApplicationView@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCSnappedWindow@@V1@AEAPEAUIImmersiveMonitor@@AEAPEAUIApplicationView@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnappedWindow@@AEAPEAUIImmersiveMonitor@@AEAPEAUIApplicationView@@@Z @ 0x1805AB1F8 (--$MakeAndInitialize@VCSnappedWindow@@V1@AEAPEAUIImmersiveMonitor@@AEAPEAUIApplicationView@@@Det.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSnappedWindow::s_CreateInstance(
        struct IImmersiveMonitor *a1,
        struct IApplicationView *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IImmersiveMonitor *v10; // [rsp+30h] [rbp+8h] BYREF
  struct IApplicationView *v11; // [rsp+38h] [rbp+10h] BYREF
  CSnappedWindow *v12; // [rsp+40h] [rbp+18h] BYREF

  v11 = a2;
  v10 = a1;
  *a4 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<CSnappedWindow,CSnappedWindow,IImmersiveMonitor * &,IApplicationView * &>(
         &v12,
         &v10,
         &v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 186LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snappedwindow.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_6;
  }
  v5 = (**(__int64 (__fastcall ***)(CSnappedWindow *, GUID *, void **))v12)(
         v12,
         &GUID_4fe1cc33_a131_420c_9186_10076351de28,
         a4);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 187LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  return v6;
}
