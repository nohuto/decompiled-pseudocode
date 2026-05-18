/*
 * XREFs of sub_1800CA310 @ 0x1800CA310
 * Callers:
 *     sub_1800CA570 @ 0x1800CA570 (sub_1800CA570.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011CA0 @ 0x180011CA0 (sub_180011CA0.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_180027A40 @ 0x180027A40 (sub_180027A40.c)
 *     sub_180027B00 @ 0x180027B00 (sub_180027B00.c)
 *     sub_18002B8E0 @ 0x18002B8E0 (sub_18002B8E0.c)
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 *     sub_1800C9FBC @ 0x1800C9FBC (sub_1800C9FBC.c)
 *     sub_1800CA238 @ 0x1800CA238 (sub_1800CA238.c)
 *     sub_1800CA57C @ 0x1800CA57C (sub_1800CA57C.c)
 *     sub_1800CA88C @ 0x1800CA88C (sub_1800CA88C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800CA310(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v8; // r12
  unsigned int v9; // edi
  unsigned int v10; // ebx
  int v11; // ebx
  __int64 v12; // [rsp+20h] [rbp-79h] BYREF
  __int64 v13; // [rsp+28h] [rbp-71h]
  __int128 v14; // [rsp+30h] [rbp-69h]
  LARGE_INTEGER PerformanceCount[2]; // [rsp+40h] [rbp-59h] BYREF
  LARGE_INTEGER v16[2]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v17; // [rsp+60h] [rbp-39h]
  _OWORD v18[3]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+7h]
  char v20; // [rsp+100h] [rbp+67h]
  char v21; // [rsp+108h] [rbp+6Fh]
  __int64 v22; // [rsp+110h] [rbp+77h] BYREF
  __int64 v23; // [rsp+118h] [rbp+7Fh] BYREF

  v21 = *(_BYTE *)(a2 + 8);
  if ( v21 )
    sub_180027B00((__int64 *)a2);
  v8 = *(_BYTE *)(a3 + 8);
  if ( v8 )
    sub_180027B00((__int64 *)a3);
  v20 = *(_BYTE *)(a4 + 8);
  if ( v20 )
    sub_180027B00((__int64 *)a4);
  v9 = *((_DWORD *)a1 + 128);
  v10 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 312LL))(a1);
  *((_QWORD *)&v14 + 1) = __PAIR64__(v9, v10);
  PerformanceCount[0].LowPart = 0;
  LOBYTE(v17) = 0;
  *(_QWORD *)&v14 = a1[60];
  sub_180011CA0(&v23);
  QueryPerformanceCounter(&PerformanceCount[1]);
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*a1 + 320LL))(a1, &v12);
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)a1[63] + 64LL))(a1[63], v10, v9);
  sub_18002B8E0((__int64)&v12);
  sub_180011CA0(&v22);
  QueryPerformanceCounter(v16);
  if ( v11 == -2005270523 )
  {
    sub_18001DB68(&stru_1801C84E8, 3, "Present() returned DXGI_ERROR_DEVICE_REMOVED");
  }
  else if ( v11 == -2005270521 )
  {
    sub_18001DB68(&stru_1801C84E8, 3, "Present() returned DXGI_ERROR_DEVICE_RESET");
  }
  else if ( v11 < 0 )
  {
    sub_18001DB68(&stru_1801C84E8, 3, "Present() returned error %08x", v11);
  }
  sub_1800C9FBC((__int64)a1, &v12);
  if ( v12 )
    sub_1800C7750(v12, v11);
  if ( v13 )
    sub_180010530(v13);
  (*(void (__fastcall **)(_QWORD, LARGE_INTEGER *))(*(_QWORD *)a1[63] + 136LL))(a1[63], PerformanceCount);
  v18[0] = v14;
  v18[1] = *(_OWORD *)&PerformanceCount[0].LowPart;
  v18[2] = *(_OWORD *)&v16[0].LowPart;
  v19 = v17;
  sub_1800CA88C(a1, v18);
  sub_1800CA238((__int64)a1);
  sub_1800CA57C(a1);
  if ( v20 )
    sub_180027A40((__int64 *)a4);
  if ( v8 )
    sub_180027A40((__int64 *)a3);
  if ( v21 )
    sub_180027A40((__int64 *)a2);
  sub_18002CA94(a1, v23, v22, v22 - v23);
}
