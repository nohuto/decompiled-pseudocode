/*
 * XREFs of ?GetIids@MPCManagerClient@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18007C210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCManagerClient::GetIids(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>::GetIids(a1 - 24);
}
