/*
 * XREFs of ??_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z @ 0x1802EF4F4
 * Callers:
 *     ?_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ @ 0x180020934 (-_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ.c)
 *     ?ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z @ 0x18013A680 (-ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

ZBAND_NOTIFICATION_DATA *__fastcall ZBAND_NOTIFICATION_DATA::`scalar deleting destructor'(
        ZBAND_NOTIFICATION_DATA *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 1);
  operator delete(this);
  return this;
}
