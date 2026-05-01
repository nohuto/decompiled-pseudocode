/*
 * XREFs of ?SubscribeToServices@CFullScreenManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801AC0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18009FF88 (-IsPPIEdition@@YA_NXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B7F64 (-InternalRelease@-$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CFullScreenManager::SubscribeToServices(void **this, struct IServiceProvider *a2)
{
  void **v4; // rsi
  struct IServiceProviderVtbl *v5; // rax
  HRESULT (__stdcall *v6)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 *v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  struct IServiceProviderVtbl *lpVtbl; // rax
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 *v13; // rbx
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, _QWORD, GUID *, GUID *, __int64 *); // rsi
  __int64 *v17; // rdi
  HRESULT Service; // eax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // [rsp+30h] [rbp-10h] BYREF
  __int64 v22; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  IUnknown *punk; // [rsp+80h] [rbp+40h] BYREF
  __int64 v25; // [rsp+88h] [rbp+48h] BYREF

  if ( !IsPPIEdition() )
  {
    v4 = this - 3;
    goto LABEL_3;
  }
  lpVtbl = a2->lpVtbl;
  v25 = 0LL;
  QueryService = lpVtbl->QueryService;
  v13 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v25, &v22);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v13);
  v14 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))QueryService)(
          a2,
          &SID_IImmersiveMonitorService,
          &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
          v13);
  v9 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65,
      (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v14);
LABEL_17:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
    return v9;
  }
  v15 = v25;
  punk = 0LL;
  v16 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, __int64 *))(*(_QWORD *)v25 + 72LL);
  v17 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&punk, &v22);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v17);
  Service = v16(v15, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, v17);
  v9 = Service;
  if ( Service < 0 )
  {
    v19 = 103LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)Service);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punk);
    goto LABEL_17;
  }
  Microsoft::WRL::ComPtr<IFullScreenPositioner>::InternalRelease(this + 23);
  Service = IUnknown_QueryService(
              punk,
              &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
              &GUID_b6b9bca5_a1ad_4216_ab1f_4de46296eac8,
              this + 23);
  v9 = Service;
  if ( Service < 0 )
  {
    v19 = 105LL;
    goto LABEL_16;
  }
  v4 = this - 3;
  Service = (*(__int64 (__fastcall **)(void *, unsigned __int64, char *))(*(_QWORD *)this[23] + 24LL))(
              this[23],
              (unsigned __int64)(this + 11) & -(__int64)(this != (void **)24),
              (char *)this + 172);
  v9 = Service;
  if ( Service < 0 )
  {
    v19 = 106LL;
    goto LABEL_16;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punk);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
LABEL_3:
  v5 = a2->lpVtbl;
  v21 = 0LL;
  v6 = v5->QueryService;
  v7 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v21, &punk);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v7);
  v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v6)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
         v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    v20 = 110LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_6;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v21 + 24LL))(
         v21,
         (unsigned __int64)(this + 12) & -(__int64)(v4 != 0LL),
         (char *)this + 176);
  v9 = v8;
  if ( v8 < 0 )
  {
    v20 = 111LL;
    goto LABEL_21;
  }
  v9 = 0;
LABEL_6:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
  return v9;
}
