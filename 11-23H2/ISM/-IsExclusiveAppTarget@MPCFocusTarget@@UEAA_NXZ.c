/*
 * XREFs of ?IsExclusiveAppTarget@MPCFocusTarget@@UEAA_NXZ @ 0x18002C0C0
 * Callers:
 *     ?IsExclusiveAppTarget@MPCFocusTarget@@WFA@EAA_NXZ @ 0x180066FB0 (-IsExclusiveAppTarget@MPCFocusTarget@@WFA@EAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall MPCFocusTarget::IsExclusiveAppTarget(MPCFocusTarget *this)
{
  return *((_BYTE *)this + 40);
}
