/*
 * XREFs of sub_140931FBC @ 0x140931FBC
 * Callers:
 *     sub_1409B30B4 @ 0x1409B30B4 (sub_1409B30B4.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140931FBC(__int64 a1, const void *a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  v3 = a3;
  memset(v7, 0, 0x68uLL);
  result = 3221225506LL;
  if ( (unsigned int)v3 <= 0x50 )
  {
    v7[1] = *(_QWORD *)(a1 + 992);
    v7[2] = v3;
    memmove(&v7[3], a2, (unsigned int)v3);
    return sub_140358A20(2u, 19, 0, (__int64)v7);
  }
  return result;
}
