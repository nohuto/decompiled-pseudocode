/*
 * XREFs of ??1?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@QEAA@XZ @ 0x1801F35E4
 * Callers:
 *     _MPCMouseProcessor::AttachMouse_::_1_::dtor$1 @ 0x18008352D (_MPCMouseProcessor--AttachMouse_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>::~pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)(a1 + 8));
}
