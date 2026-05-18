/*
 * XREFs of sub_1800D41F0 @ 0x1800D41F0
 * Callers:
 *     sub_1800D43D0 @ 0x1800D43D0 (sub_1800D43D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001C680 @ 0x18001C680 (sub_18001C680.c)
 *     sub_18001DE60 @ 0x18001DE60 (sub_18001DE60.c)
 *     sub_180051F00 @ 0x180051F00 (sub_180051F00.c)
 *     sub_1800D38EC @ 0x1800D38EC (sub_1800D38EC.c)
 *     sub_1800D4554 @ 0x1800D4554 (sub_1800D4554.c)
 *     sub_1800D45E8 @ 0x1800D45E8 (sub_1800D45E8.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_1800D41F0(_QWORD *a1, __int64 **a2)
{
  _OWORD *v4; // r14
  unsigned __int64 v5; // rdx
  __int64 *v6; // rbx
  __int64 *v7; // r15
  _OWORD *v8; // rdi
  __int64 *v9; // rax
  char *v10; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  __int128 v14; // [rsp+20h] [rbp-39h] BYREF
  _OWORD *v15; // [rsp+30h] [rbp-29h]
  _QWORD *v16; // [rsp+40h] [rbp-19h]
  __int128 v17; // [rsp+48h] [rbp-11h] BYREF
  __int128 v18; // [rsp+58h] [rbp-1h]
  void *Src[2]; // [rsp+68h] [rbp+Fh] BYREF
  __m128i si128; // [rsp+78h] [rbp+1Fh]

  v16 = a1;
  v14 = 0LL;
  v4 = 0LL;
  v15 = 0LL;
  v5 = 0xAAAAAAAAAAAAAAABuLL * (((char *)a2[1] - (char *)*a2) >> 4);
  if ( v5 )
  {
    if ( v5 > 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    sub_1800D45E8(&v14);
    v4 = v15;
  }
  Src[0] = 0LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18019B7B0);
  v6 = *a2;
  v7 = a2[1];
  v8 = (_OWORD *)*((_QWORD *)&v14 + 1);
  while ( v6 != v7 )
  {
    v9 = v6;
    if ( (unsigned __int64)v6[3] >= 0x10 )
      v9 = (__int64 *)*v6;
    *(_QWORD *)&v17 = v9;
    DWORD2(v17) = *((_DWORD *)v6 + 8);
    HIDWORD(v17) = sub_1800D4554(*((unsigned int *)v6 + 9), *((unsigned __int8 *)v6 + 40));
    v18 = *((unsigned int *)v6 + 11);
    if ( v8 == v4 )
    {
      sub_1800D38EC((__int64 *)&v14, (__int64)v8, &v17);
      v4 = v15;
      v8 = (_OWORD *)*((_QWORD *)&v14 + 1);
    }
    else
    {
      *v8 = v17;
      v8[1] = v18;
      v8 += 2;
      *((_QWORD *)&v14 + 1) = v8;
    }
    v10 = sub_18001C680((char *)&v17, v6, byte_180115388);
    v11 = *((_QWORD *)v10 + 2);
    if ( *((_QWORD *)v10 + 3) >= 0x10uLL )
      v10 = *(char **)v10;
    sub_18001DE60(Src, v10, v11);
    sub_180011B24((__int64)&v17);
    v6 += 6;
  }
  v15 = 0LL;
  v12 = v14;
  v14 = 0uLL;
  *a1 = v12;
  a1[1] = v8;
  a1[2] = v4;
  sub_180017648(a1 + 3, (__int64)Src);
  sub_180011B24((__int64)Src);
  sub_180051F00((__int64)&v14);
  return a1;
}
