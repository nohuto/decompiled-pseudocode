/*
 * XREFs of DoesPlatformSupportSpatialAudio @ 0x180055020
 * Callers:
 *     ?Initialize@CSpatialProperties@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18004EF4C (-Initialize@CSpatialProperties@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAIAEBUSpatialAudioSettings@@IPEBUSpatialAudioEncoderDescriptor@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@3W4SpatialAudioPolicyFlags@@KPEAU3@PEAUTechIndexes@@@Z @ 0x1800543B0 (-EnumerateSpatialEncoders@CSpatialProperties@@AEAAIAEBUSpatialAudioSettings@@IPEBUSpatialAudioEn.c)
 * Callees:
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180061D9C (IsGetDefaultSpatialRenderingModePresent.c)
 */

bool __fastcall DoesPlatformSupportSpatialAudio(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax

  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(a1, a2, a3, a4) )
    v4 = IsSpatialAllowedOnPlatform();
  else
    v4 = 1;
  return v4 != 0;
}
