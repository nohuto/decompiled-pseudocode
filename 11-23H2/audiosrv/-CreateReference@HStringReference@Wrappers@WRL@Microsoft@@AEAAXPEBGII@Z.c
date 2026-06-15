/*
 * XREFs of ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004AC60
 * Callers:
 *     ?IsHolographicSpaceAvailable@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ @ 0x180044468 (-IsHolographicSpaceAvailable@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ.c)
 *     ?InitHolographicDisplay@CHMDManager@@QEAAJXZ @ 0x18010F7F4 (-InitHolographicDisplay@CHMDManager@@QEAAJXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18011931C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?EnsureCamMicUsageInitialized@CPowerReferenceManager@@AEAA_NXZ @ 0x18011A3E4 (-EnsureCamMicUsageInitialized@CPowerReferenceManager@@AEAA_NXZ.c)
 *     ?RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ @ 0x18013B05C (-RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ.c)
 *     ?RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ @ 0x18015D2AC (-RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        HSTRING_HEADER *hstringHeader,
        PCWSTR sourceString,
        UINT32 a3,
        UINT32 a4)
{
  UINT32 v4; // eax
  HRESULT StringReference; // eax

  v4 = a4;
  if ( a4 >= a3 )
    v4 = a3 - 1;
  StringReference = WindowsCreateStringReference(sourceString, v4, hstringHeader, (HSTRING *)&hstringHeader[1]);
  if ( StringReference < 0 )
  {
    RaiseException(StringReference, 1u, 0, 0LL);
    __debugbreak();
    JUMPOUT(0x1800B6337LL);
  }
}
