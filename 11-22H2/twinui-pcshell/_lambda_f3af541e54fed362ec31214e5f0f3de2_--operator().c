/*
 * XREFs of _lambda_f3af541e54fed362ec31214e5f0f3de2_::operator() @ 0x180688FBC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f3af541e54fed362ec31214e5f0f3de2___::Run @ 0x180689A10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f3af541e54fed362ec31214e5f0f3de2___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1802D0808 (--0-$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V-$ComPtr@UIApplicationViewChangeLi.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1803CC9A0 (--0Iterator@-$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V-$ComPtr@UIApplicationVie.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1803CCBFC (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V-$ComPtr@U.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_f3af541e54fed362ec31214e5f0f3de2_::operator()(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+30h] [rbp-40h] BYREF
  int v5; // [rsp+38h] [rbp-38h]
  unsigned int v6; // [rsp+40h] [rbp-30h] BYREF
  __int64 v7[2]; // [rsp+48h] [rbp-28h] BYREF
  int v8; // [rsp+58h] [rbp-18h] BYREF
  __int64 v9[2]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v10; // [rsp+80h] [rbp+10h] BYREF

  details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>(
    (__int64)&v4,
    *(_QWORD *)(a1 + 24));
  details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::Iterator(
    (__int64)&v6,
    (__int64)&v4,
    0);
  details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::Iterator(
    (__int64)&v8,
    (__int64)&v4,
    v5);
  while ( v6 != v8 || v7[1] != v9[1] )
  {
    v2 = v7[0];
    v10 = v7[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v2 + 24LL))(
      v2,
      *(_QWORD *)a1,
      *(unsigned int *)(a1 + 8),
      *(_QWORD *)(a1 + 16));
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
    ++v6;
    details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::GetCurrentObject(&v6);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v9);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v7);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v4);
}
