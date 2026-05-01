/*
 * XREFs of ?Release@CNetworkExperienceManager@@UEAAKXZ @ 0x180140CE0
 * Callers:
 *     ?Release@CNetworkExperienceManager@@W7EAAKXZ @ 0x180299550 (-Release@CNetworkExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CNetworkExperienceManager@@WBA@EAAKXZ @ 0x180299570 (-Release@CNetworkExperienceManager@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CNetworkExperienceManager::Release(CNetworkExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::INetworkFlyoutExperienceManager,Windows::Foundation::IClosable>::Release(this);
}
