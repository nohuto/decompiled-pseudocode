/*
 * XREFs of ??1?$ComPtr@VAppViewSwitchItemZOrderSort@@@WRL@Microsoft@@QEAA@XZ @ 0x180456080
 * Callers:
 *     _AppViewSwitchItemZOrderSort_CreateInstance_::_1_::dtor$0 @ 0x18021AB44 (_AppViewSwitchItemZOrderSort_CreateInstance_--_1_--dtor$0.c)
 *     _wil::MakeAndInitializeOrThrow_AppViewSwitchItemZOrderSort__::_1_::dtor$0 @ 0x18021AB92 (_wil--MakeAndInitializeOrThrow_AppViewSwitchItemZOrderSort__--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<AppViewSwitchItemZOrderSort>::~ComPtr<AppViewSwitchItemZOrderSort>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<AppViewSwitchItemZOrderSort>::InternalRelease(a1);
}
