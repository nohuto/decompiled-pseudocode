/*
 * XREFs of ?IsExclusiveAppTarget@MPCFocusTarget@@UEAA_NXZ @ 0x18002DA00
 * Callers:
 *     ?IsExclusiveAppTarget@MPCFocusTarget@@WFA@EAA_NXZ @ 0x18007AAF0 (-IsExclusiveAppTarget@MPCFocusTarget@@WFA@EAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall MPCFocusTarget::IsExclusiveAppTarget(MPCFocusTarget *this)
{
  return *((_BYTE *)this + 40);
}
