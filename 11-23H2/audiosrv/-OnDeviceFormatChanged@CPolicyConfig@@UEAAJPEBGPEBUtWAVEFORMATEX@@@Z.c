/*
 * XREFs of ?OnDeviceFormatChanged@CPolicyConfig@@UEAAJPEBGPEBUtWAVEFORMATEX@@@Z @ 0x180065DD0
 * Callers:
 *     <none>
 * Callees:
 *     IsAudioPolicyManagerExtension_OnDeviceFormatChangedPresent @ 0x180069D90 (IsAudioPolicyManagerExtension_OnDeviceFormatChangedPresent.c)
 */

__int64 __fastcall CPolicyConfig::OnDeviceFormatChanged(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        const struct tWAVEFORMATEX *a3)
{
  if ( (unsigned __int8)IsAudioPolicyManagerExtension_OnDeviceFormatChangedPresent(this) )
    AudioPolicyManagerExtension_OnDeviceFormatChanged(a2, a3);
  return 0LL;
}
