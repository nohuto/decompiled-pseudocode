/*
 * XREFs of ?OnMoveSizeAttempted@ViewPresentationMediator@@UEAAXPEAUHWND__@@PEAUIApplicationView@@KK@Z @ 0x18041B030
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180017C30 (--0-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@d.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180123AA4 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V-$Com.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180123BAC (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x18041AAFC (--0Iterator@-$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V-$ComPtr@UIWindowMan.c)
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
    details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>(
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
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v11);
      ++v14;
      details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::GetCurrentObject(&v14);
    }
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v17);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v15);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
}
