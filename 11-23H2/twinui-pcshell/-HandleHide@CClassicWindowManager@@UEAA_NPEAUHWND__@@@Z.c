/*
 * XREFs of ?HandleHide@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x1801AE7E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CClassicWindowManager::HandleHide(CClassicWindowManager *this, unsigned __int64 a2)
{
  return CClassicWindowManager::_HandleDestructionOrHide((_QWORD *)this - 9, a2, 0LL, 0);
}
