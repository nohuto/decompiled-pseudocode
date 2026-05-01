/*
 * XREFs of ?_IsHighContrast@AcrylicPolicyManager@@CA_NXZ @ 0x18005BFCC
 * Callers:
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18005BC60 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?OnMessage@AcrylicPolicyManager@@UEAAJI_K_J@Z @ 0x1802DB840 (-OnMessage@AcrylicPolicyManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     <none>
 */

bool AcrylicPolicyManager::_IsHighContrast(void)
{
  int pvParam; // [rsp+20h] [rbp-18h] BYREF
  __int64 v2; // [rsp+24h] [rbp-14h]
  int v3; // [rsp+2Ch] [rbp-Ch]

  pvParam = 16;
  v2 = 0LL;
  v3 = 0;
  if ( SystemParametersInfoW(0x42u, 0x10u, &pvParam, 0) )
    return v2 & 1;
  else
    return 0;
}
