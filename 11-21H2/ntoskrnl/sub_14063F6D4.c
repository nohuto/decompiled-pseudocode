/*
 * XREFs of sub_14063F6D4 @ 0x14063F6D4
 * Callers:
 *     ExDestroyPool @ 0x14063A7E0 (ExDestroyPool.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14063F6D4(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax
  _QWORD v3[14]; // [rsp+30h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  v3[1] = BugCheckParameter2;
  result = sub_140358A20(2u, 80, 0, (__int64)v3);
  if ( (int)result < 0 )
    KeBugCheckEx(0xC2u, 0x10uLL, BugCheckParameter2, (int)result, 0LL);
  return result;
}
