/*
 * XREFs of ?v_UnregisterZBandNotification@CImmersiveMode@@UEAAJK@Z @ 0x18014DE50
 * Callers:
 *     <none>
 * Callees:
 *     ?Unregister@AgileRegistrationList@@QEAAJK@Z @ 0x18014E014 (-Unregister@AgileRegistrationList@@QEAAJK@Z.c)
 */

__int64 __fastcall CImmersiveMode::v_UnregisterZBandNotification(CImmersiveMode *this, unsigned int a2)
{
  AgileRegistrationList::Unregister((CImmersiveMode *)((char *)this + 176), a2);
  return 0LL;
}
