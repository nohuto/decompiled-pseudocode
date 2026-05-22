/*
 * XREFs of ?GetWindowId@MPCFocusTarget@@UEAA_KXZ @ 0x180023400
 * Callers:
 *     ?GetWindowId@MPCFocusTarget@@WEA@EAA_KXZ @ 0x18004FF80 (-GetWindowId@MPCFocusTarget@@WEA@EAA_KXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MPCFocusTarget::GetWindowId(MPCFocusTarget *this)
{
  return *((_QWORD *)this + 6);
}
