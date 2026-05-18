/*
 * XREFs of sub_180031048 @ 0x180031048
 * Callers:
 *     sub_180063DC8 @ 0x180063DC8 (sub_180063DC8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011CA0 @ 0x180011CA0 (sub_180011CA0.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180029F5C @ 0x180029F5C (sub_180029F5C.c)
 *     sub_18002D5E4 @ 0x18002D5E4 (sub_18002D5E4.c)
 *     sub_1800305EC @ 0x1800305EC (sub_1800305EC.c)
 *     sub_180030980 @ 0x180030980 (sub_180030980.c)
 *     sub_1800314DC @ 0x1800314DC (sub_1800314DC.c)
 *     sub_18003155C @ 0x18003155C (sub_18003155C.c)
 *     sub_1800315AC @ 0x1800315AC (sub_1800315AC.c)
 *     sub_18003160C @ 0x18003160C (sub_18003160C.c)
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 *     sub_180050A68 @ 0x180050A68 (sub_180050A68.c)
 *     sub_1800743F0 @ 0x1800743F0 (sub_1800743F0.c)
 */

// Hidden C++ exception states: #wind=33
__int64 __fastcall sub_180031048(__int64 a1, int a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // rax
  HANDLE CurrentProcess; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD v23[5]; // [rsp+20h] [rbp-81h] BYREF
  __int64 v24; // [rsp+48h] [rbp-59h] BYREF
  __int64 v25; // [rsp+50h] [rbp-51h]
  PROCESS_MEMORY_COUNTERS ppsmemCounters; // [rsp+60h] [rbp-41h] BYREF

  v23[1] = a1;
  v23[2] = a3;
  v23[3] = a4;
  v23[4] = a5;
  sub_180029F5C(a1 + 8, a2);
  *(_QWORD *)a1 = &Spectre::Engine::Engine::`vftable';
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  sub_180029F5C(a1 + 112, a2);
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  v9 = (_QWORD *)sub_18001090C(0x20uLL);
  *v9 = v9;
  v9[1] = v9;
  *(_QWORD *)(a1 + 168) = v9;
  v23[0] = a1 + 184;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  v10 = sub_18001090C(0x40uLL);
  *(_QWORD *)v10 = v10;
  *(_QWORD *)(v10 + 8) = v10;
  *(_QWORD *)(v10 + 16) = v10;
  *(_WORD *)(v10 + 24) = 257;
  *(_QWORD *)(a1 + 184) = v10;
  sub_1800315AC(a1 + 200);
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  sub_180029F5C(a1 + 312, a2);
  sub_1800743F0(a1 + 368);
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 464) = *a3;
  *(_QWORD *)(a1 + 472) = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 480) = *a4;
  *(_QWORD *)(a1 + 488) = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 496) = *a5;
  *(_QWORD *)(a1 + 504) = a5[1];
  *a5 = 0LL;
  a5[1] = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  sub_1800314DC(a1 + 528);
  *(_DWORD *)(a1 + 696) = v11;
  *(_QWORD *)(a1 + 704) = v11;
  *(_QWORD *)(a1 + 712) = v11;
  *(_QWORD *)(a1 + 720) = v11;
  v23[0] = a1 + 728;
  *(_QWORD *)(a1 + 728) = v11;
  *(_QWORD *)(a1 + 736) = v11;
  v12 = sub_18001C190();
  *(_QWORD *)v12 = v12;
  *(_QWORD *)(v12 + 8) = v12;
  *(_QWORD *)(v12 + 16) = v12;
  *(_WORD *)(v12 + 24) = 257;
  *(_QWORD *)(a1 + 728) = v12;
  *(_BYTE *)(a1 + 744) = 1;
  *(_OWORD *)(a1 + 748) = 0LL;
  *(_OWORD *)(a1 + 764) = 0LL;
  *(_OWORD *)(a1 + 780) = 0LL;
  *(_QWORD *)(a1 + 796) = 0LL;
  *(_DWORD *)(a1 + 804) = 0;
  sub_180029F5C(a1 + 808, a2);
  *(_QWORD *)(a1 + 864) = 0LL;
  *(_QWORD *)(a1 + 872) = 0LL;
  *(_QWORD *)(a1 + 880) = 0LL;
  *(_QWORD *)(a1 + 888) = 0LL;
  *(_QWORD *)(a1 + 896) = 0LL;
  *(_QWORD *)(a1 + 904) = 0LL;
  *(_QWORD *)(a1 + 912) = 0LL;
  *(_QWORD *)(a1 + 920) = 0LL;
  *(_QWORD *)(a1 + 928) = 0x8000000000000000uLL;
  *(_DWORD *)(a1 + 936) = 0;
  *(_QWORD *)(a1 + 944) = 1LL;
  *(_DWORD *)(a1 + 952) = 2139095039;
  *(_QWORD *)(a1 + 956) = 1023960469LL;
  v13 = sub_18001C190();
  if ( v13 )
    v14 = sub_18002D5E4(v13);
  else
    v14 = 0LL;
  *(_QWORD *)(a1 + 968) = v14 + 16;
  *(_QWORD *)(a1 + 976) = v14;
  sub_180030980((__int64 *)(a1 + 984));
  *(_QWORD *)(a1 + 1072) = 0LL;
  *(_QWORD *)(a1 + 1080) = 0LL;
  *(_QWORD *)(a1 + 1088) = 0LL;
  v15 = sub_18001090C(0x38uLL);
  *(_QWORD *)v15 = v15;
  *(_QWORD *)(v15 + 8) = v15;
  *(_QWORD *)(v15 + 16) = v15;
  *(_WORD *)(v15 + 24) = 257;
  *(_QWORD *)(a1 + 1080) = v15;
  *(_DWORD *)(a1 + 1096) = 1;
  sub_180029F5C(a1 + 1104, a2);
  *(_BYTE *)(a1 + 1160) = 0;
  *(_QWORD *)(a1 + 1176) = 0LL;
  *(_OWORD *)(a1 + 1184) = 0LL;
  *(_DWORD *)(a1 + 1200) = 60;
  Cnd_init_in_situ((_Cnd_t)(a1 + 1208));
  Mtx_init_in_situ((_Mtx_t)(a1 + 1280), 2);
  sub_18003160C(a1 + 1368, v16);
  sub_18003155C(a1 + 1424);
  sub_180032C0C(a1);
  v23[0] = a1;
  v17 = sub_1800305EC(&v24, v23);
  sub_180011020((_QWORD *)(a1 + 512), v17);
  if ( v25 )
    sub_180010530(v25);
  sub_180050A68(*(_QWORD *)(a1 + 512));
  *(_QWORD *)(a1 + 1176) = *sub_180011CA0(v23);
  CurrentProcess = GetCurrentProcess();
  K32GetProcessMemoryInfo(CurrentProcess, &ppsmemCounters, 0x48u);
  *(_QWORD *)(a1 + 1168) = ppsmemCounters.PeakWorkingSetSize;
  v19 = a3[1];
  if ( v19 )
    sub_180010530(v19);
  v20 = a4[1];
  if ( v20 )
    sub_180010530(v20);
  v21 = a5[1];
  if ( v21 )
    sub_180010530(v21);
  return a1;
}
