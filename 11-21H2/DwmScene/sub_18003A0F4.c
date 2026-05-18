/*
 * XREFs of sub_18003A0F4 @ 0x18003A0F4
 * Callers:
 *     sub_180016260 @ 0x180016260 (sub_180016260.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18001E758 @ 0x18001E758 (sub_18001E758.c)
 *     sub_18001FB60 @ 0x18001FB60 (sub_18001FB60.c)
 *     sub_180029A18 @ 0x180029A18 (sub_180029A18.c)
 *     sub_180030CC8 @ 0x180030CC8 (sub_180030CC8.c)
 *     sub_180031BB8 @ 0x180031BB8 (sub_180031BB8.c)
 *     sub_180037278 @ 0x180037278 (sub_180037278.c)
 *     sub_1800F5E8C @ 0x1800F5E8C (sub_1800F5E8C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
char __fastcall sub_18003A0F4(__int64 a1)
{
  _QWORD *v2; // rdi
  __int128 *v3; // rcx
  __int64 v4; // r10
  _BYTE *v5; // rax
  _BYTE *v6; // r11
  __int64 v7; // rdi
  void (__fastcall *v8)(__int64, __int128 *, char ***, __m128i *); // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r8
  char result; // al
  const char *v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *v17; // [rsp+38h] [rbp-D0h] BYREF
  __m128i v18; // [rsp+48h] [rbp-C0h] BYREF
  char **v19; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v20; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v21; // [rsp+78h] [rbp-90h]
  __int128 v22; // [rsp+88h] [rbp-80h] BYREF
  __int128 v23; // [rsp+98h] [rbp-70h]
  __int64 v24[2]; // [rsp+A8h] [rbp-60h] BYREF
  __m128i si128; // [rsp+B8h] [rbp-50h]
  __int128 v26; // [rsp+C8h] [rbp-40h]
  __int128 v27; // [rsp+D8h] [rbp-30h]
  __int64 v28; // [rsp+E8h] [rbp-20h] BYREF
  __m128i v29; // [rsp+F8h] [rbp-10h]
  __int128 v30; // [rsp+108h] [rbp+0h]
  __int128 v31; // [rsp+118h] [rbp+10h]
  __int64 v32; // [rsp+128h] [rbp+20h] BYREF

  v2 = (_QWORD *)(a1 + 480);
  if ( sub_1800122C0((_QWORD *)(a1 + 480)) )
  {
    sub_1800F5E8C(*v2);
    sub_180029A18((__int64 *)&v22, 1);
    si128 = _mm_load_si128((const __m128i *)&xmmword_1801BD760);
    LOBYTE(v24[0]) = 0;
    sub_180012190(v24, "Integer Result Code", 0x13uLL);
    v26 = v22;
    v27 = v23;
    *(_QWORD *)&v23 = 0LL;
    *((_QWORD *)&v23 + 1) = 15LL;
    LOBYTE(v22) = 0;
    v3 = &xmmword_1801F4BD8;
    if ( *((_QWORD *)&xmmword_1801F4BE8 + 1) >= 0x10uLL )
      v3 = (__int128 *)xmmword_1801F4BD8;
    sub_18001FB60((__int64)v3);
    if ( *((_QWORD *)&xmmword_1801F4BE8 + 1) >= 0x10uLL )
      v4 = xmmword_1801F4BD8;
    v5 = (_BYTE *)sub_18001FB60(v4);
    *(_QWORD *)&v21 = 0LL;
    *((_QWORD *)&v21 + 1) = 15LL;
    LOBYTE(v20) = 0;
    if ( v5 != v6 )
      sub_180012190((__int64 *)&v20, v5, v6 - v5);
    v29 = _mm_load_si128((const __m128i *)&xmmword_1801BD760);
    LOBYTE(v28) = 0;
    sub_180012190(&v28, "Hardware Version", 0x10uLL);
    v30 = v20;
    v31 = v21;
    *(_QWORD *)&v21 = 0LL;
    *((_QWORD *)&v21 + 1) = 15LL;
    LOBYTE(v20) = 0;
    v18.m128i_i64[0] = (__int64)v24;
    v18.m128i_i64[1] = (__int64)&v32;
    sub_180031BB8((__int64)&v19, &v18);
    sub_18000B4C0((__int64)v24, 64LL, 2LL);
    v7 = *v2;
    v8 = *(void (__fastcall **)(__int64, __int128 *, char ***, __m128i *))(*(_QWORD *)v7 + 40LL);
    v18 = 0LL;
    v17 = (__int64 *)sub_180011088(0x48uLL);
    sub_18001DE8C(v17, (__int64 *)&v17);
    sub_18001DE8C((__int64 *)(v9 + 8), (__int64 *)&v17);
    sub_18001DE8C((__int64 *)(v10 + 16), (__int64 *)&v17);
    *(_WORD *)(v11 + 24) = 257;
    v18.m128i_i64[0] = v11;
    *(_QWORD *)&v21 = 0LL;
    *((_QWORD *)&v21 + 1) = 15LL;
    LOBYTE(v20) = 0;
    sub_180012190((__int64 *)&v20, "Engine Initialized Success", 0x1AuLL);
    v8(v7, &v20, &v19, &v18);
    if ( *((_QWORD *)&v21 + 1) >= 0x10uLL )
      sub_180010884((char *)v20, *((_QWORD *)&v21 + 1) + 1LL);
    *(_QWORD *)&v21 = 0LL;
    *((_QWORD *)&v21 + 1) = 15LL;
    LOBYTE(v20) = 0;
    sub_18001E758(v18.m128i_i64);
    sub_180030CC8((__int64)&v19, (__int64)&v19, v19[1]);
    sub_180010884((char *)v19, 0x60uLL);
  }
  result = sub_1800122C0((_QWORD *)(a1 + 496));
  if ( result )
  {
    v13 = sub_180037278();
    LOBYTE(v15) = 1;
    return (*(__int64 (__fastcall **)(__int64, __int64, char *, const char *))(v14 + 24))(v16, v15, byte_180128042, v13);
  }
  return result;
}
