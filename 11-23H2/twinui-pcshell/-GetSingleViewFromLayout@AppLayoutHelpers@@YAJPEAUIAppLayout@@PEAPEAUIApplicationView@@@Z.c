/*
 * XREFs of ?GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z @ 0x1805ECF90
 * Callers:
 *     ?GetAppId@CDragVisual@@UEAAJPEAPEAG@Z @ 0x1805ECC50 (-GetAppId@CDragVisual@@UEAAJPEAPEAG@Z.c)
 *     ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x1805EDC20 (-SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 *     ?_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x1805EEF98 (-_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1805F0EE8 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AppLayoutHelpers::GetSingleViewFromLayout(
        AppLayoutHelpers *this,
        struct IAppLayout *a2,
        struct IApplicationView **a3)
{
  int v5; // ebx
  __int64 v6; // rax
  __int64 (__fastcall *v7)(AppLayoutHelpers *, _QWORD, GUID *, __int64 *); // rdi
  __int64 *v8; // rbx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  *(_QWORD *)a2 = 0LL;
  v5 = -2147467259;
  if ( (*(unsigned int (__fastcall **)(AppLayoutHelpers *, struct IAppLayout *, struct IApplicationView **))(*(_QWORD *)this + 72LL))(
         this,
         a2,
         a3) == 1 )
  {
    v6 = *(_QWORD *)this;
    v10 = 0LL;
    v7 = *(__int64 (__fastcall **)(AppLayoutHelpers *, _QWORD, GUID *, __int64 *))(v6 + 96);
    v8 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v10, &v11);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v8);
    v5 = v7(this, 0LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v8);
    if ( v5 >= 0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10) == 1 )
      v5 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IAppLayout *))(*(_QWORD *)v10 + 48LL))(
             v10,
             &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
             a2);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
  }
  return (unsigned int)v5;
}
