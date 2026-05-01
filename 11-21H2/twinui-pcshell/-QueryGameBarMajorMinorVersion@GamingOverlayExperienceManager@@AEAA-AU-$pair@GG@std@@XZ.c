/*
 * XREFs of ?QueryGameBarMajorMinorVersion@GamingOverlayExperienceManager@@AEAA?AU?$pair@GG@std@@XZ @ 0x18033746C
 * Callers:
 *     ?GameBarSupportsDirectUriActivation@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x18032EA44 (-GameBarSupportsDirectUriActivation@GamingOverlayExperienceManager@@AEAA_NXZ.c)
 *     ?GameBarSupportsGamepadCommands@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x18032EA9C (-GameBarSupportsGamepadCommands@GamingOverlayExperienceManager@@AEAA_NXZ.c)
 * Callees:
 *     _lambda_1f326bb701f63fb223ffc5012580bf65_::operator() @ 0x18032C9C4 (_lambda_1f326bb701f63fb223ffc5012580bf65_--operator().c)
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
  lambda_1f326bb701f63fb223ffc5012580bf65_::operator()(v4);
  *a2 = v5;
  a2[1] = v6;
  return a2;
}
