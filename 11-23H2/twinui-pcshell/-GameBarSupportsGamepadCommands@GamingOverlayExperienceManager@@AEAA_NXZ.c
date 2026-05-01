/*
 * XREFs of ?GameBarSupportsGamepadCommands@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x1803FBE14
 * Callers:
 *     ?OnMessage@GamingOverlayExperienceManager@@UEAAJI_K_J@Z @ 0x18006D530 (-OnMessage@GamingOverlayExperienceManager@@UEAAJI_K_J@Z.c)
 *     ?SendGamepadCommand@GamingOverlayExperienceManager@@AEAAXW4SystemButtons@Gaming@Internal@Windows@@W4ButtonPressType@@@Z @ 0x18040694C (-SendGamepadCommand@GamingOverlayExperienceManager@@AEAAXW4SystemButtons@Gaming@Internal@Windows.c)
 * Callees:
 *     ?QueryGameBarMajorMinorVersion@GamingOverlayExperienceManager@@AEAA?AU?$pair@GG@std@@XZ @ 0x1804051FC (-QueryGameBarMajorMinorVersion@GamingOverlayExperienceManager@@AEAA-AU-$pair@GG@std@@XZ.c)
 */

char __fastcall GamingOverlayExperienceManager::GameBarSupportsGamepadCommands(GamingOverlayExperienceManager *this)
{
  char v1; // bl
  unsigned __int16 v4; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int16 v5; // [rsp+32h] [rbp+Ah]

  v1 = 0;
  if ( *((_BYTE *)this + 849) )
    return 1;
  GamingOverlayExperienceManager::QueryGameBarMajorMinorVersion(this, &v4);
  if ( v4 > 5u || v4 == 5 && v5 >= 0x258u )
  {
    v1 = 1;
    *((_BYTE *)this + 849) = 1;
  }
  return v1;
}
