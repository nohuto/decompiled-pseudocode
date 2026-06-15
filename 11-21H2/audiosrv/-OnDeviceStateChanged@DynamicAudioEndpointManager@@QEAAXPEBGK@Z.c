/*
 * XREFs of ?OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z @ 0x180132484
 * Callers:
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x1800EA9B0 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 *     s_mmeNotifyDeviceStateChanged @ 0x180110810 (s_mmeNotifyDeviceStateChanged.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY08_NK@Z @ 0x180132540 (-OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY08_NK@Z.c)
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z @ 0x1801329A0 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z.c)
 */

void __fastcall DynamicAudioEndpointManager::OnDeviceStateChanged(
        DynamicAudioEndpointManager *this,
        const unsigned __int16 *a2,
        int a3)
{
  DynamicAudioEndpointManager *v3; // rbx
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF
  __int16 v5; // [rsp+40h] [rbp-18h]

  v3 = g_DynamicAudioEndpointManager;
  v5 = 0;
  v4 = 0LL;
  DynamicAudioEndpointManager::OnRuleOperation(g_DynamicAudioEndpointManager, a2, 0LL, &v4, a3);
  DynamicAudioEndpointManager::RefreshPublishedDefaults(v3, (bool (*const)[9])&v4, 0);
}
