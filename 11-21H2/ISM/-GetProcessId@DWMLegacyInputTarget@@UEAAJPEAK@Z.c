/*
 * XREFs of ?GetProcessId@DWMLegacyInputTarget@@UEAAJPEAK@Z @ 0x180026950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMLegacyInputTarget::GetProcessId(DWMLegacyInputTarget *this, unsigned int *a2)
{
  *a2 = *((_DWORD *)this + 8);
  return 0LL;
}
