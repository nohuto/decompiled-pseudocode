/*
 * XREFs of ?GameBarSupportsDirectUriActivation@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x1803FBDBC
 * Callers:
 *     ?LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z @ 0x180401954 (-LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z.c)
 *     ?TriggerOnLastFocusedWindow@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180408C10 (-TriggerOnLastFocusedWindow@GamingOverlayExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?QueryGameBarMajorMinorVersion@GamingOverlayExperienceManager@@AEAA?AU?$pair@GG@std@@XZ @ 0x1804051FC (-QueryGameBarMajorMinorVersion@GamingOverlayExperienceManager@@AEAA-AU-$pair@GG@std@@XZ.c)
 */

char __fastcall GamingOverlayExperienceManager::GameBarSupportsDirectUriActivation(
        GamingOverlayExperienceManager *this)
{
  char v1; // bl
  unsigned __int16 v4; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int16 v5; // [rsp+32h] [rbp+Ah]

  v1 = 0;
  if ( *((_BYTE *)this + 848) )
    return 1;
  GamingOverlayExperienceManager::QueryGameBarMajorMinorVersion(this, &v4);
  if ( v4 > 5u || v4 == 5 && v5 >= 0x1F4u )
  {
    v1 = 1;
    *((_BYTE *)this + 848) = 1;
  }
  return v1;
}
