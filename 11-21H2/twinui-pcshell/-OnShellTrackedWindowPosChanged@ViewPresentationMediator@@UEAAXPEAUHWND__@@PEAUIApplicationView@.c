/*
 * XREFs of ?OnShellTrackedWindowPosChanged@ViewPresentationMediator@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x18041B1C0
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
void __fastcall ViewPresentationMediator::OnShellTrackedWindowPosChanged(
        ViewPresentationMediator *this,
        HWND a2,
        struct IApplicationView *a3,
        unsigned int a4,
        unsigned int a5,
        struct tagRECT *a6)
{
  RTL_SRWLOCK *v9; // rbx
  struct tagRECT *v10; // rdi
  unsigned int v11; // esi
  __int64 *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // [rsp+40h] [rbp-39h] BYREF
  __int64 v15; // [rsp+48h] [rbp-31h] BYREF
  int v16; // [rsp+50h] [rbp-29h]
  struct tagRECT v17; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v18; // [rsp+70h] [rbp-9h] BYREF
  __int64 v19[2]; // [rsp+78h] [rbp-1h] BYREF
  int v20; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v21[2]; // [rsp+90h] [rbp+17h] BYREF
  struct IObjectArray *v22; // [rsp+D0h] [rbp+57h] BYREF

  v22 = 0LL;
  v9 = (RTL_SRWLOCK *)((char *)this + 88);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
  if ( (int)CGITRegistrationList::GetCallbackArray(v9, &v22) >= 0 )
  {
    details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>(
      (__int64)&v15,
      (__int64)v22);
    details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::Iterator(
      (__int64)&v18,
      (__int64)&v15,
      0);
    details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::Iterator(
      (__int64)&v20,
      (__int64)&v15,
      v16);
    v10 = a6;
    v11 = a5;
    while ( v18 != v20 || v19[1] != v21[1] )
    {
      v12 = (__int64 *)v19[0];
      v14 = v19[0];
      if ( v19[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19[0] + 8LL))(v19[0]);
      v13 = *v12;
      v17 = *v10;
      (*(void (__fastcall **)(__int64 *, HWND, struct IApplicationView *, _QWORD, unsigned int, struct tagRECT *))(v13 + 32))(
        v12,
        a2,
        a3,
        a4,
        v11,
        &v17);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v14);
      ++v18;
      details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::GetCurrentObject(&v18);
    }
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v21);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v19);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
}
