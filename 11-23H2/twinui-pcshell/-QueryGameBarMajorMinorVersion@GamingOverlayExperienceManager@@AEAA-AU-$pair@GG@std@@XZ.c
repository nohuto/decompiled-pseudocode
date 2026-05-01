/*
 * XREFs of ?QueryGameBarMajorMinorVersion@GamingOverlayExperienceManager@@AEAA?AU?$pair@GG@std@@XZ @ 0x1804051FC
 * Callers:
 *     ?GameBarSupportsDirectUriActivation@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x1803FBDBC (-GameBarSupportsDirectUriActivation@GamingOverlayExperienceManager@@AEAA_NXZ.c)
 *     ?GameBarSupportsGamepadCommands@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x1803FBE14 (-GameBarSupportsGamepadCommands@GamingOverlayExperienceManager@@AEAA_NXZ.c)
 * Callees:
 *     _lambda_a1dfb81935e0ebbd46bb8d59c1a7ba52_::operator() @ 0x1801DA430 (_lambda_a1dfb81935e0ebbd46bb8d59c1a7ba52_--operator().c)
 */

_WORD *__fastcall GamingOverlayExperienceManager::QueryGameBarMajorMinorVersion(__int64 a1, _WORD *a2)
{
  _WORD *v4[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  __int16 v6; // [rsp+48h] [rbp+10h] BYREF

  v5 = a1;
  LOWORD(v5) = 0;
  v6 = 0;
  v4[0] = &v5;
  v4[1] = &v6;
  lambda_a1dfb81935e0ebbd46bb8d59c1a7ba52_::operator()(v4);
  *a2 = v5;
  a2[1] = v6;
  return a2;
}
