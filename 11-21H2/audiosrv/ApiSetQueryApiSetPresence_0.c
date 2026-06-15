/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x180062060
 * Callers:
 *     IsWinStationIsSessionRemoteablePresent @ 0x1800617B8 (IsWinStationIsSessionRemoteablePresent.c)
 *     IsWTSQuerySessionInformationWPresent @ 0x180061934 (IsWTSQuerySessionInformationWPresent.c)
 *     IsAudioPolicyManagerExtension_OnDeviceFormatChangedPresent @ 0x180061A28 (IsAudioPolicyManagerExtension_OnDeviceFormatChangedPresent.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180061D9C (IsGetDefaultSpatialRenderingModePresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
