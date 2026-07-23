/*
 * XREFs of sub_14054DE6C @ 0x14054DE6C
 * Callers:
 *     sub_14054D214 @ 0x14054D214 (sub_14054D214.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14054DE6C(unsigned __int8 a1, _DWORD *a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  v3 = a1;
  memset(v5, 0, 0x68uLL);
  v5[1] = v3;
  result = sub_140358A20(2u, 2049, 0, (__int64)v5);
  if ( (int)result >= 0 )
  {
    if ( a2 )
      *a2 = v5[2];
  }
  return result;
}
