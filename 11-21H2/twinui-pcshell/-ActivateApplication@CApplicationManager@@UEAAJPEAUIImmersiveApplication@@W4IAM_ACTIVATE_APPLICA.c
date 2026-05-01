/*
 * XREFs of ?ActivateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4IAM_ACTIVATE_APPLICATION_OPTION@@@Z @ 0x180054700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::ActivateApplication(__int64 a1, __int64 a2, unsigned int a3)
{
  return CApplicationManager::ActivateApplicationInternal(a1 + 88, a3, a2);
}
