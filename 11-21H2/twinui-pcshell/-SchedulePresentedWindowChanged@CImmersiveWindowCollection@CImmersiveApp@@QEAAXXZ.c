/*
 * XREFs of ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180070510
 * Callers:
 *     ?OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z @ 0x180020F60 (-OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z.c)
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180021A40 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180070364 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0325_0001@@W4GHOST_STATUS@@@Z @ 0x180190A58 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x180307960 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 *     ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x180309338 (-_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56__&___lambda_0ed677524a6dc3cf61a74a5bf9087e56__&_ @ 0x180070620 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56_.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180127040 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  __int64 v2; // rbx
  __int64 *CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56______lambda_0ed677524a6dc3cf61a74a5bf9087e56; // rax
  __int64 v4; // rdi
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h]

  v2 = *((_QWORD *)this + 20);
  v8 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v5[0] = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v5[1] = this;
  CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56______lambda_0ed677524a6dc3cf61a74a5bf9087e56 = (__int64 *)Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56______lambda_0ed677524a6dc3cf61a74a5bf9087e56____(&v6, v5);
  v4 = *CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56______lambda_0ed677524a6dc3cf61a74a5bf9087e56;
  v7 = *CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56______lambda_0ed677524a6dc3cf61a74a5bf9087e56;
  *CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56______lambda_0ed677524a6dc3cf61a74a5bf9087e56 = 0LL;
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
