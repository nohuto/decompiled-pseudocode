/*
 * XREFs of ?CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x18013B5B0
 * Callers:
 *     ?RuntimeClassInitialize@VirtualDesktop@@QEAAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1801394CC (-RuntimeClassInitialize@VirtualDesktop@@QEAAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PE.c)
 *     ?UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x1805457FC (-UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180060DF8 (--0-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@d.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800E15F0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ??1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800E1A74 (--1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x18013B7F0 (--0Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18013B820 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop.c)
 *     ??1?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@std@@QEAA@XZ @ 0x18013B8B0 (--1-$tuple@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@std@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBC0 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAPEAPEAUIObjectArray@@XZ @ 0x18039EE20 (-ReleaseAndGetAddressOf@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAPEAPEAUIObjectArray@@XZ.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall VirtualDesktop::CalculateDesktopIndex(VirtualDesktop *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64); // rbx
  __int64 AddressOf; // rax
  int v5; // eax
  unsigned int v6; // edi
  char v7; // r14
  __int64 v8; // rsi
  struct IUnknown *v9; // rbx
  struct IUnknownVtbl *lpVtbl; // rax
  int v11; // eax
  __int64 v12; // rdx
  RTL_SRWLOCK *v14; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+28h] [rbp-50h] BYREF
  unsigned int v16; // [rsp+30h] [rbp-48h]
  int v17; // [rsp+38h] [rbp-40h] BYREF
  struct IUnknown *v18; // [rsp+40h] [rbp-38h]
  __int64 v19; // [rsp+48h] [rbp-30h]
  _DWORD v20[4]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v21; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]
  int v23; // [rsp+B0h] [rbp+38h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+40h] BYREF
  struct IUnknown *v25; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v26; // [rsp+C8h] [rbp+50h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v14, (RTL_SRWLOCK *)this + 35);
  v26 = 0LL;
  v2 = *((_QWORD *)this + 15);
  v3 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 56LL);
  AddressOf = Microsoft::WRL::ComPtr<IObjectArray>::ReleaseAndGetAddressOf(&v26);
  v5 = v3(v2, AddressOf);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x138,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_19;
  }
  v7 = 0;
  v8 = 0LL;
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>(
    (__int64)&v15,
    v26);
  details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
    &v17,
    &v15,
    0LL);
  details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
    v20,
    &v15,
    v16);
  while ( 1 )
  {
    if ( v17 == v20[0] && v19 == v21 )
      goto LABEL_13;
    v9 = v18;
    v25 = v18;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v25);
    v23 = 0;
    v24 = 0LL;
    lpVtbl = v9->lpVtbl;
    v24 = 0LL;
    v11 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
            v9,
            &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30,
            &v24);
    v6 = v11;
    if ( v11 < 0 )
    {
      v12 = 320LL;
      goto LABEL_18;
    }
    v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 56LL))(v24, &v23);
    v6 = v11;
    if ( v11 < 0 )
    {
      v12 = 321LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
        (const char *)(unsigned int)v11);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v25);
      std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>::~tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>(v20);
      std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>::~tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>(&v17);
      Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v15);
      goto LABEL_19;
    }
    if ( v23 )
      goto LABEL_11;
    if ( (unsigned int)SHIsSameObject(v9, *((struct IUnknown **)this + 14)) )
      break;
    ++v8;
LABEL_11:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
    Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v25);
    ++v17;
    details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::GetCurrentObject(&v17);
  }
  v7 = 1;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v25);
LABEL_13:
  std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>::~tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>(v20);
  std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>::~tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>(&v17);
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v15);
  if ( v7 )
  {
    *((_QWORD *)this + 18) = v8;
    v6 = 0;
  }
  else
  {
    v6 = -2147319765;
  }
LABEL_19:
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v26);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v14);
  return v6;
}
