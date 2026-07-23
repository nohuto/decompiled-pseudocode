/*
 * XREFs of CmpLockTwoKcbsShared @ 0x1406DBD9C
 * Callers:
 *     CmQueryMultipleValueKey @ 0x1406CFB68 (CmQueryMultipleValueKey.c)
 *     CmQueryKey @ 0x1406D7200 (CmQueryKey.c)
 *     CmEnumerateKey @ 0x1406DC470 (CmEnumerateKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x140766D20 (NtNotifyChangeMultipleKeys.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1407694D0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmSaveMergedKeys @ 0x140A0C034 (CmSaveMergedKeys.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A17C84 (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     CmpGetCorrectKcbLockOrder @ 0x14076A958 (CmpGetCorrectKcbLockOrder.c)
 *     CmpLockKcbShared @ 0x140AF5530 (CmpLockKcbShared.c)
 */

__int64 __fastcall CmpLockTwoKcbsShared(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a1 != a2 )
      {
        CmpGetCorrectKcbLockOrder(a1, a2, &v3, &v4);
        CmpLockKcbShared(v3);
        a1 = v4;
      }
    }
  }
  else
  {
    if ( !a2 )
      return result;
    a1 = a2;
  }
  return CmpLockKcbShared(a1);
}
