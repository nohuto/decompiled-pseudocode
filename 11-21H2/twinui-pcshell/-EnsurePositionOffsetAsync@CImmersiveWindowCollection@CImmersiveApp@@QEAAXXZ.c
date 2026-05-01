/*
 * XREFs of ?EnsurePositionOffsetAsync@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180070700
 * Callers:
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180070364 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x1800732F8 (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_54ac9d587a7c1793639a2e20f13dcbfb__&___lambda_54ac9d587a7c1793639a2e20f13dcbfb__&_ @ 0x180070820 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_54ac9d587a7c1793639a2e20f13dcbfb_.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180127040 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CImmersiveApp::CImmersiveWindowCollection::EnsurePositionOffsetAsync(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  __int64 v2; // rbx
  __int64 *CAsyncCallbackWithLambda__lambda_54ac9d587a7c1793639a2e20f13dcbfb______lambda_54ac9d587a7c1793639a2e20f13dcbfb; // rax
  __int64 v4; // rdi
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h]

  if ( *((_QWORD *)this + 22) )
  {
    v2 = *((_QWORD *)this + 20);
    v8 = v2;
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v5[0] = v2;
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v5[1] = this;
    CAsyncCallbackWithLambda__lambda_54ac9d587a7c1793639a2e20f13dcbfb______lambda_54ac9d587a7c1793639a2e20f13dcbfb = (__int64 *)Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_54ac9d587a7c1793639a2e20f13dcbfb______lambda_54ac9d587a7c1793639a2e20f13dcbfb____(&v6, v5);
    v4 = *CAsyncCallbackWithLambda__lambda_54ac9d587a7c1793639a2e20f13dcbfb______lambda_54ac9d587a7c1793639a2e20f13dcbfb;
    v7 = *CAsyncCallbackWithLambda__lambda_54ac9d587a7c1793639a2e20f13dcbfb______lambda_54ac9d587a7c1793639a2e20f13dcbfb;
    *CAsyncCallbackWithLambda__lambda_54ac9d587a7c1793639a2e20f13dcbfb______lambda_54ac9d587a7c1793639a2e20f13dcbfb = 0LL;
    if ( v6 )
    {
      v6 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release();
    }
    if ( v4 )
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 19) + 232LL))(*((_QWORD *)this + 19), v4);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
    if ( v5[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5[0] + 16LL))(v5[0]);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
