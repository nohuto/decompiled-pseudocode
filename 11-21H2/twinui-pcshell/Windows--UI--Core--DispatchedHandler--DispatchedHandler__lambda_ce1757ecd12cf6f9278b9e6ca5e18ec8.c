/*
 * XREFs of Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8___ @ 0x180428754
 * Callers:
 *     ?ChangeVisibility@XamlExplorerHostWindow@@AEAAX_N@Z @ 0x180428F20 (-ChangeVisibility@XamlExplorerHostWindow@@AEAAX_N@Z.c)
 * Callees:
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1800132F4 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8_::_lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8_ @ 0x1804288B8 (_lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8_--_lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8_.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8___(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  _BYTE v7[56]; // [rsp+20h] [rbp-38h] BYREF

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &Windows::UI::Core::DispatchedHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &Windows::UI::Core::DispatchedHandler::`vftable'{for `Platform::Object'};
  a1[2] = &Windows::UI::Core::DispatchedHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  v4 = a1 + 5;
  a1[37] = a1 + 5;
  if ( a1 != (_QWORD *)-40LL )
  {
    v5 = lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8_::_lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8_(v7, a2);
    *v4 = &off_1807AE018;
    lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8_::_lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8_(a1 + 6, v5);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(v5 + 16));
  }
  a1[37] = v4;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a2 + 16));
  return a1;
}
