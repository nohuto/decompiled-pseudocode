/*
 * XREFs of ??0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z @ 0x18000CD04
 * Callers:
 *     ?HandleDestruction@CImmersiveWindowManager@@UEAA?AW4WINDOW_DESTROYED_RESULT@@PEAUIImmersiveApplicationInternal@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x18000B0A0 (-HandleDestruction@CImmersiveWindowManager@@UEAA-AW4WINDOW_DESTROYED_RESULT@@PEAUIImmersiveAppli.c)
 *     ?_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x18000C9F4 (-_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_RemoveApplication@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18000CAC0 (-_RemoveApplication@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_HandleApplicationActivation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@@Z @ 0x18000CC20 (-_HandleApplicationActivation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@P.c)
 *     ?_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x18006DBBC (-_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicati.c)
 *     ?CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180398730 (-CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@.c)
 *     ?TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PEBUTransferWindowOptions@@@Z @ 0x1803A1450 (-TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PE.c)
 *     ?UnensureApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1803A1990 (-UnensureApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_HandleApplicationPrecreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1803A79BC (-_HandleApplicationPrecreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CImmersiveAppFinderByApplication *__fastcall CImmersiveAppFinderByApplication::CImmersiveAppFinderByApplication(
        CImmersiveAppFinderByApplication *this,
        void (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *))
{
  void (__fastcall *v4)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *); // rbx

  *(_QWORD *)this = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(this);
  v4((struct IImmersiveApplicationInternal *)a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831, this);
  return this;
}
