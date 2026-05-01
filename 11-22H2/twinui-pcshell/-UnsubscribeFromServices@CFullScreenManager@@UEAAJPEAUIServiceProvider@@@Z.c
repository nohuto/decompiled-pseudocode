/*
 * XREFs of ?UnsubscribeFromServices@CFullScreenManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801ABFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B7F64 (-InternalRelease@-$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CFullScreenManager::UnsubscribeFromServices(CFullScreenManager *this, struct IServiceProvider *a2)
{
  _QWORD *v3; // rbx
  struct IServiceProviderVtbl *lpVtbl; // rax
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 *v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v3 = (_QWORD *)((char *)this + 184);
  if ( *((_DWORD *)this + 43) )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 32LL))(*v3);
    *((_DWORD *)this + 43) = 0;
  }
  Microsoft::WRL::ComPtr<IFullScreenPositioner>::InternalRelease(v3);
  if ( !*((_DWORD *)this + 44) )
    return 0LL;
  lpVtbl = a2->lpVtbl;
  v12 = 0LL;
  QueryService = lpVtbl->QueryService;
  v7 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v12, &v13);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v7);
  v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))QueryService)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
         v7);
  v9 = v8;
  if ( v8 >= 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 32LL))(v12, *((unsigned int *)this + 44));
    *((_DWORD *)this + 44) = 0;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x82,
    (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
    (const char *)(unsigned int)v8);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
  return v9;
}
