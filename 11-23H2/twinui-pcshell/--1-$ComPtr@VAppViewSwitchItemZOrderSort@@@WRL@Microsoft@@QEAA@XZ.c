/*
 * XREFs of ??1?$ComPtr@VAppViewSwitchItemZOrderSort@@@WRL@Microsoft@@QEAA@XZ @ 0x18079041C
 * Callers:
 *     _AppViewSwitchItemZOrderSort_CreateInstance_::_1_::dtor$0 @ 0x1802C3D3B (_AppViewSwitchItemZOrderSort_CreateInstance_--_1_--dtor$0.c)
 *     _wil::MakeAndInitializeOrThrow_AppViewSwitchItemZOrderSort__::_1_::dtor$0 @ 0x1802C3D89 (_wil--MakeAndInitializeOrThrow_AppViewSwitchItemZOrderSort__--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<AppViewSwitchItemZOrderSort>::~ComPtr<AppViewSwitchItemZOrderSort>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<AppViewSwitchItemZOrderSort>::InternalRelease(a1);
}
