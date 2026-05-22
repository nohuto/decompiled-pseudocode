/*
 * XREFs of _MPCMouseProcessor::AttachMouse_::_1_::dtor$1 @ 0x18006FA26
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCMouseProcessor::AttachMouse_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>::~pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>(a2 + 48);
}
