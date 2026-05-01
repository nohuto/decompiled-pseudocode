/*
 * XREFs of _CVirtualDesktopForegroundPolicy::GetNewForegroundViewForDesktopSwitch_::_1_::dtor$2 @ 0x180216097
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktopForegroundPolicy::GetNewForegroundViewForDesktopSwitch_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>(a2 + 56);
}
