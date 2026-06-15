/*
 * XREFs of ?GetShellReadyWnfName@CWindowsPolicyManager@@UEAAJPEAU_WNF_STATE_NAME@@@Z @ 0x18001C850
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180017592 (_invalid_parameter_noinfo.c)
 */

__int64 __fastcall CWindowsPolicyManager::GetShellReadyWnfName(CWindowsPolicyManager *this, struct _WNF_STATE_NAME *a2)
{
  if ( a2 )
  {
    *a2 = (struct _WNF_STATE_NAME)WNF_SHEL_LOGON_COMPLETE;
  }
  else
  {
    *(_DWORD *)_o__errno(this) = 22;
    invalid_parameter_noinfo();
  }
  return 0LL;
}
