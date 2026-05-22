/*
 * XREFs of ?GetAddressOf@HString@Wrappers@WRL@Microsoft@@QEAAPEAPEAUHSTRING__@@XZ @ 0x1800E7B74
 * Callers:
 *     ?OnDeviceNotification@Details@PnpApiWrapper@@YAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x1800149C0 (-OnDeviceNotification@Details@PnpApiWrapper@@YAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall Microsoft::WRL::Wrappers::HString::GetAddressOf(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
  return this;
}
