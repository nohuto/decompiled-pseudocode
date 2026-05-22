/*
 * XREFs of ?Release@MPCManagerClient@@UEAAKXZ @ 0x18015D230
 * Callers:
 *     ?Release@MPCManagerClient@@W7EAAKXZ @ 0x180051AA0 (-Release@MPCManagerClient@@W7EAAKXZ.c)
 *     ?Release@MPCManagerClient@@WBA@EAAKXZ @ 0x180051AC0 (-Release@MPCManagerClient@@WBA@EAAKXZ.c)
 *     ?Release@MPCManagerClient@@WBI@EAAKXZ @ 0x180051AE0 (-Release@MPCManagerClient@@WBI@EAAKXZ.c)
 *     ?Release@MPCManagerClient@@WCA@EAAKXZ @ 0x180051B00 (-Release@MPCManagerClient@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MPCManagerClient::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>::Release(this);
}
