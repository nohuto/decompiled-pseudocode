/*
 * XREFs of ?Register@CImmersiveMode@@UEAAJPEAUIActiveZBandNotification@@PEAK@Z @ 0x180110410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveMode::Register(CImmersiveMode *this, struct IUnknown *a2, unsigned int *a3)
{
  return AgileRegistrationList::Register((CImmersiveMode *)((char *)this + 176), a2, a3);
}
