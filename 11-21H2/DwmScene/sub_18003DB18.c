/*
 * XREFs of sub_18003DB18 @ 0x18003DB18
 * Callers:
 *     sub_18004EE74 @ 0x18004EE74 (sub_18004EE74.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_1800B072C @ 0x1800B072C (sub_1800B072C.c)
 */

__int64 __fastcall sub_18003DB18(__int64 a1, _QWORD *a2)
{
  int v2; // edx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // r10d
  __int64 v6; // rcx
  int v7; // eax
  _DWORD v9[15]; // [rsp+30h] [rbp-31h]
  __m128i si128; // [rsp+6Ch] [rbp+Bh]
  int v11; // [rsp+7Ch] [rbp+1Bh]
  int v12; // [rsp+80h] [rbp+1Fh]
  int v13; // [rsp+84h] [rbp+23h]
  int v14; // [rsp+88h] [rbp+27h]
  int v15; // [rsp+8Ch] [rbp+2Bh]
  int v16; // [rsp+90h] [rbp+2Fh]

  if ( sub_1800122C0(a2) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)v4 + 112LL);
    if ( v6 )
      v7 = *(_DWORD *)(v6 + 20);
    else
      v7 = v2;
    v9[0] = v2;
    v9[1] = 4;
    v9[2] = 4;
    v9[5] = 12;
    v9[6] = 16;
    v9[10] = 12;
    v9[11] = 16;
    v9[12] = 2;
    v9[13] = 1;
    v9[14] = 2;
    v11 = 2;
    v15 = 1;
    v16 = 2;
    v9[3] = 4;
    v9[4] = 8;
    v9[7] = 4;
    v9[8] = 4;
    v9[9] = 8;
    si128 = _mm_load_si128((const __m128i *)&xmmword_1801BD7F0);
    v12 = 4;
    v13 = 8;
    v14 = 4;
    v2 = v9[v7];
  }
  return sub_1800B072C((unsigned int)*(_QWORD *)(v3 + 96) + 64, v4, v5, v4, v2);
}
