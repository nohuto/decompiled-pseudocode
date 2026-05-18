/*
 * XREFs of sub_180070B80 @ 0x180070B80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_1800210CC @ 0x1800210CC (sub_1800210CC.c)
 *     sub_1800211B8 @ 0x1800211B8 (sub_1800211B8.c)
 *     sub_180031DF4 @ 0x180031DF4 (sub_180031DF4.c)
 *     sub_180032F84 @ 0x180032F84 (sub_180032F84.c)
 *     sub_18003684C @ 0x18003684C (sub_18003684C.c)
 *     sub_1800385C0 @ 0x1800385C0 (sub_1800385C0.c)
 *     sub_18006CDA0 @ 0x18006CDA0 (sub_18006CDA0.c)
 *     sub_180076154 @ 0x180076154 (sub_180076154.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180070B80(_QWORD *a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int128 v12; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v13; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v14[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v15[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v16[8]; // [rsp+90h] [rbp-70h] BYREF
  char *v17[3]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v18; // [rsp+E8h] [rbp-18h]

  v13 = 0LL;
  v8 = a1[59];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a1[59];
  }
  *(_QWORD *)&v13 = a1[58];
  *((_QWORD *)&v13 + 1) = v8;
  sub_1800210CC(
    v16,
    &v13,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\viewerengine.cpp",
    1484,
    (__int64)"PostRenderScene",
    (__int64)"PostRenderScene");
  v17[2] = 0LL;
  v18 = 15LL;
  LOBYTE(v17[0]) = 0;
  sub_180012190((__int64 *)v17, "PostRenderScene", 0xFuLL);
  v9 = sub_18003684C((__int64)a1, v14);
  v12 = 0LL;
  v10 = v9[1];
  if ( v10 )
  {
    *(_QWORD *)&v12 = *v9;
    *((_QWORD *)&v12 + 1) = v10;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 12));
  }
  sub_180031DF4(v15, &v12, (__int64)v17);
  if ( *((_QWORD *)&v12 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 12LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v12 + 1) + 8LL))(*((_QWORD *)&v12 + 1));
  }
  sub_180010910((__int64)v14);
  if ( v18 >= 0x10 )
    sub_180010884(v17[0], v18 + 1);
  sub_1800385C0(a1, a2, a3, a4);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 280LL))(*a4) )
  {
    sub_180076154(a1, a3, a4, a2);
    sub_18006CDA0((__int64)a1, a2, a3, a4);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)*a3 + 128LL))(*a3);
  sub_180032F84(v15);
  return sub_1800211B8((__int64)v16);
}
