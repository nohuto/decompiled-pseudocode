/*
 * XREFs of ?AddRef@MPCManagerClientFactory@@UEAAKXZ @ 0x1801864B0
 * Callers:
 *     ?AddRef@MPCManagerClientFactory@@W7EAAKXZ @ 0x18007C1B0 (-AddRef@MPCManagerClientFactory@@W7EAAKXZ.c)
 *     ?AddRef@MPCManagerClientFactory@@WCI@EAAKXZ @ 0x18007C1D0 (-AddRef@MPCManagerClientFactory@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MPCManagerClientFactory::AddRef(__int64 this, volatile int *a2)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::Input::MPCManager::IMPCManagerClientStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(
           this,
           a2);
}
