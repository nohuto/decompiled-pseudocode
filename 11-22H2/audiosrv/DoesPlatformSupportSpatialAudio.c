/*
 * XREFs of DoesPlatformSupportSpatialAudio @ 0x180021C94
 * Callers:
 *     ?Initialize@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x18002146C (-Initialize@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAIPEAVEffectPack@@AEBUSpatialAudioSettings@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@3W4SpatialAudioPolicyFlags@@KPEAUSpatialAudioEncoderDescriptor@@PEAUTechIndexes@@@Z @ 0x180034250 (-EnumerateSpatialEncoders@CSpatialProperties@@AEAAIPEAVEffectPack@@AEBUSpatialAudioSettings@@W4S.c)
 * Callees:
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006A07C (IsGetDefaultSpatialRenderingModePresent.c)
 */

bool DoesPlatformSupportSpatialAudio()
{
  int v0; // eax

  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent() )
    v0 = IsSpatialAllowedOnPlatform();
  else
    v0 = 1;
  return v0 != 0;
}
