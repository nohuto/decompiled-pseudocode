/*
 * XREFs of ?GetProcessId@MPCFocusTarget@@UEAAKXZ @ 0x18002C090
 * Callers:
 *     ?GetProcessId@MPCFocusTarget@@WFA@EAAKXZ @ 0x180066F70 (-GetProcessId@MPCFocusTarget@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCFocusTarget::GetProcessId(MPCFocusTarget *this)
{
  return *((unsigned int *)this + 14);
}
