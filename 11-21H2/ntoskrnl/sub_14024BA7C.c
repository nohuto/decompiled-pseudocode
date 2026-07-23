/*
 * XREFs of sub_14024BA7C @ 0x14024BA7C
 * Callers:
 *     sub_14024BA3C @ 0x14024BA3C (sub_14024BA3C.c)
 *     sub_1402E29C8 @ 0x1402E29C8 (sub_1402E29C8.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_1406AF880 @ 0x1406AF880 (sub_1406AF880.c)
 *     sub_1406D9780 @ 0x1406D9780 (sub_1406D9780.c)
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 *     PsLookupThreadByThreadId @ 0x1407A7D90 (PsLookupThreadByThreadId.c)
 *     sub_1407A7EB0 @ 0x1407A7EB0 (sub_1407A7EB0.c)
 *     PsLookupProcessByProcessId @ 0x1407A8720 (PsLookupProcessByProcessId.c)
 *     sub_1407A87D0 @ 0x1407A87D0 (sub_1407A87D0.c)
 *     sub_1409AD5B8 @ 0x1409AD5B8 (sub_1409AD5B8.c)
 *     sub_1409B1074 @ 0x1409B1074 (sub_1409B1074.c)
 *     sub_1409EB878 @ 0x1409EB878 (sub_1409EB878.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfReleasePushLockExclusive @ 0x140359EF0 (ExfReleasePushLockExclusive.c)
 */

__int64 __fastcall sub_14024BA7C(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = sub_140347C10(BugCheckParameter2, 0LL, 0LL);
  sub_14029F120(BugCheckParameter2, v2, BugCheckParameter2);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  result = ExfReleasePushLockExclusive(BugCheckParameter2);
  if ( v2 )
    return sub_1402AFC00(BugCheckParameter2);
  return result;
}
