/*
 * XREFs of ?GetThreadId@DWMLegacyInputTarget@@UEAAJPEAK@Z @ 0x1800310F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMLegacyInputTarget::GetThreadId(DWMLegacyInputTarget *this, unsigned int *a2)
{
  *a2 = *((_DWORD *)this + 9);
  return 0LL;
}
