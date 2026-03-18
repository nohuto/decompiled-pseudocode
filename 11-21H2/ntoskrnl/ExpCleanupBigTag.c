/*
 * XREFs of ExpCleanupBigTag @ 0x14063B348
 * Callers:
 *     ExInsertPoolTag @ 0x140214A58 (ExInsertPoolTag.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExpRemoveTagForBigPages @ 0x14063BC14 (ExpRemoveTagForBigPages.c)
 */

ULONG_PTR __fastcall ExpCleanupBigTag(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR result; // rax
  _QWORD v3[3]; // [rsp+40h] [rbp-18h] BYREF
  int v4; // [rsp+70h] [rbp+18h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+78h] [rbp+20h] BYREF

  BugCheckParameter4 = 0LL;
  v3[0] = 0LL;
  v4 = 0;
  ExpRemoveTagForBigPages(BugCheckParameter2, (__int64)&v4, (__int64)v3, (__int64)&BugCheckParameter4);
  result = BugCheckParameter4 - 1;
  if ( BugCheckParameter4 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    KeBugCheckEx(0x19u, 0x24uLL, BugCheckParameter2, 4uLL, BugCheckParameter4);
  return result;
}
