/*
 * XREFs of _VirtualDesktopsApi::IsWindowOnCurrentVirtualDesktop_::_1_::dtor$1 @ 0x180214E04
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopsApi::IsWindowOnCurrentVirtualDesktop_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>(a2 + 96);
}
