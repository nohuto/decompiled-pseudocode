/*
 * XREFs of ?DelayInitialize@CVirtualDesktopManager@@UEAAXPEAUISwitchThumbnailDeviceManager@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIImmersiveSettingsCache@@PEAUIMultitaskingViewServiceProvider@@@Z @ 0x180139B50
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x1800DB690 (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ??4?$ComPtr@UISwitchThumbnailDeviceManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailDeviceManager@@@Z @ 0x180139DB0 (--4-$ComPtr@UISwitchThumbnailDeviceManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailDevi.c)
 *     ??4?$ComPtr@UIImmersiveSettingsCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveSettingsCache@@@Z @ 0x18013A2E4 (--4-$ComPtr@UIImmersiveSettingsCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveSettingsCache@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CVirtualDesktopManager::DelayInitialize(
        CVirtualDesktopManager *this,
        struct ISwitchThumbnailDeviceManager *a2,
        struct IVirtualDesktopSwitchAnimator *a3,
        struct IImmersiveSettingsCache *a4,
        struct IMultitaskingViewServiceProvider *a5)
{
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  __int128 v14; // [rsp+20h] [rbp-18h] BYREF

  Microsoft::WRL::ComPtr<ISwitchThumbnailDeviceManager>::operator=((char *)this + 240, a2);
  v8 = *((_QWORD *)this + 28);
  *((_QWORD *)this + 28) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IVirtualDesktopSwitchAnimator *))(*(_QWORD *)a3 + 8LL))(a3);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  Microsoft::WRL::ComPtr<IImmersiveSettingsCache>::operator=((char *)this + 232, a4);
  v9 = *((_QWORD *)this + 33);
  *((_QWORD *)this + 33) = a5;
  if ( a5 )
    (*(void (__fastcall **)(struct IMultitaskingViewServiceProvider *))(*(_QWORD *)a5 + 8LL))(a5);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v14 = 0LL;
  winrt::impl::resume_apartment_context::resume_apartment_context((winrt::impl::resume_apartment_context *)&v14);
  v10 = (__int64 *)((char *)this + 248);
  if ( v10 == (__int64 *)&v14 )
  {
    v12 = v14;
  }
  else
  {
    if ( *v10 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v10);
    v11 = v14;
    v12 = 0LL;
    *(_QWORD *)&v14 = 0LL;
    *v10 = v11;
  }
  v13 = DWORD2(v14);
  DWORD2(v14) = -1;
  *((_DWORD *)v10 + 2) = v13;
  if ( v12 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)&v14);
}
