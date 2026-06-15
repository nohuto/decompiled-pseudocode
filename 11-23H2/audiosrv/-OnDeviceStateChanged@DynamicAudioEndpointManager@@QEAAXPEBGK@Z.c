/*
 * XREFs of ?OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z @ 0x18013F9A8
 * Callers:
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x180116F60 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 * Callees:
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z @ 0x180002480 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z.c)
 *     ?OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY08_NK@Z @ 0x180002560 (-OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY08_NK@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 */

void __fastcall DynamicAudioEndpointManager::OnDeviceStateChanged(
        DynamicAudioEndpointManager *this,
        const unsigned __int16 *a2,
        unsigned int a3)
{
  DynamicAudioEndpointManager *v3; // rbx
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF
  __int16 v5; // [rsp+40h] [rbp-18h]

  v3 = g_DynamicAudioEndpointManager;
  v5 = 0;
  v4 = 0LL;
  DynamicAudioEndpointManager::OnRuleOperation((__int64)g_DynamicAudioEndpointManager, (__int64)a2, 0, (bool *)&v4, a3);
  DynamicAudioEndpointManager::RefreshPublishedDefaults(v3, (bool (*const)[9])&v4, 0);
}
