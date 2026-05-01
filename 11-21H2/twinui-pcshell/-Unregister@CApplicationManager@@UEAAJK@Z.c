/*
 * XREFs of ?Unregister@CApplicationManager@@UEAAJK@Z @ 0x180128050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CApplicationManager::Unregister(CApplicationManager *this, unsigned int a2)
{
  return AgileRegistrationList::Unregister((CApplicationManager *)((char *)this + 216), a2);
}
