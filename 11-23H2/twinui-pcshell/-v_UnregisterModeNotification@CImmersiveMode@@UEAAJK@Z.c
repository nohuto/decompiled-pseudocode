/*
 * XREFs of ?v_UnregisterModeNotification@CImmersiveMode@@UEAAJK@Z @ 0x18014DEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unregister@AgileRegistrationList@@QEAAJK@Z @ 0x18014E014 (-Unregister@AgileRegistrationList@@QEAAJK@Z.c)
 */

__int64 __fastcall CImmersiveMode::v_UnregisterModeNotification(CImmersiveMode *this, unsigned int a2)
{
  AgileRegistrationList::Unregister((CImmersiveMode *)((char *)this + 152), a2);
  return 0LL;
}
