/*
 * XREFs of sub_14063B348 @ 0x14063B348
 * Callers:
 *     sub_140214A58 @ 0x140214A58 (sub_140214A58.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14063BC14 @ 0x14063BC14 (sub_14063BC14.c)
 */

ULONG_PTR __fastcall sub_14063B348(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR result; // rax
  _QWORD v3[3]; // [rsp+40h] [rbp-18h] BYREF
  int v4; // [rsp+70h] [rbp+18h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+78h] [rbp+20h] BYREF

  BugCheckParameter4 = 0LL;
  v3[0] = 0LL;
  v4 = 0;
  sub_14063BC14(BugCheckParameter2, (__int64)&v4, (__int64)v3, (__int64)&BugCheckParameter4);
  result = BugCheckParameter4 - 1;
  if ( BugCheckParameter4 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    KeBugCheckEx(0x19u, 0x24uLL, BugCheckParameter2, 4uLL, BugCheckParameter4);
  return result;
}
