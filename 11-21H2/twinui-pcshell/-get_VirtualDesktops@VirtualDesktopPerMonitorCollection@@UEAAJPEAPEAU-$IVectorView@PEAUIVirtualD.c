/*
 * XREFs of ?get_VirtualDesktops@VirtualDesktopPerMonitorCollection@@UEAAJPEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180029850
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??0?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180017C30 (--0-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@d.c)
 *     ?GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopPerMonitorCollection@@AEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180029B60 (-GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopPerMonitorCollection@@AEAAJPEAUIVirtual.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@1234@Upermission@01234@@Z @ 0x18003236C (--0-$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U-$DefaultEqualit.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x18010EC70 (--0Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18010ECA0 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopPerMonitorCollection::get_VirtualDesktops(RTL_SRWLOCK *this, _QWORD *a2)
{
  RTL_SRWLOCK *v4; // rdi
  __int64 Ptr; // rbx
  __int64 v6; // rax
  int v7; // eax
  int WinRTDesktopForInternalDesktopInternal; // ebx
  __int64 v9; // rdi
  void *v10; // rax
  __int64 v11; // rax
  int v12; // eax
  struct IVirtualDesktop *v14; // rbx
  int v15; // eax
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v21[8]; // [rsp+28h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+30h] [rbp-40h]
  int v23; // [rsp+38h] [rbp-38h] BYREF
  struct IVirtualDesktop *v24[2]; // [rsp+40h] [rbp-30h] BYREF
  int v25; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v26[8]; // [rsp+58h] [rbp-18h] BYREF
  struct IVirtualDesktop *v27; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v29; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+38h] BYREF
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *v31; // [rsp+B0h] [rbp+40h] BYREF
  struct IVirtualDesktop *v32; // [rsp+B8h] [rbp+48h] BYREF

  *a2 = 0LL;
  v4 = this + 41;
  AcquireSRWLockShared(this + 41);
  Ptr = (__int64)this[13].Ptr;
  v20 = Ptr;
  if ( Ptr )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Ptr + 8LL))(Ptr);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  if ( Ptr )
  {
    v6 = *(_QWORD *)Ptr;
    v29 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(v6 + 56))(Ptr, this[40].Ptr, &v29);
    WinRTDesktopForInternalDesktopInternal = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB7,
        (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktoppermonitorcollection.cpp",
        (const char *)(unsigned int)v7,
        v20);
    }
    else
    {
      v9 = 0LL;
      v30 = 0LL;
      WinRTDesktopForInternalDesktopInternal = 0;
      v10 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v10
        && (v11 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>::Vector<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>(v10)) != 0 )
      {
        v9 = v11;
        v30 = v11;
      }
      else
      {
        WinRTDesktopForInternalDesktopInternal = -2147024882;
      }
      if ( WinRTDesktopForInternalDesktopInternal < 0 )
      {
        v16 = (unsigned int)WinRTDesktopForInternalDesktopInternal;
        v17 = 186LL;
      }
      else
      {
        details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>(
          (__int64)v21,
          v29);
        details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
          &v23,
          v21,
          0LL);
        details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
          &v25,
          v21,
          v22);
        while ( v23 != v25 || v24[1] != v27 )
        {
          v14 = v24[0];
          v32 = v24[0];
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v32);
          v31 = 0LL;
          WinRTDesktopForInternalDesktopInternal = VirtualDesktopPerMonitorCollection::GetWinRTDesktopForInternalDesktopInternal(
                                                     (VirtualDesktopPerMonitorCollection *)this,
                                                     v14,
                                                     &v31);
          if ( WinRTDesktopForInternalDesktopInternal < 0 )
          {
            v18 = (unsigned int)WinRTDesktopForInternalDesktopInternal;
            v19 = 191LL;
            goto LABEL_27;
          }
          v15 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *))(*(_QWORD *)v9 + 104LL))(
                  v9,
                  v31);
          WinRTDesktopForInternalDesktopInternal = v15;
          if ( v15 < 0 )
          {
            v18 = (unsigned int)v15;
            v19 = 192LL;
LABEL_27:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v19,
              (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktoppermonitorcollection.cpp",
              (const char *)v18,
              v20);
            wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v31);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v32);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v26);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v24);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v21);
            goto LABEL_28;
          }
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v31);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v32);
          ++v23;
          details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::GetCurrentObject(&v23);
        }
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v26);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v24);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v21);
        v12 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v9 + 64LL))(v9, a2);
        WinRTDesktopForInternalDesktopInternal = v12;
        if ( v12 >= 0 )
        {
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v30);
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v29);
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v20);
          return 0LL;
        }
        v16 = (unsigned int)v12;
        v17 = 195LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktoppermonitorcollection.cpp",
        (const char *)v16,
        v20);
LABEL_28:
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v30);
    }
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v29);
  }
  else
  {
    WinRTDesktopForInternalDesktopInternal = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB4,
      (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktoppermonitorcollection.cpp",
      (const char *)0x8007139FLL,
      v20);
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v20);
  return (unsigned int)WinRTDesktopForInternalDesktopInternal;
}
