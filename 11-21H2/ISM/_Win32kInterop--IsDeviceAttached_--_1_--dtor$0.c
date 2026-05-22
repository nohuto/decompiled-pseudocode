/*
 * XREFs of _Win32kInterop::IsDeviceAttached_::_1_::dtor$0 @ 0x1800E028C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Win32kInterop::IsDeviceAttached_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IInputSystemInternalProxy>::~ComPtr<IInputSystemInternalProxy>((__int64 *)(a2 + 80));
}
