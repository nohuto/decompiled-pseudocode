/*
 * XREFs of CmCheckNoTxContext @ 0x140691C88
 * Callers:
 *     CmLoadDifferencingKey @ 0x14069108C (CmLoadDifferencingKey.c)
 *     NtCompactKeys @ 0x140A0D370 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140A0D640 (NtCompressKey.c)
 *     NtReplaceKey @ 0x140A0E4B0 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140A0E810 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x140A0EBD0 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x140A0EE60 (NtSaveMergedKeys.c)
 * Callees:
 *     <none>
 */

__int64 CmCheckNoTxContext()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  result = TmCurrentTransaction(&v1);
  if ( (_DWORD)result == -1073741637 )
    return 0LL;
  if ( (int)result >= 0 )
    return v1 != 0 ? 0xC0190001 : 0;
  return result;
}
