/*
 * XREFs of ?GetMonitorFromVirtualDesktop@VirtualDesktopHelpers@@YAPEAUHMONITOR__@@PEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInternal@@@Z @ 0x18048AD10
 * Callers:
 *     ?SwitchToDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18048E020 (-SwitchToDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??0?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180017C30 (--0-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@d.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x18010EC70 (--0Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18010ECA0 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Tidy@?$vector@PEAUHMONITOR__@@V?$allocator@PEAUHMONITOR__@@@std@@@std@@AEAAXXZ @ 0x18031D0B8 (-_Tidy@-$vector@PEAUHMONITOR__@@V-$allocator@PEAUHMONITOR__@@@std@@@std@@AEAAXXZ.c)
 *     ?GetMonitors@VirtualDesktopHelpers@@YA?AV?$vector@PEAUHMONITOR__@@V?$allocator@PEAUHMONITOR__@@@std@@@std@@XZ @ 0x18048AE5C (-GetMonitors@VirtualDesktopHelpers@@YA-AV-$vector@PEAUHMONITOR__@@V-$allocator@PEAUHMONITOR__@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopHelpers::GetMonitorFromVirtualDesktop(
        struct IUnknown *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktopManagerInternal *a3)
{
  __int64 v5; // rsi
  _QWORD *i; // rdi
  __int64 v7; // rax
  struct IUnknown *v8; // rbx
  __int64 v10; // [rsp+20h] [rbp-60h] BYREF
  int v11; // [rsp+28h] [rbp-58h]
  unsigned int v12; // [rsp+30h] [rbp-50h] BYREF
  struct IUnknown *v13[2]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v14[3]; // [rsp+48h] [rbp-38h] BYREF
  int v15; // [rsp+60h] [rbp-20h] BYREF
  __int64 v16[3]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v17; // [rsp+C0h] [rbp+40h] BYREF
  struct IUnknown *v18; // [rsp+C8h] [rbp+48h] BYREF

  v5 = 0LL;
  VirtualDesktopHelpers::GetMonitors(v14);
  for ( i = (_QWORD *)v14[0]; i != (_QWORD *)v14[1]; ++i )
  {
    v7 = *(_QWORD *)a2;
    v17 = 0LL;
    if ( (*(int (__fastcall **)(struct IVirtualDesktop *, _QWORD, __int64 *))(v7 + 56))(a2, *i, &v17) >= 0 )
    {
      details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>(
        (__int64)&v10,
        v17);
      details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
        (__int64)&v12,
        (__int64)&v10,
        0);
      details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
        (__int64)&v15,
        (__int64)&v10,
        v11);
      while ( v12 != v15 || v13[1] != (struct IUnknown *)v16[1] )
      {
        v8 = v13[0];
        v18 = v13[0];
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
        if ( (unsigned int)SHIsSameObject(this, v8) )
        {
          v5 = *i;
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v18);
          break;
        }
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v18);
        ++v12;
        details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::GetCurrentObject(&v12);
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v16);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v13);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
      if ( v5 )
      {
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v17);
        break;
      }
    }
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v17);
  }
  std::vector<HMONITOR__ *>::_Tidy((__int64)v14);
  return v5;
}
