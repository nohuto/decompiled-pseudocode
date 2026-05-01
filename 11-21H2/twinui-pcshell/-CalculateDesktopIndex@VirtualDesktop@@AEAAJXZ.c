/*
 * XREFs of ?CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x18010EAB8
 * Callers:
 *     ?RuntimeClassInitialize@VirtualDesktop@@QEAAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x18010E7AC (-RuntimeClassInitialize@VirtualDesktop@@QEAAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PE.c)
 *     ?UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x18048FFDC (-UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 * Callees:
 *     ??0?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180017C30 (--0-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@d.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18009FDA8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x18010EC70 (--0Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18010ECA0 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall VirtualDesktop::CalculateDesktopIndex(VirtualDesktop *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, _QWORD, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  char v6; // si
  __int64 v7; // rdi
  struct IUnknown *v8; // rbx
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v11; // [rsp+28h] [rbp-38h]
  int v12; // [rsp+30h] [rbp-30h] BYREF
  struct IUnknown *v13[2]; // [rsp+38h] [rbp-28h] BYREF
  int v14; // [rsp+48h] [rbp-18h] BYREF
  __int64 v15[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v17; // [rsp+90h] [rbp+30h] BYREF
  struct IUnknown *v18; // [rsp+98h] [rbp+38h] BYREF
  RTL_SRWLOCK *v19; // [rsp+A0h] [rbp+40h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v19, (RTL_SRWLOCK *)this + 34);
  v17 = 0LL;
  v2 = *((_QWORD *)this + 14);
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v2 + 56LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  v4 = v3(v2, 0LL, &v17);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15E,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v4);
  }
  else
  {
    v6 = 0;
    v7 = 0LL;
    details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>(
      (__int64)&v10,
      v17);
    details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
      &v12,
      &v10,
      0LL);
    details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
      &v14,
      &v10,
      v11);
    while ( v12 != v14 || v13[1] != (struct IUnknown *)v15[1] )
    {
      v8 = v13[0];
      v18 = v13[0];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
      if ( (unsigned int)SHIsSameObject(v8, *((struct IUnknown **)this + 13)) )
      {
        v6 = 1;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v18);
        break;
      }
      ++v7;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v18);
      ++v12;
      details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::GetCurrentObject(&v12);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v15);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v13);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    if ( v6 )
    {
      *((_QWORD *)this + 17) = v7;
      v5 = 0;
    }
    else
    {
      v5 = -2147319765;
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v19);
  return v5;
}
