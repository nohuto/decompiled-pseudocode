/*
 * XREFs of sub_1406C7C20 @ 0x1406C7C20
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1406F6C24 @ 0x1406F6C24 (sub_1406F6C24.c)
 *     sub_1407A501C @ 0x1407A501C (sub_1407A501C.c)
 *     sub_1407A6A34 @ 0x1407A6A34 (sub_1407A6A34.c)
 *     sub_1407B0F40 @ 0x1407B0F40 (sub_1407B0F40.c)
 */

LONG_PTR __fastcall sub_1406C7C20(_QWORD *BugCheckParameter2)
{
  __int64 v2; // rcx
  LONG_PTR result; // rax
  void *v4; // rdi

  v2 = BugCheckParameter2[2];
  if ( v2 )
  {
    result = sub_1407A501C(v2, BugCheckParameter2[3], BugCheckParameter2);
    BugCheckParameter2[2] = 0LL;
  }
  v4 = (void *)BugCheckParameter2[5];
  if ( v4 )
  {
    sub_1407A6A34((ULONG_PTR)BugCheckParameter2);
    sub_1406F6C24(v4, BugCheckParameter2);
    BugCheckParameter2[5] = 0LL;
    sub_1407B0F40((ULONG_PTR)BugCheckParameter2);
    return ObfDereferenceObject(v4);
  }
  return result;
}
