/*
 * XREFs of ?OnSaDeviceDestroyed@CBtLeAudioResourceManager@@UEAAXW4AUDIO_DIRECTION@@PEAUSaDeviceParams@@@Z @ 0x1800FBAA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBtLeAudioResourceManager::OnSaDeviceDestroyed(__int64 a1, int a2)
{
  if ( a2 )
    *(_DWORD *)(a1 + 496) = 0;
  else
    *(_DWORD *)(a1 + 492) = 0;
  CBtAudioResourceManagerBase::OnSaDeviceDestroyed(a1, a2);
}
