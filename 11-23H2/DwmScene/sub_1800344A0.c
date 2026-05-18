/*
 * XREFs of sub_1800344A0 @ 0x1800344A0
 * Callers:
 *     sub_18001568C @ 0x18001568C (sub_18001568C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18001E768 @ 0x18001E768 (sub_18001E768.c)
 *     sub_18001E804 @ 0x18001E804 (sub_18001E804.c)
 *     sub_18001F880 @ 0x18001F880 (sub_18001F880.c)
 *     sub_1800265F0 @ 0x1800265F0 (sub_1800265F0.c)
 *     sub_180026628 @ 0x180026628 (sub_180026628.c)
 *     sub_180026670 @ 0x180026670 (sub_180026670.c)
 *     sub_180029FA0 @ 0x180029FA0 (sub_180029FA0.c)
 *     sub_18002A244 @ 0x18002A244 (sub_18002A244.c)
 *     sub_18002D850 @ 0x18002D850 (sub_18002D850.c)
 *     sub_18002DAC0 @ 0x18002DAC0 (sub_18002DAC0.c)
 *     sub_180030D24 @ 0x180030D24 (sub_180030D24.c)
 *     sub_1800317EC @ 0x1800317EC (sub_1800317EC.c)
 *     sub_1800321F8 @ 0x1800321F8 (sub_1800321F8.c)
 *     sub_1800341C8 @ 0x1800341C8 (sub_1800341C8.c)
 *     sub_180034264 @ 0x180034264 (sub_180034264.c)
 *     sub_180038328 @ 0x180038328 (sub_180038328.c)
 *     sub_180038BBC @ 0x180038BBC (sub_180038BBC.c)
 *     __RTDynamicCast @ 0x1800E3960 (__RTDynamicCast.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800344A0(__int64 a1, __int64 a2)
{
  unsigned int i; // esi
  _QWORD *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rax
  char *v13; // rbx
  char *v14; // rsi
  __int64 v15; // rdx
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  const void *v18; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-B8h]
  _BYTE v20[24]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v21[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v22[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v23[232]; // [rsp+88h] [rbp-78h] BYREF
  char v24[16]; // [rsp+170h] [rbp+70h] BYREF
  __m128i si128; // [rsp+180h] [rbp+80h]
  _QWORD v26[4]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v27[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  _QWORD v28[4]; // [rsp+1D0h] [rbp+D0h] BYREF

  v17 = a2;
  sub_180030D24((__int64)v21);
  sub_18002A244(a1 + 112, (__int64)v20);
  for ( i = 0; i < (unsigned int)sub_180034264(a1); ++i )
  {
    sub_1800341C8(a1, &v18, i);
    if ( !_RTDynamicCast(
            v18,
            0LL,
            &Spectre::Engine::RenderDevice `RTTI Type Descriptor',
            &Spectre::Engine::RenderDeviceGeneric `RTTI Type Descriptor',
            0) )
    {
      v5 = sub_1800265F0((__int64)v18, v28);
      v6 = sub_18002DAC0((__int64)v22, v5);
      v7 = sub_18002D850(v6, ": Hardware Feature Level ");
      v8 = sub_180026670((__int64)v18, v27);
      v9 = sub_18002DAC0(v7, v8);
      v10 = sub_18002D850(v9, ", Engine Feature Level ");
      v11 = sub_180026628((__int64)v18, v26);
      v12 = sub_18002DAC0(v10, v11);
      sub_18002D850(v12, "; ");
      sub_180013348((__int64)v26);
      sub_180013348((__int64)v27);
      sub_180013348((__int64)v28);
    }
    if ( v19 )
      sub_180010530(v19);
  }
  *(_QWORD *)v24 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18019B7A0);
  sub_180038328(v23, &v18);
  if ( v18 )
    sub_18001E768(v24, v18, v19);
  v13 = (char *)*sub_18001F880(v24, &v18);
  v14 = v24;
  if ( si128.m128i_i64[1] >= 8uLL )
    v14 = *(char **)v24;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  sub_180038BBC(a2, (v13 - v14) >> 1);
  v17 = a2;
  while ( v14 != v13 )
  {
    LOBYTE(v15) = *v14;
    sub_18001E804((void **)a2, v15);
    v14 += 2;
  }
  v17 = 0LL;
  sub_1800317EC(&v17);
  sub_180013348((__int64)v24);
  sub_180029FA0((__int64)v20);
  sub_1800321F8((__int64)v21);
  return a2;
}
