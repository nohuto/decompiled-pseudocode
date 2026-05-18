/*
 * XREFs of sub_180039CAC @ 0x180039CAC
 * Callers:
 *     sub_1800362B0 @ 0x1800362B0 (sub_1800362B0.c)
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
 *     sub_180037F5C @ 0x180037F5C (sub_180037F5C.c)
 *     sub_18005F350 @ 0x18005F350 (sub_18005F350.c)
 *     sub_18005F5D4 @ 0x18005F5D4 (sub_18005F5D4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180039CAC(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rdi
  _QWORD *i; // rbx
  __int128 v8; // [rsp+48h] [rbp-69h] BYREF
  __int128 v9; // [rsp+58h] [rbp-59h] BYREF
  _QWORD v10[2]; // [rsp+68h] [rbp-49h] BYREF
  __int64 v11[4]; // [rsp+78h] [rbp-39h] BYREF
  _QWORD v12[8]; // [rsp+98h] [rbp-19h] BYREF
  char *v13[3]; // [rsp+D8h] [rbp+27h] BYREF
  unsigned __int64 v14; // [rsp+F0h] [rbp+3Fh]

  v9 = 0LL;
  v2 = a1[59];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a1[59];
  }
  *(_QWORD *)&v9 = a1[58];
  *((_QWORD *)&v9 + 1) = v2;
  sub_1800210CC(
    v12,
    &v9,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    898,
    (__int64)"RenderDisplays",
    (__int64)"RenderDisplays");
  v13[2] = 0LL;
  v14 = 15LL;
  LOBYTE(v13[0]) = 0;
  sub_180012190((__int64 *)v13, "RenderDisplays", 0xEuLL);
  v3 = sub_18003684C((__int64)a1, v10);
  v8 = 0LL;
  v4 = v3[1];
  if ( v4 )
  {
    *(_QWORD *)&v8 = *v3;
    *((_QWORD *)&v8 + 1) = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
  }
  sub_180031DF4(v11, &v8, (__int64)v13);
  if ( *((_QWORD *)&v8 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v8 + 1) + 12LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v8 + 1) + 8LL))(*((_QWORD *)&v8 + 1));
  }
  sub_180010910((__int64)v10);
  if ( v14 >= 0x10 )
    sub_180010884(v13[0], v14 + 1);
  v5 = (_QWORD *)a1[21];
  for ( i = (_QWORD *)*v5; i != v5; i = (_QWORD *)*i )
  {
    if ( (unsigned int)sub_18005F350(i[2]) == 1 )
      sub_18005F5D4(i[2]);
  }
  sub_180037F5C((__int64)a1);
  sub_180032F84(v11);
  return sub_1800211B8((__int64)v12);
}
