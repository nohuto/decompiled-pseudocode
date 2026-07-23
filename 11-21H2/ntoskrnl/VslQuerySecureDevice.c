/*
 * XREFs of VslQuerySecureDevice @ 0x14085C200
 * Callers:
 *     <none>
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall VslQuerySecureDevice(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 result; // rax
  _QWORD v6[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v6, 0, 0x68uLL);
  *(_OWORD *)a2 = 0LL;
  v4 = *(_DWORD *)(a1 + 8);
  v6[1] = *(_QWORD *)a1;
  LODWORD(v6[2]) = v4;
  result = sub_140358A20(2u, 67, 0, (__int64)v6);
  if ( (int)result >= 0 )
  {
    *(_WORD *)a2 = WORD2(v6[2]);
    *(_QWORD *)(a2 + 8) = v6[3];
  }
  return result;
}
