/*
 * XREFs of ?Register@CApplicationManager@@UEAAJPEAUIImmersiveApplicationNotification@@PEAK@Z @ 0x1801118F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::Register(CApplicationManager *this, struct IUnknown *a2, unsigned int *a3)
{
  return AgileRegistrationList::Register((CApplicationManager *)((char *)this + 216), a2, a3);
}
