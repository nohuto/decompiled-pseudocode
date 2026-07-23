/*
 * XREFs of sub_14023659C @ 0x14023659C
 * Callers:
 *     sub_1402AD610 @ 0x1402AD610 (sub_1402AD610.c)
 *     sub_14031CD90 @ 0x14031CD90 (sub_14031CD90.c)
 *     sub_140353230 @ 0x140353230 (sub_140353230.c)
 * Callees:
 *     sub_1402365F4 @ 0x1402365F4 (sub_1402365F4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_14023659C(ULONG_PTR BugCheckParameter2, __int64 a2, char a3, __int64 a4)
{
  __int64 result; // rax
  ULONG_PTR v5; // r10

  result = BugCheckParameter2 - 0x10000;
  if ( BugCheckParameter2 - 0x10000 <= 0x7FFFFFFDFFFFLL && !a2 && (a3 & 2) != 0 )
  {
    if ( (*(_DWORD *)(a4 + 2172) & 0x1000) != 0 )
      KeBugCheckEx(0x1Au, 0x4477uLL, BugCheckParameter2, 0LL, 0LL);
    result = sub_1402365F4(a4);
    if ( (_DWORD)result )
      KeBugCheckEx(0x1Au, 0x4478uLL, v5, 0LL, 0LL);
  }
  return result;
}
