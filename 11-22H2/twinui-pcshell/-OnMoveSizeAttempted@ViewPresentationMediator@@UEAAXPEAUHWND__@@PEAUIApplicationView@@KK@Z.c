/*
 * XREFs of ?OnMoveSizeAttempted@ViewPresentationMediator@@UEAAXPEAUHWND__@@PEAUIApplicationView@@KK@Z @ 0x1804F3C40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180055F54 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1802D0808 (--0-$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V-$ComPtr@UIApplicationViewChangeLi.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1802D990E (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V-$Com.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1804F370C (--0Iterator@-$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V-$ComPtr@UIWindowMan.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall ViewPresentationMediator::OnMoveSizeAttempted(
        ViewPresentationMediator *this,
        HWND a2,
        struct IApplicationView *a3,
        unsigned int a4,
        unsigned int a5)
{
  RTL_SRWLOCK *v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // rbx
  __int64 v11; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+38h] [rbp-48h] BYREF
  int v13; // [rsp+40h] [rbp-40h]
  unsigned int v14; // [rsp+48h] [rbp-38h] BYREF
  __int64 v15[2]; // [rsp+50h] [rbp-30h] BYREF
  int v16; // [rsp+60h] [rbp-20h] BYREF
  __int64 v17[3]; // [rsp+68h] [rbp-18h] BYREF
  struct IObjectArray *v18; // [rsp+A0h] [rbp+20h] BYREF

  v18 = 0LL;
  v8 = (RTL_SRWLOCK *)((char *)this + 88);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
  if ( (int)CGITRegistrationList::GetCallbackArray(v8, &v18) >= 0 )
  {
    details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>(
      (__int64)&v12,
      (__int64)v18);
    details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::Iterator(
      (__int64)&v14,
      (__int64)&v12,
      0);
    details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::Iterator(
      (__int64)&v16,
      (__int64)&v12,
      v13);
    v9 = a5;
    while ( v14 != v16 || v15[1] != v17[1] )
    {
      v10 = v15[0];
      v11 = v15[0];
      if ( v15[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15[0] + 8LL))(v15[0]);
      (*(void (__fastcall **)(__int64, HWND, struct IApplicationView *, _QWORD, unsigned int))(*(_QWORD *)v10 + 40LL))(
        v10,
        a2,
        a3,
        a4,
        v9);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
      ++v14;
      details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::GetCurrentObject(&v14);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v17);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v15);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
}
