/*
 * XREFs of sub_14054EB44 @ 0x14054EB44
 * Callers:
 *     sub_14054A8D0 @ 0x14054A8D0 (sub_14054A8D0.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14054EB44(char a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v7, 0, 0x68uLL);
  v7[1] = (-(__int64)((a1 & 2) != 0) & 0xFFFFFFFFFFFFFFF1uLL) + 16;
  result = sub_140358A20(2u, 55, 0, (__int64)v7);
  if ( (int)result >= 0 )
  {
    *a2 = v7[2];
    *a3 = v7[3];
  }
  return result;
}
