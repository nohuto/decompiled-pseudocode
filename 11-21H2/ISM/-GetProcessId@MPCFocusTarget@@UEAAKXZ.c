/*
 * XREFs of ?GetProcessId@MPCFocusTarget@@UEAAKXZ @ 0x1800233F0
 * Callers:
 *     ?GetProcessId@MPCFocusTarget@@WEA@EAAKXZ @ 0x18004FF60 (-GetProcessId@MPCFocusTarget@@WEA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCFocusTarget::GetProcessId(MPCFocusTarget *this)
{
  return *((unsigned int *)this + 14);
}
