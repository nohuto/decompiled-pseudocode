/*
 * XREFs of _lambda_baaea9c5454d5217874bd274f7881db0_::_lambda_baaea9c5454d5217874bd274f7881db0_ @ 0x18042D064
 * Callers:
 *     Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_baaea9c5454d5217874bd274f7881db0_____lambda_baaea9c5454d5217874bd274f7881db0___ @ 0x18042B750 (Microsoft--WRL--Details--Make_XamlExplorerHostWindowCreatedCallback__lambda_baaea9c5454d5217874b.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18042D2D4 (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPr_ea_18042D2D4.c)
 */

__int64 __fastcall lambda_baaea9c5454d5217874bd274f7881db0_::_lambda_baaea9c5454d5217874bd274f7881db0_(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rcx

  *(_QWORD *)a1 = 0LL;
  if ( a1 != a2 )
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v4 = (_QWORD *)(a1 + 8);
  v5 = (_QWORD *)(a2 + 8);
  *v4 = 0LL;
  if ( v4 != v5 )
  {
    *v4 = *v5;
    *v5 = 0LL;
  }
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = __abi_winrt_ptr_ctor(*(_QWORD *)(a2 + 24));
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 64) = __abi_winrt_ptr_ctor(*(_QWORD *)(a2 + 64));
  *(_QWORD *)(a1 + 72) = __abi_winrt_ptr_ctor(*(_QWORD *)(a2 + 72));
  v6 = (_QWORD *)(a2 + 80);
  *(_QWORD *)(a1 + 80) = 0LL;
  if ( a1 + 80 != a2 + 80 )
  {
    *(_QWORD *)(a1 + 80) = *v6;
    *v6 = 0LL;
  }
  *(_QWORD *)(a1 + 88) = __abi_winrt_ptr_ctor(*(_QWORD *)(a2 + 88));
  *(_QWORD *)(a1 + 96) = __abi_winrt_ptr_ctor(*(_QWORD *)(a2 + 96));
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 104));
  *(_QWORD *)(a1 + 104) = &XamlSwitcherTelemetry::WindowCreatedCallback::`vftable';
  return a1;
}
