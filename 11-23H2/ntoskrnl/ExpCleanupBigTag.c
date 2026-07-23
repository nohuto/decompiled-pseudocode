/*
 * XREFs of ExpCleanupBigTag @ 0x140607FF8
 * Callers:
 *     ExInsertPoolTag @ 0x1403BA6DC (ExInsertPoolTag.c)
 * Callees:
 *     ExpRemoveTagForBigPages @ 0x140323AA0 (ExpRemoveTagForBigPages.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ExpCleanupBigTag(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rbx
  ULONG_PTR result; // rax
  ULONG_PTR BugCheckParameter4; // [rsp+40h] [rbp-18h] BYREF
  __int64 v8; // [rsp+48h] [rbp-10h] BYREF
  int v9; // [rsp+70h] [rbp+18h] BYREF
  int v10; // [rsp+78h] [rbp+20h] BYREF
  int v11; // [rsp+7Ch] [rbp+24h]

  v11 = HIDWORD(a4);
  v4 = a2;
  v10 = 0;
  BugCheckParameter4 = 0LL;
  v8 = 0LL;
  v9 = 0;
  ExpRemoveTagForBigPages(BugCheckParameter2, a2, 1, &v10, &v9, &v8, &BugCheckParameter4);
  result = BugCheckParameter4 - 1;
  if ( BugCheckParameter4 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    KeBugCheckEx(0x19u, 0x24uLL, BugCheckParameter2, v4, BugCheckParameter4);
  return result;
}
