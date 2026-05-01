/*
 * XREFs of ?GetVirtualDesktops@VirtualDesktopDataSource@@AEAAJW4DesktopKind@@PEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18053F758
 * Callers:
 *     ?GetRemoteDesktops@VirtualDesktopDataSource@@UEAAJPEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18053F670 (-GetRemoteDesktops@VirtualDesktopDataSource@@UEAAJPEAPEAU-$IVectorView@PEAUIVirtualDesktop@Multi.c)
 *     ?get_VirtualDesktops@VirtualDesktopDataSource@@UEAAJPEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180540BB0 (-get_VirtualDesktops@VirtualDesktopDataSource@@UEAAJPEAPEAU-$IVectorView@PEAUIVirtualDesktop@Mul.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@1234@Upermission@01234@@Z @ 0x1800471E4 (--0-$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U-$DefaultEqualit.c)
 *     ??0?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180060DF8 (--0-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@d.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x18013B7F0 (--0Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18013B820 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801D07C0 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopDataSource@@AEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18053FF04 (-GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopDataSource@@AEAAJPEAUIVirtualDesktop@@P.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall VirtualDesktopDataSource::GetVirtualDesktops(RTL_SRWLOCK *this, int a2, _QWORD *a3)
{
  int v6; // r14d
  RTL_SRWLOCK *v7; // rbx
  __int64 *Ptr; // rcx
  __int64 result; // rax
  __int64 v10; // rax
  __int64 (*v11)(void); // rax
  int v12; // eax
  unsigned int v13; // edi
  const char *v14; // r9
  __int64 v15; // rsi
  __int64 v16; // rdi
  void *v17; // rax
  int v18; // eax
  unsigned int v19; // edi
  struct IVirtualDesktop *v20; // rdi
  __int64 (__fastcall **v21)(struct IVirtualDesktop *, GUID *, __int64 *); // rax
  int v22; // eax
  unsigned int v23; // r14d
  int v24; // eax
  unsigned int v25; // r14d
  int WinRTDesktopForInternalDesktopInternal; // eax
  unsigned int v27; // edi
  int v28; // eax
  unsigned int v29; // edi
  __int64 v30; // [rsp+20h] [rbp-98h] BYREF
  struct IVirtualDesktop *v31; // [rsp+28h] [rbp-90h] BYREF
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *v32; // [rsp+30h] [rbp-88h] BYREF
  __int64 v33; // [rsp+38h] [rbp-80h] BYREF
  int v34; // [rsp+40h] [rbp-78h]
  unsigned int v35; // [rsp+48h] [rbp-70h] BYREF
  struct IVirtualDesktop *v36[2]; // [rsp+50h] [rbp-68h] BYREF
  int v37; // [rsp+60h] [rbp-58h] BYREF
  __int64 v38[10]; // [rsp+68h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  void *v40; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v41; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v42; // [rsp+D8h] [rbp+20h] BYREF

  v6 = 0;
  *a3 = 0LL;
  v7 = this + 35;
  AcquireSRWLockShared(this + 35);
  v38[2] = (__int64)v7;
  Ptr = (__int64 *)this[15].Ptr;
  if ( !Ptr )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC4,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)0x8007139FLL);
    if ( v7 )
      ReleaseSRWLockShared(v7);
    return 2147947423LL;
  }
  v41 = 0LL;
  v10 = *Ptr;
  v41 = 0LL;
  v11 = *(__int64 (**)(void))(v10 + 56);
  try
  {
    v12 = v11();
    v13 = v12;
    if ( v12 >= 0 )
    {
      v15 = 0LL;
      v42 = 0LL;
      v16 = 0LL;
      v17 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
      v40 = v17;
      if ( v17 )
      {
        v16 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>::Vector<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>((__int64)v17);
        v40 = 0LL;
      }
      Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v40);
      if ( v16 )
      {
        v15 = v16;
        v42 = v16;
      }
      else
      {
        v6 = -2147024882;
      }
      if ( v6 >= 0 )
      {
        details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>(
          (__int64)&v33,
          v41);
        details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
          (__int64)&v35,
          (__int64)&v33,
          0);
        details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
          (__int64)&v37,
          (__int64)&v33,
          v34);
        while ( 1 )
        {
          if ( v35 == v37 && v36[1] == (struct IVirtualDesktop *)v38[1] )
          {
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v38);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v36);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
            v18 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v15 + 64LL))(v15, a3);
            v19 = v18;
            if ( v18 >= 0 )
            {
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
              if ( v7 )
                ReleaseSRWLockShared(v7);
              return 0LL;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xE0,
                (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
                (const char *)(unsigned int)v18);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
              if ( v7 )
                ReleaseSRWLockShared(v7);
              return v19;
            }
          }
          v20 = v36[0];
          v31 = v36[0];
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v31);
          v30 = 0LL;
          v21 = *(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *))v20;
          v30 = 0LL;
          v22 = (*v21)(v20, &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30, &v30);
          v23 = v22;
          if ( v22 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xD2,
              (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
              (const char *)(unsigned int)v22);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v30);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v31);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v38);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v36);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
            if ( v7 )
              ReleaseSRWLockShared(v7);
            return v23;
          }
          v24 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v30 + 56LL))(v30, &v40);
          v25 = v24;
          if ( v24 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xD3,
              (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
              (const char *)(unsigned int)v24);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v30);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v31);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v38);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v36);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
            if ( v7 )
              ReleaseSRWLockShared(v7);
            return v25;
          }
          if ( (a2 != 1 || (_DWORD)v40) && (a2 || !(_DWORD)v40) )
          {
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v30);
            v32 = 0LL;
            WinRTDesktopForInternalDesktopInternal = VirtualDesktopDataSource::GetWinRTDesktopForInternalDesktopInternal(
                                                       (VirtualDesktopDataSource *)this,
                                                       v20,
                                                       &v32);
            v27 = WinRTDesktopForInternalDesktopInternal;
            if ( WinRTDesktopForInternalDesktopInternal < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xDC,
                (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
                (const char *)(unsigned int)WinRTDesktopForInternalDesktopInternal);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v32);
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v31);
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v38);
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v36);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
              if ( v7 )
                ReleaseSRWLockShared(v7);
              return v27;
            }
            v28 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *))(*(_QWORD *)v15 + 104LL))(
                    v15,
                    v32);
            v29 = v28;
            if ( v28 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xDD,
                (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
                (const char *)(unsigned int)v28);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v32);
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v31);
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v38);
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v36);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
              if ( v7 )
                ReleaseSRWLockShared(v7);
              return v29;
            }
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v32);
          }
          else
          {
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v30);
          }
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v31);
          ++v35;
          details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::GetCurrentObject(&v35);
        }
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCA,
        (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
        (const char *)(unsigned int)v6);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
      if ( v7 )
        ReleaseSRWLockShared(v7);
      result = (unsigned int)v6;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC7,
        (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
        (const char *)(unsigned int)v12);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
      if ( v7 )
        ReleaseSRWLockShared(v7);
      result = v13;
    }
  }
  catch ( ... )
  {
    LODWORD(v40) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xE3,
                     (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
                     v14);
    return (unsigned int)v40;
  }
  return result;
}
