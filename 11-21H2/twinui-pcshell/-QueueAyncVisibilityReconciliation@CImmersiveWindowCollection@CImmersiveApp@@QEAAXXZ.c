/*
 * XREFs of ?QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18014A6C8
 * Callers:
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x1800732F8 (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?EnsureCanSendVisibilityState@CImmersiveWindowCollection@CImmersiveApp@@QEAA_NW4ViewVisibilityState@@@Z @ 0x1800734F8 (-EnsureCanSendVisibilityState@CImmersiveWindowCollection@CImmersiveApp@@QEAA_NW4ViewVisibilitySt.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__&_::CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__&_ @ 0x18014A7B8 (CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__-_--CAsyncCallbackWithLambda_.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CImmersiveApp::CImmersiveWindowCollection::QueueAyncVisibilityReconciliation(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  __int64 v2; // rbx
  void *v3; // rax
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  void *v6; // [rsp+48h] [rbp+10h] BYREF

  v5 = *((_QWORD *)this + 20);
  v2 = v5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v5);
  v4[0] = v2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v4);
  v4[1] = (__int64)this;
  v3 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
    v3 = (void *)CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625____::CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625____(
                   v3,
                   v4);
  v6 = v3;
  if ( v3 )
    (*(void (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 19) + 232LL))(*((_QWORD *)this + 19), v3);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
