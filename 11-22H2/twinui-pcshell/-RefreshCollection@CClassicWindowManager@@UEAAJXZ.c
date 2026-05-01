/*
 * XREFs of ?RefreshCollection@CClassicWindowManager@@UEAAJXZ @ 0x1801617F0
 * Callers:
 *     <none>
 * Callees:
 *     CClassicWindowManager::ForEachWindow__lambda_4ba8724d16ead783db38b79f3bb71832___ @ 0x18016183C (CClassicWindowManager--ForEachWindow__lambda_4ba8724d16ead783db38b79f3bb71832___.c)
 */

__int64 __fastcall CClassicWindowManager::RefreshCollection(CClassicWindowManager *this)
{
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  CClassicWindowManager::ForEachWindow__lambda_4ba8724d16ead783db38b79f3bb71832___(
    (char *)this - 104,
    (char *)this - 104);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
