/*
 * XREFs of sub_1405D6E84 @ 0x1405D6E84
 * Callers:
 *     sub_1403A3C90 @ 0x1403A3C90 (sub_1403A3C90.c)
 *     sub_140A4ADB0 @ 0x140A4ADB0 (sub_140A4ADB0.c)
 * Callees:
 *     sub_1402E0200 @ 0x1402E0200 (sub_1402E0200.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_1405D6E84(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r11d
  int v11; // r11d
  _QWORD v12[32]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v13; // [rsp+130h] [rbp+30h] BYREF
  int v14; // [rsp+138h] [rbp+38h]
  int v15; // [rsp+13Ch] [rbp+3Ch]

  memset(v12, 0, sizeof(v12));
  if ( (xmmword_140D06910 & 0x8000) != 0 )
  {
    v6 = *(_QWORD *)(a3 + 184);
    v7 = *(_QWORD *)(a1 + 8);
    v12[0] = a3;
    v12[1] = *(_QWORD *)(v7 + 24);
    *(_WORD *)((char *)&v12[2] + 1) = *(_WORD *)(v6 - 72);
    HIDWORD(v12[2]) = *(_DWORD *)(v6 - 56);
    LODWORD(v12[3]) = *(_DWORD *)(v6 - 48);
    if ( a2 )
    {
      v8 = *(_QWORD *)(a2 + 72);
      LOBYTE(v12[2]) = *(_BYTE *)(a2 + 56);
      if ( v8 )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( *(_WORD *)(v8 + 2 * v9) );
        v10 = v9;
        if ( (unsigned int)v9 > 0x6C )
          v10 = 108;
        sub_1402E0200(&v12[4], 109LL, v8 + 2LL * (unsigned int)(v9 - v10));
        goto LABEL_11;
      }
    }
    else
    {
      LOBYTE(v12[2]) = 0;
    }
    LOWORD(v12[4]) = 0;
    v11 = 0;
LABEL_11:
    v15 = 0;
    v13 = v12;
    v14 = 2 * v11 + 40;
    sub_14035EDE4((__int64)&v13, 1u, 0x80008000, 0x1226u, 0x401802u);
  }
}
