/*
 * XREFs of sub_1800362B0 @ 0x1800362B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_1800210CC @ 0x1800210CC (sub_1800210CC.c)
 *     sub_1800211B8 @ 0x1800211B8 (sub_1800211B8.c)
 *     sub_18002C730 @ 0x18002C730 (sub_18002C730.c)
 *     sub_180031DF4 @ 0x180031DF4 (sub_180031DF4.c)
 *     sub_180032F84 @ 0x180032F84 (sub_180032F84.c)
 *     sub_180034AD8 @ 0x180034AD8 (sub_180034AD8.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_18003684C @ 0x18003684C (sub_18003684C.c)
 *     sub_180036948 @ 0x180036948 (sub_180036948.c)
 *     sub_1800369F8 @ 0x1800369F8 (sub_1800369F8.c)
 *     sub_180038EAC @ 0x180038EAC (sub_180038EAC.c)
 *     sub_180039234 @ 0x180039234 (sub_180039234.c)
 *     sub_180039CAC @ 0x180039CAC (sub_180039CAC.c)
 *     sub_180039E5C @ 0x180039E5C (sub_180039E5C.c)
 *     sub_18003AD18 @ 0x18003AD18 (sub_18003AD18.c)
 *     sub_18003B3FC @ 0x18003B3FC (sub_18003B3FC.c)
 *     sub_18003C184 @ 0x18003C184 (sub_18003C184.c)
 *     sub_18003C2F4 @ 0x18003C2F4 (sub_18003C2F4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800362B0(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // eax
  __int128 v10; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v11; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v12[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v13[16]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v14[4]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v15[8]; // [rsp+A0h] [rbp-60h] BYREF
  char *v16[3]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v17; // [rsp+F8h] [rbp-8h]

  sub_18002C730((__int64)(a1 + 1));
  sub_18003C2F4(a1);
  sub_180034AD8((__int64)a1);
  v11 = 0LL;
  v2 = a1[59];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a1[59];
  }
  *(_QWORD *)&v11 = a1[58];
  *((_QWORD *)&v11 + 1) = v2;
  sub_1800210CC(
    v15,
    &v11,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    819,
    (__int64)"FrameTick",
    (__int64)"FrameTick");
  v16[2] = 0LL;
  v17 = 15LL;
  LOBYTE(v16[0]) = 0;
  sub_180012190((__int64 *)v16, "FrameTick", 9uLL);
  v3 = (_QWORD *)sub_18003684C(a1, v13);
  v10 = 0LL;
  v4 = v3[1];
  if ( v4 )
  {
    *(_QWORD *)&v10 = *v3;
    *((_QWORD *)&v10 + 1) = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
  }
  sub_180031DF4(v14, &v10, (__int64)v16);
  if ( *((_QWORD *)&v10 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 12LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v10 + 1) + 8LL))(*((_QWORD *)&v10 + 1));
  }
  sub_180010910((__int64)v13);
  if ( v17 >= 0x10 )
    sub_180010884(v16[0], v17 + 1);
  sub_180038EAC(a1);
  if ( (unsigned int)sub_1800369F8(a1) > 1 )
  {
    sub_180036948(a1, v12, 1LL);
    v6 = v12[0];
    if ( v12[0] )
    {
      v7 = sub_180036808(a1, 1LL);
      v9 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, &qword_1801F8618, v8);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 224LL))(v6, v9);
    }
    sub_180010910((__int64)v12);
    sub_18003C184(a1);
    sub_18003AD18(a1);
    (*(void (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1);
    sub_180039E5C(a1);
    sub_180039CAC(a1);
    sub_180039234(a1);
    sub_180032F84(v14);
    sub_1800211B8((__int64)v15);
    return sub_18003B3FC(a1);
  }
  else
  {
    sub_180032F84(v14);
    return sub_1800211B8((__int64)v15);
  }
}
