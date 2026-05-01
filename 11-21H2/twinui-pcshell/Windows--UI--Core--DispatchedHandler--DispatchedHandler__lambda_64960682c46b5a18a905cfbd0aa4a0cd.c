/*
 * XREFs of Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_64960682c46b5a18a905cfbd0aa4a0cd___ @ 0x180428570
 * Callers:
 *     ?RunCallback@XamlExplorerHostWindow@@UEAAXPEAUIXamlExplorerHostWindowCreatedCallback@@@Z @ 0x180429330 (-RunCallback@XamlExplorerHostWindow@@UEAAXPEAUIXamlExplorerHostWindowCreatedCallback@@@Z.c)
 * Callees:
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1800132F4 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_64960682c46b5a18a905cfbd0aa4a0cd_::_lambda_64960682c46b5a18a905cfbd0aa4a0cd_ @ 0x18042883C (_lambda_64960682c46b5a18a905cfbd0aa4a0cd_--_lambda_64960682c46b5a18a905cfbd0aa4a0cd_.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_64960682c46b5a18a905cfbd0aa4a0cd___(
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
    v5 = lambda_64960682c46b5a18a905cfbd0aa4a0cd_::_lambda_64960682c46b5a18a905cfbd0aa4a0cd_(v7, a2);
    *v4 = &off_1807ADFF8;
    lambda_64960682c46b5a18a905cfbd0aa4a0cd_::_lambda_64960682c46b5a18a905cfbd0aa4a0cd_(a1 + 6, v5);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(v5 + 16));
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(v5 + 8));
  }
  a1[37] = v4;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a2 + 16));
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a2 + 8));
  return a1;
}
