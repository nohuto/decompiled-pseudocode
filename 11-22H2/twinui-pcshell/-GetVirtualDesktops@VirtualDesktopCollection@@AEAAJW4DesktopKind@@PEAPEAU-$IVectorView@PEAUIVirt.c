/*
 * XREFs of ?GetVirtualDesktops@VirtualDesktopCollection@@AEAAJW4DesktopKind@@PEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18003AA0C
 * Callers:
 *     ?get_RemoteVirtualDesktops@VirtualDesktopCollection@@UEAAJPEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18003A650 (-get_RemoteVirtualDesktops@VirtualDesktopCollection@@UEAAJPEAPEAU-$IVectorView@PEAUIVirtualDeskt.c)
 *     ?get_VirtualDesktops@VirtualDesktopCollection@@UEAAJPEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18003A9F0 (-get_VirtualDesktops@VirtualDesktopCollection@@UEAAJPEAPEAU-$IVectorView@PEAUIVirtualDesktop@Mul.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18003B12C (-GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@P.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@1234@Upermission@01234@@Z @ 0x1800471E4 (--0-$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U-$DefaultEqualit.c)
 *     ??0?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180060DF8 (--0-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@d.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x18013B7F0 (--0Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18013B820 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801D07C0 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall VirtualDesktopCollection::GetVirtualDesktops(RTL_SRWLOCK *this, int a2, _QWORD *a3)
{
  RTL_SRWLOCK *v6; // rdi
  __int64 Ptr; // rbx
  const char *v8; // r9
  __int64 result; // rax
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdi
  int v14; // esi
  __int64 v15; // rbx
  void *v16; // rax
  int v17; // eax
  unsigned int v18; // ebx
  struct IVirtualDesktop *v19; // rbx
  __int64 (__fastcall **v20)(struct IVirtualDesktop *, GUID *, struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop **); // rax
  int v21; // eax
  unsigned int v22; // esi
  int v23; // eax
  unsigned int v24; // esi
  int WinRTDesktopForInternalDesktopInternal; // eax
  unsigned int v26; // ebx
  int v27; // eax
  unsigned int v28; // ebx
  int v29[2]; // [rsp+20h] [rbp-88h] BYREF
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *v30; // [rsp+28h] [rbp-80h] BYREF
  struct IVirtualDesktop *v31; // [rsp+30h] [rbp-78h] BYREF
  __int64 v32; // [rsp+38h] [rbp-70h] BYREF
  unsigned int v33; // [rsp+40h] [rbp-68h]
  int v34; // [rsp+48h] [rbp-60h] BYREF
  struct IVirtualDesktop *v35[2]; // [rsp+50h] [rbp-58h] BYREF
  int v36; // [rsp+60h] [rbp-48h] BYREF
  _BYTE v37[8]; // [rsp+68h] [rbp-40h] BYREF
  struct IVirtualDesktop *v38; // [rsp+70h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  void *v40; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v41; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v42; // [rsp+C8h] [rbp+20h] BYREF

  *a3 = 0LL;
  v6 = this + 41;
  AcquireSRWLockShared(this + 41);
  try
  {
    Ptr = (__int64)this[14].Ptr;
    v42 = Ptr;
    if ( Ptr )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)Ptr + 8LL))(Ptr);
    if ( v6 )
      ReleaseSRWLockShared(v6);
    if ( Ptr )
    {
      v41 = 0LL;
      v10 = *(_QWORD *)Ptr;
      v41 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v10 + 56))(Ptr, &v41);
      v12 = v11;
      if ( v11 >= 0 )
      {
        v13 = 0LL;
        *(_QWORD *)v29 = 0LL;
        v14 = 0;
        v15 = 0LL;
        v16 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
        v40 = v16;
        if ( v16 )
        {
          v15 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>::Vector<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>(v16);
          v40 = 0LL;
        }
        Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v40);
        if ( v15 )
        {
          v13 = v15;
          *(_QWORD *)v29 = v15;
        }
        else
        {
          v14 = -2147024882;
        }
        if ( v14 >= 0 )
        {
          details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>(
            &v32,
            v41);
          details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
            &v34,
            &v32,
            0LL);
          details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
            &v36,
            &v32,
            v33);
          while ( v34 != v36 || v35[1] != v38 )
          {
            v19 = v35[0];
            v31 = v35[0];
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v31);
            v30 = 0LL;
            v20 = *(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop **))v19;
            v30 = 0LL;
            v21 = (*v20)(v19, &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30, &v30);
            v22 = v21;
            if ( v21 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xBE,
                (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcollection.cpp",
                (const char *)(unsigned int)v21,
                v29[0]);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v30);
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v31);
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v37);
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v35);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v29);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
              return v22;
            }
            v23 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, void **))(*(_QWORD *)v30 + 56LL))(
                    v30,
                    &v40);
            v24 = v23;
            if ( v23 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xBF,
                (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcollection.cpp",
                (const char *)(unsigned int)v23,
                v29[0]);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v30);
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v31);
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v37);
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v35);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v29);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
              return v24;
            }
            if ( (a2 != 1 || (_DWORD)v40) && (a2 || !(_DWORD)v40) )
            {
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v30);
              v30 = 0LL;
              WinRTDesktopForInternalDesktopInternal = VirtualDesktopCollection::GetWinRTDesktopForInternalDesktopInternal(
                                                         (VirtualDesktopCollection *)this,
                                                         v19,
                                                         &v30);
              v26 = WinRTDesktopForInternalDesktopInternal;
              if ( WinRTDesktopForInternalDesktopInternal < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0xC8,
                  (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcollection.cpp",
                  (const char *)(unsigned int)WinRTDesktopForInternalDesktopInternal,
                  v29[0]);
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v30);
                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v31);
                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v37);
                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v35);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v29);
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
                return v26;
              }
              v27 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *))(*(_QWORD *)v13 + 104LL))(
                      v13,
                      v30);
              v28 = v27;
              if ( v27 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0xC9,
                  (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcollection.cpp",
                  (const char *)(unsigned int)v27,
                  v29[0]);
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v30);
                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v31);
                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v37);
                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v35);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v29);
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
                return v28;
              }
            }
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v30);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v31);
            ++v34;
            details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::GetCurrentObject(&v34);
          }
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v37);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v35);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
          v17 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v13 + 64LL))(v13, a3);
          v18 = v17;
          if ( v17 >= 0 )
          {
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v29);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
            result = 0LL;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xCC,
              (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcollection.cpp",
              (const char *)(unsigned int)v17,
              v29[0]);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v29);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
            result = v18;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xB6,
            (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcollection.cpp",
            (const char *)(unsigned int)v14,
            v29[0]);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v29);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
          result = (unsigned int)v14;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB3,
          (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcollection.cpp",
          (const char *)(unsigned int)v11,
          v29[0]);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
        result = v12;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB0,
        (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcollection.cpp",
        (const char *)0x8007139FLL,
        v29[0]);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
      result = 2147947423LL;
    }
  }
  catch ( ... )
  {
    LODWORD(v40) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xCF,
                     (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcollection.cpp",
                     v8);
    return (unsigned int)v40;
  }
  return result;
}
