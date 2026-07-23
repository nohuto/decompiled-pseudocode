/*
 * XREFs of sub_140294CC0 @ 0x140294CC0
 * Callers:
 *     sub_140294CA4 @ 0x140294CA4 (sub_140294CA4.c)
 *     sub_140546B70 @ 0x140546B70 (sub_140546B70.c)
 *     sub_14054C1A4 @ 0x14054C1A4 (sub_14054C1A4.c)
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 *     sub_1408455C8 @ 0x1408455C8 (sub_1408455C8.c)
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 *     sub_140AFD7A4 @ 0x140AFD7A4 (sub_140AFD7A4.c)
 *     sub_140B07AB0 @ 0x140B07AB0 (sub_140B07AB0.c)
 *     sub_140B315A4 @ 0x140B315A4 (sub_140B315A4.c)
 *     sub_140B50F00 @ 0x140B50F00 (sub_140B50F00.c)
 * Callees:
 *     sub_140294D28 @ 0x140294D28 (sub_140294D28.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_140294CC0()
{
  __int64 v0; // rcx
  int v2; // edx
  int v3; // ecx
  int v4; // edx
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  _DWORD v10[28]; // [rsp+20h] [rbp-88h] BYREF

  memset(v10, 0, 0x68uLL);
  if ( (unsigned __int8)sub_140294D28(0LL) )
  {
    if ( dword_140E0184C == (_DWORD)v0 )
    {
      LOBYTE(v0) = 2;
      if ( (int)sub_140358A20(v0, 249LL, 0LL, v10) >= 0 )
      {
        v2 = (2 * (v10[4] & 1) + 4) | 0x20;
        if ( (v10[4] & 2) == 0 )
          v2 = 2 * (v10[4] & 1) + 4;
        v3 = v2 | 0x10;
        if ( (v10[4] & 4) != 0 )
          v3 = v2;
        v4 = v3 | 0x40;
        if ( (v10[4] & 8) == 0 )
          v4 = v3;
        v5 = v4 | 0x80;
        if ( (v10[4] & 0x10) == 0 )
          v5 = v4;
        v6 = v5 | 0x100;
        if ( (v10[4] & 0x20) == 0 )
          v6 = v5;
        v7 = v6 | 0x200;
        if ( (v10[4] & 0x40) == 0 )
          v7 = v6;
        v8 = v7 | 0x400;
        if ( (v10[4] & 0x80) == 0 )
          v8 = v7;
        v9 = v8 | 0x800;
        if ( (v10[4] & 0x100) == 0 )
          v9 = v8;
        dword_140E0184C = v9;
      }
    }
  }
  return (unsigned int)dword_140E0184C;
}
