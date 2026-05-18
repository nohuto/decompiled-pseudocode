/*
 * XREFs of sub_18003678C @ 0x18003678C
 * Callers:
 *     sub_18001568C @ 0x18001568C (sub_18001568C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001D2D8 @ 0x18001D2D8 (sub_18001D2D8.c)
 *     sub_180027C80 @ 0x180027C80 (sub_180027C80.c)
 *     sub_18002D678 @ 0x18002D678 (sub_18002D678.c)
 *     sub_180030A8C @ 0x180030A8C (sub_180030A8C.c)
 *     sub_180030E58 @ 0x180030E58 (sub_180030E58.c)
 *     sub_18003182C @ 0x18003182C (sub_18003182C.c)
 *     sub_18003476C @ 0x18003476C (sub_18003476C.c)
 *     sub_1800DBFC4 @ 0x1800DBFC4 (sub_1800DBFC4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
char __fastcall sub_18003678C(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdx
  __int64 *v4; // rdx
  __int64 v5; // rdi
  void (__fastcall *v6)(__int64, _QWORD *, void **, __m128i *); // rbx
  char result; // al
  const char *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __m128i v12; // [rsp+38h] [rbp-D0h] BYREF
  void *v13; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v14; // [rsp+60h] [rbp-A8h] BYREF
  __m128i si128; // [rsp+70h] [rbp-98h]
  _BYTE v16[32]; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v17[5]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v18[8]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v19[4]; // [rsp+108h] [rbp+0h] BYREF
  __int128 v20; // [rsp+128h] [rbp+20h]
  __m128i v21; // [rsp+138h] [rbp+30h]
  __int64 v22; // [rsp+148h] [rbp+40h] BYREF

  v2 = (_QWORD *)(a1 + 480);
  if ( sub_180011DE0((_QWORD *)(a1 + 480)) )
  {
    sub_1800DBFC4(*v2);
    sub_180027C80((__int64)v16, 1);
    sub_18002D678(v18, v3, (__int64)v16);
    v4 = &qword_1801D3ED8;
    if ( (unsigned __int64)qword_1801D3EF0 >= 0x10 )
      v4 = (__int64 *)qword_1801D3ED8;
    *(_QWORD *)&v14 = 0LL;
    si128 = _mm_load_si128((const __m128i *)&xmmword_18019B7B0);
    if ( v4 != (__int64 *)((char *)v4 + qword_1801D3EE8) )
      sub_180011BA0((void **)&v14, v4, qword_1801D3EE8);
    sub_180010DD0(v19, (__int64)"Hardware Version");
    v20 = v14;
    v21 = si128;
    si128 = _mm_load_si128((const __m128i *)&xmmword_18019B7B0);
    LOBYTE(v14) = 0;
    v12.m128i_i64[0] = (__int64)v18;
    v12.m128i_i64[1] = (__int64)&v22;
    sub_180030E58((__int64 *)&v13, &v12);
    sub_18000B4B0((__int64)v18, 64LL, 2LL);
    sub_180011B24((__int64)&v14);
    sub_180011B24((__int64)v16);
    v5 = *v2;
    v6 = *(void (__fastcall **)(__int64, _QWORD *, void **, __m128i *))(*(_QWORD *)v5 + 40LL);
    sub_180030A8C(v12.m128i_i64);
    sub_180010DD0(v17, (__int64)"Engine Initialized Success");
    v6(v5, v17, &v13, &v12);
    sub_180011B24((__int64)v17);
    sub_18001D2D8((void **)&v12);
    sub_18003182C(&v13);
  }
  result = sub_180011DE0((_QWORD *)(a1 + 496));
  if ( result )
  {
    v8 = sub_18003476C();
    LOBYTE(v10) = 1;
    return (*(__int64 (__fastcall **)(__int64, __int64, char *, const char *))(v9 + 24))(v11, v10, byte_180106082, v8);
  }
  return result;
}
