/*
 * XREFs of sub_1406ED344 @ 0x1406ED344
 * Callers:
 *     sub_1406ED260 @ 0x1406ED260 (sub_1406ED260.c)
 *     sub_14085E448 @ 0x14085E448 (sub_14085E448.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406ED528 @ 0x1406ED528 (sub_1406ED528.c)
 */

__int64 __fastcall sub_1406ED344(__int64 a1, unsigned int a2, int a3, _DWORD *a4)
{
  __int64 v4; // r14
  int v8; // ecx
  bool v9; // zf
  unsigned __int64 v10; // rax
  __int64 result; // rax
  _DWORD v12[24]; // [rsp+20h] [rbp-98h] BYREF

  v4 = a2;
  memset(v12, 0, 0x58uLL);
  v12[3] = 128;
  v12[4] = 0x20000;
  v12[0] = ((a3 & 1) << 9) | 0x106;
  v8 = 0;
  if ( a3 )
    v9 = (dword_140D321C0 & 0xC) == 8;
  else
    v9 = (dword_140D321C0 & 3) == 2;
  LOBYTE(v8) = v9;
  v10 = (8 * v4) & 0x7FFFFFFFFFFFLL;
  v12[2] = v12[2] & 0xFFF4FF00 | ((dword_140D321C0 & 0x10 | 0x40) << 12) & 0xFFF5FFFF | (((16 * v8) | dword_140D321C0 & 0x40) << 13);
  if ( v10 >= 0x40000 )
    LODWORD(v10) = 0x40000;
  v12[5] = v10;
  result = sub_1406ED528(a1, v12, 88LL, 0LL);
  if ( (int)result >= 0 )
  {
    *a4 = v12[20];
    return 0LL;
  }
  return result;
}
