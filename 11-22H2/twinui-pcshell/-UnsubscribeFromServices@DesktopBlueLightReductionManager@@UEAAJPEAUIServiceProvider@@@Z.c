/*
 * XREFs of ?UnsubscribeFromServices@DesktopBlueLightReductionManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801290B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800D4E4C (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DesktopBlueLightReductionManager::UnsubscribeFromServices(
        DesktopBlueLightReductionManager *this,
        struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  struct IServiceProviderVtbl *lpVtbl; // rax
  struct IServiceProviderVtbl *v6; // rax
  int v7; // eax
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 16) )
  {
    if ( *((_DWORD *)this + 38) )
    {
      v11 = 0LL;
      QueryService = a2->lpVtbl->QueryService;
      wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v11);
      if ( ((int (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
             a2,
             &IID_IImmersiveWindowMessageService,
             &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
             &v11) >= 0 )
      {
        if ( *((_DWORD *)this + 38) )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 32LL))(v11);
        *((_DWORD *)this + 38) = 0;
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
    }
    if ( *((_DWORD *)this + 39) )
    {
      lpVtbl = a2->lpVtbl;
      v11 = 0LL;
      if ( ((int (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
             a2,
             &SID_IImmersiveMonitorService,
             &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
             &v11) >= 0 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 32LL))(v11, *((unsigned int *)this + 39));
        *((_DWORD *)this + 39) = 0;
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
    }
    if ( *((_DWORD *)this + 40) )
    {
      v6 = a2->lpVtbl;
      v11 = 0LL;
      if ( ((int (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v6->QueryService)(
             a2,
             &IID_IImmersiveSessionIdleDetector,
             &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
             &v11) >= 0 )
      {
        if ( *((_DWORD *)this + 40) )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11);
        *((_DWORD *)this + 40) = 0;
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, struct IServiceProvider *, _QWORD))(**((_QWORD **)this + 16) + 48LL))(
           *((_QWORD *)this + 16),
           a2,
           0LL);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC8,
        (unsigned int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v7,
        v9);
  }
  return 0LL;
}
