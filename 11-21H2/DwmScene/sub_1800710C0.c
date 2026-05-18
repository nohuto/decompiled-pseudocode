/*
 * XREFs of sub_1800710C0 @ 0x1800710C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_1800210CC @ 0x1800210CC (sub_1800210CC.c)
 *     sub_1800211B8 @ 0x1800211B8 (sub_1800211B8.c)
 *     sub_180031DF4 @ 0x180031DF4 (sub_180031DF4.c)
 *     sub_180032F84 @ 0x180032F84 (sub_180032F84.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_18003684C @ 0x18003684C (sub_18003684C.c)
 *     sub_180036AEC @ 0x180036AEC (sub_180036AEC.c)
 *     sub_180037388 @ 0x180037388 (sub_180037388.c)
 *     sub_180057684 @ 0x180057684 (sub_180057684.c)
 *     sub_180069B6C @ 0x180069B6C (sub_180069B6C.c)
 *     sub_180071A08 @ 0x180071A08 (sub_180071A08.c)
 *     sub_180073DCC @ 0x180073DCC (sub_180073DCC.c)
 *     sub_1800747C4 @ 0x1800747C4 (sub_1800747C4.c)
 *     sub_180076154 @ 0x180076154 (sub_180076154.c)
 *     sub_180077414 @ 0x180077414 (sub_180077414.c)
 *     sub_1800782C4 @ 0x1800782C4 (sub_1800782C4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_1800710C0(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  char v14; // al
  char v15; // bl
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 *v18; // rax
  __int64 v19; // r8
  __int64 *v20; // rax
  __int64 v21; // r8
  unsigned int v22; // eax
  __int128 v24; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v28[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v29[3]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v30[4]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v31[5]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v32[8]; // [rsp+F0h] [rbp-10h] BYREF
  char *v33[3]; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int64 v34; // [rsp+148h] [rbp+48h]

  v25 = 0LL;
  v8 = *(_QWORD *)(a1 + 472);
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = *(_QWORD *)(a1 + 472);
  }
  *(_QWORD *)&v25 = *(_QWORD *)(a1 + 464);
  *((_QWORD *)&v25 + 1) = v8;
  sub_1800210CC(
    v32,
    &v25,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\viewerengine.cpp",
    1570,
    (__int64)"PreRenderScene",
    (__int64)"PreRenderScene");
  v33[2] = 0LL;
  v34 = 15LL;
  LOBYTE(v33[0]) = 0;
  sub_180012190((__int64 *)v33, "PreRenderScene", 0xEuLL);
  v9 = sub_18003684C(a1, v28);
  v24 = 0LL;
  v10 = v9[1];
  if ( v10 )
  {
    *(_QWORD *)&v24 = *v9;
    *((_QWORD *)&v24 + 1) = v10;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 12));
  }
  sub_180031DF4(v29, &v24, (__int64)v33);
  if ( *((_QWORD *)&v24 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v24 + 1) + 12LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v24 + 1) + 8LL))(*((_QWORD *)&v24 + 1));
  }
  sub_180010910((__int64)v28);
  if ( v34 >= 0x10 )
    sub_180010884(v33[0], v34 + 1);
  v11 = sub_180036808(a1, *(_DWORD *)(*(_QWORD *)a2 + 112LL));
  sub_1800782C4(v12, *a3, *a4, v11);
  LOBYTE(v13) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v11 + 64LL))(v11, &qword_1801FA9F8, v13);
  v15 = v14;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 88LL))(v11, &qword_1801FAA18);
  LOBYTE(v16) = v15;
  sub_180071A08(a1, a2, v16);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 120LL))(*a3);
  *(_BYTE *)(a1 + 1457) = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v11 + 64LL))(
                            v11,
                            &qword_1801FA9B8,
                            0LL);
  sub_1800747C4(a1);
  sub_180073DCC(a1, *a4, *(unsigned int *)(*(_QWORD *)a2 + 112LL));
  sub_180076154(a1, a3, a4, a2);
  v17 = sub_180037388(a1);
  v18 = sub_18001875C(v30, (__int64)&qword_1801F5E58);
  sub_180057684(v17, v27, (char **)v18);
  LOBYTE(v19) = *(_BYTE *)(a1 + 1457);
  sub_180069B6C(v27[0], &qword_1801F5B98, v19);
  v20 = sub_18001875C(v31, (__int64)&qword_1801F63D8);
  sub_180057684(v17, v26, (char **)v20);
  LOBYTE(v21) = *(_BYTE *)(a1 + 1457);
  sub_180069B6C(v26[0], &qword_1801F5B98, v21);
  v22 = sub_180036AEC(a1, a3);
  sub_180077414(a1, a2, v22, a4);
  sub_180010910((__int64)v26);
  sub_180010910((__int64)v27);
  sub_180032F84(v29);
  return sub_1800211B8((__int64)v32);
}
