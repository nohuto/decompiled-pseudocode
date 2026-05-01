/*
 * XREFs of _VirtualDesktopsApi::GetWindowDesktopId_::_1_::dtor$1 @ 0x180216073
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopsApi::GetWindowDesktopId_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>(a2 + 64);
}
