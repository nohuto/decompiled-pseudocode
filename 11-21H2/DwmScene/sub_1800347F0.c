/*
 * XREFs of sub_1800347F0 @ 0x1800347F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_180026948 @ 0x180026948 (sub_180026948.c)
 *     sub_18002C3FC @ 0x18002C3FC (sub_18002C3FC.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180030794 @ 0x180030794 (sub_180030794.c)
 *     sub_180031758 @ 0x180031758 (sub_180031758.c)
 *     sub_18003460C @ 0x18003460C (sub_18003460C.c)
 *     sub_18003FE40 @ 0x18003FE40 (sub_18003FE40.c)
 *     sub_180040B04 @ 0x180040B04 (sub_180040B04.c)
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 *     sub_180045304 @ 0x180045304 (sub_180045304.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall sub_1800347F0(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  __m128i v9; // xmm6
  __int64 v10; // rdx
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  __int64 v13; // rax
  __int64 v14; // rbx
  void **v15; // rdx
  unsigned __int64 v16; // xmm1_8
  __int64 result; // rax
  __m128i v18; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v19; // [rsp+48h] [rbp-C0h] BYREF
  __m128i v20; // [rsp+58h] [rbp-B0h] BYREF
  __m128i v21; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v22[2]; // [rsp+78h] [rbp-90h] BYREF
  __m128i v23; // [rsp+88h] [rbp-80h] BYREF
  __int64 v24; // [rsp+98h] [rbp-70h] BYREF
  char v25; // [rsp+A0h] [rbp-68h]
  _QWORD v26[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v27[4]; // [rsp+B8h] [rbp-50h] BYREF
  void *Src[2]; // [rsp+D8h] [rbp-30h] BYREF
  size_t Size; // [rsp+E8h] [rbp-20h]
  unsigned __int64 v30; // [rsp+F0h] [rbp-18h]
  char *v31[3]; // [rsp+F8h] [rbp-10h] BYREF
  unsigned __int64 v32; // [rsp+110h] [rbp+8h]

  sub_18002C3FC(*a2 + 16, (__int64)&v24);
  v4 = *a2;
  v5 = sub_1800129F4(v27, (__int64)&qword_1801F8078);
  v31[2] = 0LL;
  v32 = 15LL;
  LOBYTE(v31[0]) = 0;
  sub_180012190((__int64 *)v31, "DefaultCamera", 0xDuLL);
  v6 = sub_180040B04(v31);
  sub_180045304(v4, v22, v6, v5, v27);
  if ( v32 >= 0x10 )
    sub_180010884(v31[0], v32 + 1);
  v7 = v22[0];
  sub_1800436D4(v22[0]);
  v8 = *sub_180026948(v7, v26);
  sub_180010910((__int64)v26);
  if ( v8 )
  {
    v9 = 0LL;
    v21 = 0LL;
  }
  else
  {
    v19 = 0LL;
    v10 = *(_QWORD *)(v7 + 16);
    if ( !v10 )
LABEL_27:
      sub_1800120F4();
    v11 = *(_DWORD *)(v10 + 8);
    do
    {
      if ( !v11 )
        goto LABEL_27;
      v12 = v11;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11);
    }
    while ( v12 != v11 );
    v19 = *(_OWORD *)(v7 + 8);
    v13 = sub_18001D684();
    v14 = v13;
    if ( v13 )
    {
      *(_OWORD *)v13 = 0LL;
      *(_DWORD *)(v13 + 8) = 1;
      *(_DWORD *)(v13 + 12) = 1;
      *(_QWORD *)v13 = &std::_Ref_count_obj2<Spectre::Engine::Camera>::`vftable';
      sub_180030794(v13 + 16, (__int64 *)&v19);
    }
    else
    {
      v14 = 0LL;
    }
    v18 = 0LL;
    sub_180031758(&v18, v14 + 16, v14);
    sub_180010910((__int64)&v19);
    if ( v18.m128i_i64[1] )
      _InterlockedIncrement((volatile signed __int32 *)(v18.m128i_i64[1] + 8));
    v9 = _mm_load_si128(&v18);
    v23 = v9;
    sub_18003FE40(v22[0], &v23);
    sub_180010910((__int64)&v23);
    v21 = v9;
    v18 = 0LL;
    sub_180010910((__int64)&v18);
  }
  Size = 0LL;
  v30 = 15LL;
  LOBYTE(Src[0]) = 0;
  sub_180012190((__int64 *)Src, "DefaultCamera", 0xDuLL);
  if ( (void **)(v9.m128i_i64[0] + 24) != Src )
  {
    v15 = Src;
    if ( v30 >= 0x10 )
      v15 = (void **)Src[0];
    sub_180012190((__int64 *)(v9.m128i_i64[0] + 24), v15, Size);
  }
  if ( v30 >= 0x10 )
    sub_180010884((char *)Src[0], v30 + 1);
  *(_BYTE *)(v9.m128i_i64[0] + 72) = 0;
  v20 = 0LL;
  v16 = _mm_srli_si128(v9, 8).m128i_u64[0];
  if ( v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    v9 = _mm_load_si128(&v21);
  }
  v20 = v9;
  sub_18003460C(a1, v20.m128i_i64);
  sub_180010910((__int64)&v21);
  result = sub_180010910((__int64)v22);
  if ( v25 )
    return j_LanguageEnumProc(v24);
  return result;
}
