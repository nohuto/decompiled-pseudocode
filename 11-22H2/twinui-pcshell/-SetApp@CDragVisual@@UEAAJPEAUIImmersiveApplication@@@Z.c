/*
 * XREFs of ?SetApp@CDragVisual@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1805EDB50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180015A20 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z @ 0x1805D1324 (-BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z.c)
 */

__int64 __fastcall CDragVisual::SetApp(CDragVisual *this, struct IUnknown *a2)
{
  __int64 *v4; // rbp
  IUnknown *v5; // rdi
  __int64 *v6; // rbx
  struct IApplicationView **v7; // r9
  int ViewForApplication; // ebx
  struct IAppLayout **v9; // r8
  _QWORD v11[7]; // [rsp+20h] [rbp-38h] BYREF
  AppLayoutHelpers *v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0LL;
  v4 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v13, &v14);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v4);
  v5 = (IUnknown *)*((_QWORD *)this - 1);
  v12 = 0LL;
  v6 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v12, v11);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v6);
  ViewForApplication = ApplicationViewHelpers::GetViewForApplication(v5, a2, (struct IImmersiveApplication *)v6, v7);
  if ( ViewForApplication >= 0 )
    ViewForApplication = AppLayoutHelpers::BuildSingleViewLayout(v12, (struct IApplicationView *)v4, v9);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v12);
  if ( ViewForApplication >= 0 )
    ViewForApplication = (*(__int64 (__fastcall **)(CDragVisual *, __int64, _QWORD))(*(_QWORD *)this + 72LL))(
                           this,
                           v13,
                           0LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  return (unsigned int)ViewForApplication;
}
