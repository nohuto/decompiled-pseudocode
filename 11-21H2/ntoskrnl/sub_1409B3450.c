/*
 * XREFs of sub_1409B3450 @ 0x1409B3450
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405E2D48 @ 0x1405E2D48 (sub_1405E2D48.c)
 */

__int64 __fastcall sub_1409B3450(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // r9
  __int64 result; // rax

  v1 = *(_QWORD *)(BugCheckParameter2 + 24);
  if ( v1 )
    KeBugCheckEx(0x18Eu, 0LL, BugCheckParameter2, v1, 0LL);
  if ( *(_QWORD *)(BugCheckParameter2 + 40) )
    return sub_1405E2D48(BugCheckParameter2);
  return result;
}
