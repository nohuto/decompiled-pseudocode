/*
 * XREFs of sub_18003AD18 @ 0x18003AD18
 * Callers:
 *     sub_1800362B0 @ 0x1800362B0 (sub_1800362B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_1800210CC @ 0x1800210CC (sub_1800210CC.c)
 *     sub_1800211B8 @ 0x1800211B8 (sub_1800211B8.c)
 *     sub_180026A18 @ 0x180026A18 (sub_180026A18.c)
 *     sub_180030678 @ 0x180030678 (sub_180030678.c)
 *     sub_180031DF4 @ 0x180031DF4 (sub_180031DF4.c)
 *     sub_180032F84 @ 0x180032F84 (sub_180032F84.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_18003684C @ 0x18003684C (sub_18003684C.c)
 *     sub_180036B84 @ 0x180036B84 (sub_180036B84.c)
 *     sub_180037398 @ 0x180037398 (sub_180037398.c)
 *     sub_180037E18 @ 0x180037E18 (sub_180037E18.c)
 *     sub_180080374 @ 0x180080374 (sub_180080374.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_18003AD18(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  int v7; // ebx
  int v8; // ecx
  float v9; // xmm0_4
  float v10; // xmm1_4
  __int64 v11; // r14
  float v13; // xmm0_4
  __int128 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v15; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v16[8]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v17[2]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v18[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v19[3]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v20[8]; // [rsp+A0h] [rbp-60h] BYREF
  char *v21[3]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v22; // [rsp+F8h] [rbp-8h]

  v15 = 0LL;
  v2 = *(_QWORD *)(a1 + 472);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 472);
  }
  *(_QWORD *)&v15 = *(_QWORD *)(a1 + 464);
  *((_QWORD *)&v15 + 1) = v2;
  sub_1800210CC(
    v20,
    &v15,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    640,
    (__int64)"UpdateFrameTime",
    (__int64)"UpdateFrameTime");
  v21[2] = 0LL;
  v22 = 15LL;
  LOBYTE(v21[0]) = 0;
  sub_180012190((__int64 *)v21, "UpdateFrameTime", 0xFuLL);
  v3 = sub_18003684C(a1, v18);
  v14 = 0LL;
  v4 = v3[1];
  if ( v4 )
  {
    *(_QWORD *)&v14 = *v3;
    *((_QWORD *)&v14 + 1) = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
  }
  sub_180031DF4(v19, &v14, (__int64)v21);
  if ( *((_QWORD *)&v14 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 12LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 8LL))(*((_QWORD *)&v14 + 1));
  }
  sub_180010910((__int64)v18);
  if ( v22 >= 0x10 )
    sub_180010884(v21[0], v22 + 1);
  sub_180036B84((__int64)v17, a1);
  if ( v17[0] )
    v5 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v17[0] + 328LL))(v17[0], v16);
  else
    v5 = 0x8000000000000000uLL;
  v6 = *(_QWORD *)(a1 + 928);
  if ( v6 == 0x8000000000000000uLL || v5 == 0x8000000000000000uLL )
    v7 = 0;
  else
    v7 = v5 - v6;
  v8 = *(_DWORD *)(a1 + 960);
  if ( v8 )
  {
    if ( v8 == 1 )
      *(_DWORD *)(a1 + 936) = *(_DWORD *)(a1 + 956);
  }
  else
  {
    v9 = sub_180030678(v7);
    *(float *)(a1 + 936) = v9;
    v10 = *(float *)(a1 + 952);
    if ( v9 > v10 )
      *(float *)(a1 + 936) = v10;
  }
  v11 = sub_180036808(a1, 1);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v11 + 64LL))(
         v11,
         &qword_1801F8678,
         0LL)
    || (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v11 + 64LL))(
         v11,
         &qword_1801F8798,
         0LL) )
  {
    v13 = sub_180026A18(v7);
    sub_180037E18(a1 + 992, v13);
    sub_180037398();
  }
  *(_QWORD *)(a1 + 928) = v5;
  sub_180080374(a1 + 368);
  sub_180010910((__int64)v17);
  sub_180032F84(v19);
  return sub_1800211B8((__int64)v20);
}
