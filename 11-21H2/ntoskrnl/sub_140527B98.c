/*
 * XREFs of sub_140527B98 @ 0x140527B98
 * Callers:
 *     sub_1405264A0 @ 0x1405264A0 (sub_1405264A0.c)
 *     sub_140527130 @ 0x140527130 (sub_140527130.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140527B98(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax

  v2 = BugCheckParameter2;
  result = sub_14042A5E0(BugCheckParameter2, a2);
  if ( (_DWORD)result == 3473497 )
    KeBugCheckEx(0x159u, 0x3000uLL, v2, 0LL, 0LL);
  return result;
}
