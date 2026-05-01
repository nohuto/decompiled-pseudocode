/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopNotificationsDerived@@V1@AEAKAEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopNotificationsDerived@@AEAKAEAPEAUIVirtualDesktopLock@@@Z @ 0x1800FE25C
 * Callers:
 *     ?CVirtualDesktopNotifications_CreateInstance@@YAJKPEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1801B346C (-CVirtualDesktopNotifications_CreateInstance@@YAJKPEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FE3B8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$VirtualDesktopNotificationForwarder.c)
 *     ??4?$ComPtr@UIVirtualDesktopLock@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopLock@@@Z @ 0x18013BF58 (--4-$ComPtr@UIVirtualDesktopLock@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopLock@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopNotificationsDerived,CVirtualDesktopNotificationsDerived,unsigned long &,IVirtualDesktopLock * &>(
        __int64 *a1,
        _DWORD *a2,
        __int64 *a3)
{
  unsigned int v6; // ebx
  void *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  *a1 = 0LL;
  v7 = operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = (__int64)v7;
  if ( v7 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>>(v7);
    *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>>::`vftable';
    *(_QWORD *)(v8 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>>::`vftable'{for `IVirtualDesktopNotification'};
    *(_QWORD *)(v8 + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v11 = v8;
    v9 = *a3;
    *(_DWORD *)(v8 + 104) = *a2;
    Microsoft::WRL::ComPtr<IVirtualDesktopLock>::operator=(v8 + 56, v9);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    *a1 = v8;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v6;
}
