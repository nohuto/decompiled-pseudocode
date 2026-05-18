/*
 * XREFs of sub_180039234 @ 0x180039234
 * Callers:
 *     sub_1800362B0 @ 0x1800362B0 (sub_1800362B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     sub_1800210CC @ 0x1800210CC (sub_1800210CC.c)
 *     sub_1800211B8 @ 0x1800211B8 (sub_1800211B8.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180031D58 @ 0x180031D58 (sub_180031D58.c)
 *     sub_180031DF4 @ 0x180031DF4 (sub_180031DF4.c)
 *     sub_180032F84 @ 0x180032F84 (sub_180032F84.c)
 *     sub_180035810 @ 0x180035810 (sub_180035810.c)
 *     sub_18003684C @ 0x18003684C (sub_18003684C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_180039234(__int64 a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  char *i; // rbx
  __int128 v7; // [rsp+40h] [rbp-C0h] BYREF
  char *v8; // [rsp+50h] [rbp-B0h] BYREF
  char *v9; // [rsp+58h] [rbp-A8h]
  __int64 v10; // [rsp+60h] [rbp-A0h]
  __int128 v11; // [rsp+68h] [rbp-98h] BYREF
  __int64 v12; // [rsp+78h] [rbp-88h] BYREF
  char v13; // [rsp+80h] [rbp-80h]
  __int64 v14; // [rsp+88h] [rbp-78h] BYREF
  char v15; // [rsp+90h] [rbp-70h]
  _QWORD v16[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v17[3]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v18[8]; // [rsp+C0h] [rbp-40h] BYREF
  char *v19[3]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v20; // [rsp+118h] [rbp+18h]

  v11 = 0LL;
  v2 = *(_QWORD *)(a1 + 472);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 472);
  }
  *(_QWORD *)&v11 = *(_QWORD *)(a1 + 464);
  *((_QWORD *)&v11 + 1) = v2;
  sub_1800210CC(
    v18,
    &v11,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1719,
    (__int64)"RemoveInvalidDevices",
    (__int64)"RemoveInvalidDevices");
  v19[2] = 0LL;
  v20 = 15LL;
  LOBYTE(v19[0]) = 0;
  sub_180012190((__int64 *)v19, "RemoveInvalidDevices", 0x14uLL);
  v3 = sub_18003684C(a1, v16);
  v7 = 0LL;
  v4 = v3[1];
  if ( v4 )
  {
    *(_QWORD *)&v7 = *v3;
    *((_QWORD *)&v7 + 1) = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
  }
  sub_180031DF4(v17, &v7, (__int64)v19);
  if ( *((_QWORD *)&v7 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v7 + 1) + 12LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v7 + 1) + 8LL))(*((_QWORD *)&v7 + 1));
  }
  sub_180010910((__int64)v16);
  if ( v20 >= 0x10 )
    sub_180010884(v19[0], v20 + 1);
  sub_18002C460(a1 + 112, (__int64)&v14);
  sub_180031D58(&v8, (char **)(a1 + 88));
  for ( i = v8; i != v9; i += 16 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)i + 16LL))(*(_QWORD *)i) )
    {
      sub_18001F2B4(&stru_1801EA288, 3, "==============================");
      sub_18001F2B4(&stru_1801EA288, 3, "INVALID RENDER DEVICE DETECTED");
      sub_18002C460(*(_QWORD *)i + 24LL, (__int64)&v12);
      sub_180035810((_QWORD *)a1, (__int64)i);
      sub_18001F2B4(&stru_1801EA288, 3, "==============================");
      if ( v13 )
        j_LanguageEnumProc(v12);
    }
  }
  if ( v8 )
  {
    sub_1800126E8((__int64)v8, (__int64)v9);
    sub_180010884(v8, (v10 - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  if ( v15 )
    j_LanguageEnumProc(v14);
  sub_180032F84(v17);
  return sub_1800211B8((__int64)v18);
}
