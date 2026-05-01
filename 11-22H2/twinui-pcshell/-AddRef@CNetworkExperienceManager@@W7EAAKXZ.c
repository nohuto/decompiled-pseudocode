/*
 * XREFs of ?AddRef@CNetworkExperienceManager@@W7EAAKXZ @ 0x180291D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CNetworkExperienceManager::AddRef(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ITaskWindow>::AddRef(a1 - 8);
}
