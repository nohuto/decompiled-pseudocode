/*
 * XREFs of ?GetProcessId@MPCFocusTarget@@UEAAKXZ @ 0x18002D9D0
 * Callers:
 *     ?GetProcessId@MPCFocusTarget@@WFA@EAAKXZ @ 0x18007AAB0 (-GetProcessId@MPCFocusTarget@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCFocusTarget::GetProcessId(MPCFocusTarget *this)
{
  return *((unsigned int *)this + 14);
}
