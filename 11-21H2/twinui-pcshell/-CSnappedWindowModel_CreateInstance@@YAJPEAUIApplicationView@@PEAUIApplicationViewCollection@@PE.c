/*
 * XREFs of ?CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@AEBU_GUID@@PEAPEAX@Z @ 0x180598C0C
 * Callers:
 *     ?GetUnoccludedSnappedWindowsForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AU?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@7@UWindowId@WindowManagement@ApplicationModel@567@W4UnoccludedWindowsOptions@34567@@Z @ 0x180589AFC (-GetUnoccludedSnappedWindowsForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Intern.c)
 *     ?GetAdjacentHalfSnappedView@CShellSnapComponent@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z @ 0x1805928A0 (-GetAdjacentHalfSnappedView@CShellSnapComponent@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z.c)
 *     ?GetAdjacentSnappedViews@CShellSnapComponent@@UEAAJPEAUIApplicationView@@HPEAPEAUIObjectArray@@1@Z @ 0x180592CE0 (-GetAdjacentSnappedViews@CShellSnapComponent@@UEAAJPEAUIApplicationView@@HPEAPEAUIObjectArray@@1.c)
 *     ?GetHalfSnappedViewFromToolWindow@CShellSnapComponent@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x1805935F0 (-GetHalfSnappedViewFromToolWindow@CShellSnapComponent@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@.c)
 *     ?_EnsureWindowModel@CShellSnapComponent@@AEAAJPEAUIApplicationView@@@Z @ 0x1805978F0 (-_EnsureWindowModel@CShellSnapComponent@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RetrieveSnappedWindowsForMonitor@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEAV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18059E6B4 (-_RetrieveSnappedWindowsForMonitor@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEAV-$.c)
 *     ?GetSnapRectForDesktopMode@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAUCRect@Geometry@@@Z @ 0x18059F50C (-GetSnapRectForDesktopMode@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAU.c)
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805A9A60 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCSnappedWindowModel@@V1@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveMonitorManager@@AEAW4SnappedWindowOcclusionModel@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnappedWindowModel@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveMonitorManager@@AEAW4SnappedWindowOcclusionModel@@@Z @ 0x1805983E0 (--$MakeAndInitialize@VCSnappedWindowModel@@V1@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewCo.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSnappedWindowModel_CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        CSnappedWindowModel *a6)
{
  CSnappedWindowModel *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v12; // [rsp+50h] [rbp+20h] BYREF
  __int64 v13; // [rsp+58h] [rbp+28h] BYREF
  __int64 v14; // [rsp+60h] [rbp+30h] BYREF
  int v15; // [rsp+68h] [rbp+38h] BYREF

  v15 = a4;
  v14 = a3;
  v13 = a2;
  v12 = a1;
  v6 = a6;
  *(_QWORD *)a6 = 0LL;
  a6 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a6);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<CSnappedWindowModel,CSnappedWindowModel,IApplicationView * &,IApplicationViewCollection * &,IImmersiveMonitorManager * &,enum SnappedWindowOcclusionModel &>(
         &a6,
         &v12,
         &v13,
         &v14,
         &v15);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 166LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snappedwindowmodel.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_6;
  }
  v7 = (**(__int64 (__fastcall ***)(CSnappedWindowModel *, GUID *, CSnappedWindowModel *))a6)(
         a6,
         &GUID_c3fa9c5f_1c18_451b_8c77_5eba502c4f06,
         v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 167LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a6);
  return v8;
}
