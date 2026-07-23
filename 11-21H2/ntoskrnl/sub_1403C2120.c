/*
 * XREFs of sub_1403C2120 @ 0x1403C2120
 * Callers:
 *     sub_1403F9550 @ 0x1403F9550 (sub_1403F9550.c)
 *     sub_1406C9BF4 @ 0x1406C9BF4 (sub_1406C9BF4.c)
 *     sub_140829ACC @ 0x140829ACC (sub_140829ACC.c)
 *     sub_140A59A7C @ 0x140A59A7C (sub_140A59A7C.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 *     sub_140B4EC40 @ 0x140B4EC40 (sub_140B4EC40.c)
 * Callees:
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14032BCC0 @ 0x14032BCC0 (sub_14032BCC0.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_14033DBC0 @ 0x14033DBC0 (sub_14033DBC0.c)
 *     sub_14033E534 @ 0x14033E534 (sub_14033E534.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall sub_1403C2120(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int v6; // eax
  char v7; // si
  unsigned __int64 v8; // rbp
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // esi
  char v13; // di
  unsigned __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rdx
  __int64 v19; // [rsp+20h] [rbp-108h] BYREF
  _QWORD v20[24]; // [rsp+30h] [rbp-F8h] BYREF

  memset(v20, 0, 0xB8uLL);
  if ( (unsigned int)sub_1402FDD20(a1) )
    return 0;
  v6 = sub_14032BCC0(a3);
  v7 = v6;
  if ( v6 > 7 || (v6 & 5) == 5 || (v6 & 2) != 0 && (dword_140D06880 & 0x8000) != 0 )
    return 0;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v10 = sub_1402CBD10(v8, 0LL, v6 | 0xA0000000);
  v20[3] = 0LL;
  LODWORD(v20[1]) = 20;
  v11 = v10;
  sub_1402CF280((__int64)v20, a1, v9, 0);
  if ( v9 )
  {
    v12 = v7 & 4;
    do
    {
      v19 = sub_140317A10(v8);
      v13 = v19;
      v14 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v19) >> 12) & 0xFFFFFFFFFFLL;
      v16 = (v14 << 12) | v11 & 0xFFF0000000000FFFuLL;
      v17 = v16;
      if ( v12 )
      {
        v16 |= 0x42uLL;
        if ( (v13 & 0x42) == 0 )
          v16 = v17;
      }
      else if ( v14 <= qword_140C50840 && ((*(_QWORD *)(48 * v14 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        sub_14033E534(48 * v14 - 0x220000000000LL, 0LL, 48 * v14 - 0x220000000000LL, v15);
      }
      v11 = v16 | 0x20;
      sub_14033DBC0(v8, v11);
      v8 += 8LL;
      --v9;
    }
    while ( v9 );
  }
  sub_14032F1B0((__int64)v20);
  return 1;
}
