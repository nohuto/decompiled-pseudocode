/*
 * XREFs of sub_180065750 @ 0x180065750
 * Callers:
 *     sub_1800618A8 @ 0x1800618A8 (sub_1800618A8.c)
 *     sub_180077414 @ 0x180077414 (sub_180077414.c)
 *     sub_18009D25C @ 0x18009D25C (sub_18009D25C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001DE04 @ 0x18001DE04 (sub_18001DE04.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180065750(__int64 a1, __int64 a2, _DWORD *a3, int a4)
{
  __int64 result; // rax
  __int64 *v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  __int64 v13[2]; // [rsp+20h] [rbp-49h] BYREF
  __int128 v14; // [rsp+30h] [rbp-39h] BYREF
  __int128 v15; // [rsp+40h] [rbp-29h]
  __int64 v16; // [rsp+58h] [rbp-11h]
  int v17; // [rsp+60h] [rbp-9h]
  char *v18[2]; // [rsp+68h] [rbp-1h] BYREF
  __m128i si128; // [rsp+78h] [rbp+Fh]

  v16 = a2;
  v17 = a4;
  result = (__int64)sub_18001875C((__int64 *)v18, a2);
  v8 = (__int64 *)(a1 + 1616);
  v9 = *v8;
  v10 = *(_QWORD *)(*v8 + 8);
  *(_QWORD *)&v15 = v10;
LABEL_7:
  DWORD2(v15) = 0;
  while ( !*(_BYTE *)(v10 + 25) )
  {
    *(_QWORD *)&v15 = v10;
    if ( *(_DWORD *)(v10 + 32) < v17
      || *(_DWORD *)(v10 + 32) <= v17 && (result = sub_18001DE04((_QWORD *)(v10 + 40), v18), (_BYTE)result) )
    {
      v10 = *(_QWORD *)(v10 + 16);
      goto LABEL_7;
    }
    DWORD2(v15) = 1;
    v9 = v10;
    v10 = *(_QWORD *)v10;
  }
  if ( *(_BYTE *)(v9 + 25)
    || v17 < *(_DWORD *)(v9 + 32)
    || v17 <= *(_DWORD *)(v9 + 32) && (result = sub_18001DE04(v18, (_QWORD *)(v9 + 40)), (_BYTE)result) )
  {
    if ( v8[1] == 0x2E8BA2E8BA2E8BALL )
      sub_18001F56C();
    v13[0] = *v8;
    *(_QWORD *)&v14 = v8;
    v11 = sub_180011088(0x58uLL);
    *((_QWORD *)&v14 + 1) = v11;
    *(_DWORD *)(v11 + 32) = v17;
    sub_18001875C((__int64 *)(v11 + 40), (__int64)v18);
    *(_QWORD *)(v11 + 72) = 0LL;
    *(_QWORD *)(v11 + 80) = 0LL;
    sub_18001DE7C((__int64 *)v11, v13);
    sub_18001DE7C((__int64 *)(v11 + 8), v13);
    sub_18001DE7C((__int64 *)(v11 + 16), v13);
    *(_WORD *)(v11 + 24) = 0;
    v14 = v15;
    result = sub_18001F31C(v8, (__int64)&v14, v11);
    v9 = result;
  }
  *(_DWORD *)(v9 + 72) = *a3;
  *(_DWORD *)(v9 + 76) = a3[1];
  *(_DWORD *)(v9 + 80) = a3[2];
  *(_DWORD *)(v9 + 84) = a3[3];
  if ( si128.m128i_i64[1] >= 0x10uLL )
    result = sub_180010884(v18[0], si128.m128i_i64[1] + 1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801BD760);
  LOBYTE(v18[0]) = 0;
  v12 = *(_QWORD *)(a2 + 24);
  if ( v12 >= 0x10 )
    result = sub_180010884(*(char **)a2, v12 + 1);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  return result;
}
