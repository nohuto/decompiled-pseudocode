/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x18006A350
 * Callers:
 *     IsWinStationIsSessionRemoteablePresent @ 0x180069A98 (IsWinStationIsSessionRemoteablePresent.c)
 *     IsWTSQuerySessionInformationWPresent @ 0x180069C14 (IsWTSQuerySessionInformationWPresent.c)
 *     IsAudioPolicyManagerExtension_OnDeviceFormatChangedPresent @ 0x180069D90 (IsAudioPolicyManagerExtension_OnDeviceFormatChangedPresent.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006A08C (IsGetDefaultSpatialRenderingModePresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
