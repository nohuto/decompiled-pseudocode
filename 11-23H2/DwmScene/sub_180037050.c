/*
 * XREFs of sub_180037050 @ 0x180037050
 * Callers:
 *     sub_180033CA0 @ 0x180033CA0 (sub_180033CA0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_18001FD9C @ 0x18001FD9C (sub_18001FD9C.c)
 *     sub_18001FEA4 @ 0x18001FEA4 (sub_18001FEA4.c)
 *     sub_180024BC0 @ 0x180024BC0 (sub_180024BC0.c)
 *     sub_18002E080 @ 0x18002E080 (sub_18002E080.c)
 *     sub_180030FD4 @ 0x180030FD4 (sub_180030FD4.c)
 *     sub_180031CF0 @ 0x180031CF0 (sub_180031CF0.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_1800340DC @ 0x1800340DC (sub_1800340DC.c)
 *     sub_18003439C @ 0x18003439C (sub_18003439C.c)
 *     sub_180034880 @ 0x180034880 (sub_180034880.c)
 *     sub_1800744C0 @ 0x1800744C0 (sub_1800744C0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_180037050(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  int v6; // ebx
  int v7; // ecx
  float v8; // xmm0_4
  float v9; // xmm1_4
  __int64 v10; // r14
  unsigned int v12; // eax
  __int64 v13; // [rsp+40h] [rbp-79h] BYREF
  volatile signed __int32 *v14; // [rsp+48h] [rbp-71h]
  __int64 v15; // [rsp+50h] [rbp-69h] BYREF
  __int64 v16; // [rsp+58h] [rbp-61h]
  __int64 v17; // [rsp+60h] [rbp-59h] BYREF
  __int64 v18; // [rsp+68h] [rbp-51h]
  __int64 v19[4]; // [rsp+70h] [rbp-49h] BYREF
  _QWORD v20[8]; // [rsp+90h] [rbp-29h] BYREF
  _QWORD v21[4]; // [rsp+D0h] [rbp+17h] BYREF

  v2 = sub_18001246C(&v15, (_QWORD *)(a1 + 464));
  sub_18001FD9C(
    v20,
    v2,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    640,
    (__int64)"UpdateFrameTime",
    (__int64)"UpdateFrameTime");
  sub_180010DD0(v21, (__int64)"UpdateFrameTime");
  v3 = sub_1800340DC(a1, &v17);
  sub_180015604(&v13, v3);
  sub_180030FD4(v19, (__int64)&v13);
  if ( v14 )
    sub_180010574(v14);
  if ( v18 )
    sub_180010530(v18);
  sub_180011B24((__int64)v21);
  sub_18003439C((__int64)&v15, a1);
  if ( v15 )
    v4 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 328LL))(v15, &v13);
  else
    v4 = 0x8000000000000000uLL;
  v5 = *(_QWORD *)(a1 + 928);
  if ( v5 == 0x8000000000000000uLL || v4 == 0x8000000000000000uLL )
    v6 = 0;
  else
    v6 = v4 - v5;
  v7 = *(_DWORD *)(a1 + 960);
  if ( v7 )
  {
    if ( v7 == 1 )
      *(_DWORD *)(a1 + 936) = *(_DWORD *)(a1 + 956);
  }
  else
  {
    v8 = sub_18002E080(v6);
    *(float *)(a1 + 936) = v8;
    v9 = *(float *)(a1 + 952);
    if ( v8 > v9 )
      *(float *)(a1 + 936) = v9;
  }
  v10 = sub_180034094(a1, 1);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801D4608, 0LL)
    || (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801D4728, 0LL) )
  {
    *(float *)(a1 + 4LL * *(unsigned int *)(a1 + 1072) + 992) = sub_180024BC0(v6);
    *(_DWORD *)(a1 + 1072) = (*(_DWORD *)(a1 + 1072) + 1) % 0x14u;
    v12 = *(_DWORD *)(a1 + 1076) + 1;
    if ( v12 > 0x14 )
      v12 = 20;
    *(_DWORD *)(a1 + 1076) = v12;
    sub_180034880();
  }
  *(_QWORD *)(a1 + 928) = v4;
  sub_1800744C0(a1 + 368);
  if ( v16 )
    sub_180010530(v16);
  sub_180031CF0((__int64)v19);
  return sub_18001FEA4((__int64)v20);
}
