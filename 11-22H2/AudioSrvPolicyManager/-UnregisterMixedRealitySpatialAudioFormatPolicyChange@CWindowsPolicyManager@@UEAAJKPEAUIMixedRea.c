/*
 * XREFs of ?UnregisterMixedRealitySpatialAudioFormatPolicyChange@CWindowsPolicyManager@@UEAAJKPEAUIMixedRealitySpatialAudioFormatPolicyChange@@@Z @ 0x18001ED30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall CWindowsPolicyManager::UnregisterMixedRealitySpatialAudioFormatPolicyChange(
        CWindowsPolicyManager *this,
        unsigned int a2,
        struct IMixedRealitySpatialAudioFormatPolicyChange *a3)
{
  return CApplicationManager::RegisterMixedRealitySpatialAudioFormatPolicyChange(this, a2, a3);
}
