/*
 * XREFs of sub_1800CB170 @ 0x1800CB170
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180011520 @ 0x180011520 (sub_180011520.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_18002B8E0 @ 0x18002B8E0 (sub_18002B8E0.c)
 *     sub_18002D1B0 @ 0x18002D1B0 (sub_18002D1B0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800CB170(float *a1, float a2, float a3, float a4, float a5)
{
  double v6; // xmm8_8
  int v7; // ebp
  double v8; // xmm7_8
  double v9; // xmm6_8
  int v10; // esi
  int v11; // edi
  int v12; // ebx
  __int64 v13; // rax
  double v14; // xmm0_8
  double v15; // xmm6_8
  float v16; // xmm0_4
  void (__fastcall *v17)(float *, __int64 *); // rbx
  __int64 v18; // rdx
  __int64 v20; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v21[16]; // [rsp+68h] [rbp-70h] BYREF
  _BYTE v22[72]; // [rsp+78h] [rbp-60h] BYREF
  __int64 v23; // [rsp+E0h] [rbp+8h] BYREF

  sub_18002A0C4((__int64)(a1 + 2), (__int64)v22);
  (*(void (__fastcall **)(float *, _BYTE *))(*(_QWORD *)a1 + 320LL))(a1, v21);
  sub_18002D1B0(a1, a2, a3, a4, a5);
  (*(void (__fastcall **)(float *))(*(_QWORD *)a1 + 336LL))(a1);
  v6 = (float)((*(float (__fastcall **)(float *))(*(_QWORD *)a1 + 112LL))(a1) * 100.0);
  v7 = (int)(float)((*(float (__fastcall **)(float *))(*(_QWORD *)a1 + 112LL))(a1) * 96.0);
  v8 = (*(float (__fastcall **)(float *))(*(_QWORD *)a1 + 104LL))(a1);
  v9 = (*(float (__fastcall **)(float *))(*(_QWORD *)a1 + 96LL))(a1);
  v10 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 144LL))(a1);
  v11 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 88LL))(a1);
  v12 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 80LL))(a1);
  v13 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 368LL))(a1);
  sub_18001DB68(
    &stru_1801C84E8,
    3,
    "Render Output Resolution: handle=%016llx -- physical window-space %dx%d pixels (%dxMSAA) - logical display-space %.2"
    "fx%.2f dips at %d ppi (scale %.0f%%)",
    v13,
    v12,
    v11,
    v10,
    v9,
    v8,
    v7,
    v6);
  v14 = (*(double (__fastcall **)(float *))(*(_QWORD *)a1 + 112LL))(a1);
  if ( *(float *)&v14 != (*(float (__fastcall **)(float *))(*(_QWORD *)a1 + 120LL))(a1) )
  {
    v15 = (float)((*(float (__fastcall **)(float *))(*(_QWORD *)a1 + 120LL))(a1) * 100.0);
    v16 = (*(float (__fastcall **)(float *))(*(_QWORD *)a1 + 112LL))(a1);
    sub_18001DB68(&stru_1801C84E8, 3, "  non-uniform scale factors: x=%.0f%% y=%.0f%%", (float)(v16 * 100.0), v15);
  }
  (*(void (__fastcall **)(float *, __int64 *))(*(_QWORD *)a1 + 400LL))(a1, &v20);
  v17 = *(void (__fastcall **)(float *, __int64 *))(*(_QWORD *)a1 + 384LL);
  v23 = v20;
  sub_180011520(&v23);
  v17(a1, &v23);
  (*(void (__fastcall **)(float *))(*(_QWORD *)a1 + 392LL))(a1);
  LOBYTE(v18) = 1;
  (*(void (__fastcall **)(float *, __int64))(*(_QWORD *)a1 + 360LL))(a1, v18);
  sub_18000E72C(&v20);
  sub_18002B8E0((__int64)v21);
  return sub_180010F54((__int64)v22);
}
