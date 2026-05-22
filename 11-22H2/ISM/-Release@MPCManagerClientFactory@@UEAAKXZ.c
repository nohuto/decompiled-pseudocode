/*
 * XREFs of ?Release@MPCManagerClientFactory@@UEAAKXZ @ 0x18018A470
 * Callers:
 *     ?Release@MPCManagerClientFactory@@W7EAAKXZ @ 0x18007C890 (-Release@MPCManagerClientFactory@@W7EAAKXZ.c)
 *     ?Release@MPCManagerClientFactory@@WCI@EAAKXZ @ 0x18007C8B0 (-Release@MPCManagerClientFactory@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MPCManagerClientFactory::Release(__int64 this, volatile int *a2)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::Input::MPCManager::IMPCManagerClientStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
           this,
           a2);
}
