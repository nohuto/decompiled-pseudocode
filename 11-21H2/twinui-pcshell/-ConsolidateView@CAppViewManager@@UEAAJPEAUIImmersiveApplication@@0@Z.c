/*
 * XREFs of ?ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z @ 0x1802F4BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_TransferAllWindowsToNextGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplication@@0W4ApplicationDisappearReason@@@Z @ 0x180030348 (-_TransferAllWindowsToNextGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplication@@0W4ApplicationDi.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x180058438 (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007206C (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_18007206C.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180126700 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9___1_long_ @ 0x1802F3684 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802F3684.c)
 *     _lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9_::__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9_ @ 0x1802F3904 (_lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9_--__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9_.c)
 *     ??1ConsolidateView@CAppViewManagerTelemetry@@QEAA@XZ @ 0x1802F3BC0 (--1ConsolidateView@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ConsolidateView@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1802F8004 (-StartActivity@ConsolidateView@CAppViewManagerTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAppViewManager::ConsolidateView(
        CAppViewManager *this,
        struct IImmersiveApplication *a2,
        struct IImmersiveApplication *a3)
{
  CIAMGlobals *v6; // rcx
  unsigned int Glom; // ebx
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  RTL_SRWLOCK *v10; // rdi
  struct IImmersiveApplication *v12; // [rsp+20h] [rbp-E0h] BYREF
  struct IImmersiveApplication *v13; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  struct IImmersiveApplication *v16; // [rsp+40h] [rbp-C0h] BYREF
  struct IImmersiveApplication *v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v19[40]; // [rsp+60h] [rbp-A0h] BYREF

  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v19,
    (__int64)"ConsolidateView");
  v19[0] = &CAppViewManagerTelemetry::ConsolidateView::`vftable';
  CAppViewManagerTelemetry::ConsolidateView::StartActivity((CAppViewManagerTelemetry::ConsolidateView *)v19);
  v14 = (__int64)this - 40;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
  v13 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
  v12 = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
  v15 = (__int64)this - 40;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
  v16 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
  v17 = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
  if ( CIAMGlobals::IsCalledOnIAMThread(v6) )
  {
    Glom = CAppViewManager::_TransferAllWindowsToNextGlom(
             (__int64)this - 40,
             (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2,
             (__int64)a3,
             0xFFFFFFFE);
  }
  else
  {
    v8 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v8 )
      v9 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9___1_long_(
             v8,
             &v15);
    else
      v9 = 0LL;
    v18[0] = (__int64)v9;
    v10 = CApplicationManagerUtility::g_pIAMGlobals;
    v18[1] = (__int64)CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    Glom = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))(**((_QWORD **)this + 10) + 72LL))(
             *((_QWORD *)this + 10),
             v9,
             1LL);
    if ( v10 )
      ReleaseSRWLockExclusive(v10);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v18);
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v19, Glom);
  lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9_::__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9_(&v15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  CAppViewManagerTelemetry::ConsolidateView::~ConsolidateView((CAppViewManagerTelemetry::ConsolidateView *)v19);
  return Glom;
}
