/*
 * XREFs of ?GetWindowId@MPCFocusTarget@@UEAA_KXZ @ 0x18002D9E0
 * Callers:
 *     ?GetWindowId@MPCFocusTarget@@WFA@EAA_KXZ @ 0x18007AAD0 (-GetWindowId@MPCFocusTarget@@WFA@EAA_KXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MPCFocusTarget::GetWindowId(MPCFocusTarget *this)
{
  return *((_QWORD *)this + 6);
}
