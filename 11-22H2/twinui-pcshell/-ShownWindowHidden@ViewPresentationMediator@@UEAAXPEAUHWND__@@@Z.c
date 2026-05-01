/*
 * XREFs of ?ShownWindowHidden@ViewPresentationMediator@@UEAAXPEAUHWND__@@@Z @ 0x1802D99C0
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

// Hidden C++ exception states: #wind=1
void __fastcall ViewPresentationMediator::ShownWindowHidden(ViewPresentationMediator *this, HWND a2)
{
  RTL_SRWLOCK *v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v6; // [rsp+28h] [rbp-38h]
  unsigned int v7; // [rsp+30h] [rbp-30h] BYREF
  __int64 v8[2]; // [rsp+38h] [rbp-28h] BYREF
  int v9; // [rsp+48h] [rbp-18h] BYREF
  __int64 v10[2]; // [rsp+50h] [rbp-10h] BYREF
  struct IObjectArray *v11; // [rsp+70h] [rbp+10h] BYREF
  __int64 v12; // [rsp+80h] [rbp+20h] BYREF

  v11 = 0LL;
  v3 = (RTL_SRWLOCK *)((char *)this + 88);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  if ( (int)CGITRegistrationList::GetCallbackArray(v3, &v11) >= 0 )
  {
    details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>(
      (__int64)&v5,
      (__int64)v11);
    details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::Iterator(
      &v7,
      &v5,
      0LL);
    details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::Iterator(
      &v9,
      &v5,
      v6);
    while ( v7 != v9 || v8[1] != v10[1] )
    {
      v4 = v8[0];
      v12 = v8[0];
      if ( v8[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8[0] + 8LL))(v8[0]);
      (*(void (__fastcall **)(__int64, HWND))(*(_QWORD *)v4 + 48LL))(v4, a2);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
      ++v7;
      details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::GetCurrentObject(&v7);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v10);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v8);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
}
