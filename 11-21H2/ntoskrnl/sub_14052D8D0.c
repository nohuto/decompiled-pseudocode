/*
 * XREFs of sub_14052D8D0 @ 0x14052D8D0
 * Callers:
 *     sub_14052CED4 @ 0x14052CED4 (sub_14052CED4.c)
 *     sub_14052D960 @ 0x14052D960 (sub_14052D960.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall sub_14052D8D0(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // r8
  __int64 v2; // rcx
  ULONG_PTR result; // rax

  v1 = (unsigned int)BugCheckParameter2;
  v2 = *(_QWORD *)(qword_140C4ABF0 + 8LL * (unsigned int)BugCheckParameter2);
  result = *(_QWORD *)(v2 + 120);
  if ( result )
    KeBugCheckEx(0x1DAu, 5uLL, v1, *(unsigned __int8 *)(v2 + 112), result);
  return result;
}
