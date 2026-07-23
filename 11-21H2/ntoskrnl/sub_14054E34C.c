/*
 * XREFs of sub_14054E34C @ 0x14054E34C
 * Callers:
 *     sub_14054991C @ 0x14054991C (sub_14054991C.c)
 *     sub_140549A48 @ 0x140549A48 (sub_140549A48.c)
 *     sub_14054A610 @ 0x14054A610 (sub_14054A610.c)
 *     sub_14054B018 @ 0x14054B018 (sub_14054B018.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14054E34C(unsigned __int8 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  __int64 v5; // rbx
  __int64 result; // rax
  _QWORD v9[14]; // [rsp+20h] [rbp-98h] BYREF

  v5 = a1;
  memset(v9, 0, 0x68uLL);
  v9[1] = v5;
  v9[2] = a2;
  result = sub_140358A20(2u, 2050, 0, (__int64)v9);
  if ( (int)result >= 0 )
  {
    *a4 = v9[2];
    if ( a3 )
      *a3 = v9[3];
  }
  return result;
}
