/*
 * XREFs of sub_1800D81B0 @ 0x1800D81B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 *     sub_1800CF7CC @ 0x1800CF7CC (sub_1800CF7CC.c)
 *     sub_1800D048C @ 0x1800D048C (sub_1800D048C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D81B0(__int64 a1, __int64 a2, int a3)
{
  int v6; // eax
  __int64 v8; // [rsp+30h] [rbp-49h] BYREF
  __int64 v9; // [rsp+38h] [rbp-41h]
  __int64 v10; // [rsp+40h] [rbp-39h] BYREF
  __int64 v11; // [rsp+48h] [rbp-31h]
  _QWORD v12[12]; // [rsp+50h] [rbp-29h] BYREF

  if ( *(_DWORD *)(a1 + 136) == 1 )
  {
    sub_180011C50(*(_QWORD *)(a1 + 120) + 72LL, &v8);
    sub_1800CF7CC(&v10, &v8);
    if ( v9 )
      sub_180010530(v9);
    sub_1800D048C(*(_QWORD *)(a1 + 120), &v8);
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *, __int64, bool))(*(_QWORD *)v8 + 232LL))(
           v8,
           *(_QWORD *)(a1 + 96),
           v12,
           88LL,
           a3 != 1);
    if ( v6 )
    {
      if ( v6 != 1 )
        sub_1800C7750(v10, v6);
    }
    else
    {
      *(_QWORD *)(a1 + 208) = v12[6];
      *(_QWORD *)(a1 + 200) = v12[5];
      *(_QWORD *)(a1 + 240) = v12[10];
      *(_QWORD *)(a1 + 232) = v12[9];
      *(_QWORD *)(a1 + 184) = v12[3];
      *(_QWORD *)(a1 + 192) = v12[4];
      *(_QWORD *)(a1 + 224) = v12[8];
      *(_QWORD *)(a1 + 216) = v12[7];
      *(_QWORD *)(a1 + 168) = v12[1];
      *(_QWORD *)(a1 + 160) = v12[0];
      *(_QWORD *)(a1 + 176) = v12[2];
      *(_DWORD *)(a1 + 136) = 2;
    }
    sub_18000E72C(&v8);
    if ( v11 )
      sub_180010530(v11);
  }
  *(_DWORD *)a2 = 4;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  *(_QWORD *)(a2 + 72) = 0LL;
  *(_QWORD *)(a2 + 80) = 0LL;
  *(_QWORD *)(a2 + 88) = 0LL;
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 136);
  if ( *(_DWORD *)(a1 + 136) == 2 )
  {
    *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 160);
    *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 176);
    *(_OWORD *)(a2 + 40) = *(_OWORD *)(a1 + 192);
    *(_OWORD *)(a2 + 56) = *(_OWORD *)(a1 + 208);
    *(_OWORD *)(a2 + 72) = *(_OWORD *)(a1 + 224);
    *(_QWORD *)(a2 + 88) = *(_QWORD *)(a1 + 240);
  }
  return a2;
}
