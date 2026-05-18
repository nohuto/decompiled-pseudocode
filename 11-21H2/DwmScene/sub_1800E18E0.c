/*
 * XREFs of sub_1800E18E0 @ 0x1800E18E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_18002F830 @ 0x18002F830 (sub_18002F830.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
int __fastcall sub_1800E18E0(float *a1, float a2, float a3, float a4, float a5)
{
  double v6; // xmm8_8
  int v7; // r14d
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
  int result; // eax
  __int64 v20; // rcx
  __int64 v21; // [rsp+68h] [rbp-21h] BYREF
  _Mtx_t v22; // [rsp+70h] [rbp-19h] BYREF
  char v23; // [rsp+78h] [rbp-11h]
  __int64 v24; // [rsp+80h] [rbp-9h] BYREF
  char v25; // [rsp+88h] [rbp-1h]
  __int64 v26; // [rsp+E8h] [rbp+5Fh] BYREF

  sub_18002C460((__int64)(a1 + 2), (__int64)&v24);
  (*(void (__fastcall **)(float *, _Mtx_t *))(*(_QWORD *)a1 + 320LL))(a1, &v22);
  sub_18002F830(a1, a2, a3, a4, a5);
  (*(void (__fastcall **)(float *))(*(_QWORD *)a1 + 336LL))(a1);
  v6 = (float)((*(float (__fastcall **)(float *))(*(_QWORD *)a1 + 112LL))(a1) * 100.0);
  v7 = (int)(float)((*(float (__fastcall **)(float *))(*(_QWORD *)a1 + 112LL))(a1) * 96.0);
  v8 = (*(float (__fastcall **)(float *))(*(_QWORD *)a1 + 104LL))(a1);
  v9 = (*(float (__fastcall **)(float *))(*(_QWORD *)a1 + 96LL))(a1);
  v10 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 144LL))(a1);
  v11 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 88LL))(a1);
  v12 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 80LL))(a1);
  v13 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 368LL))(a1);
  sub_18001F2B4(
    &stru_1801EA4E8,
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
    sub_18001F2B4(&stru_1801EA4E8, 3, "  non-uniform scale factors: x=%.0f%% y=%.0f%%", (float)(v16 * 100.0), v15);
  }
  (*(void (__fastcall **)(float *, __int64 *))(*(_QWORD *)a1 + 400LL))(a1, &v26);
  v17 = *(void (__fastcall **)(float *, __int64 *))(*(_QWORD *)a1 + 384LL);
  v21 = v26;
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
  v17(a1, &v21);
  (*(void (__fastcall **)(float *))(*(_QWORD *)a1 + 392LL))(a1);
  LOBYTE(v18) = 1;
  result = (*(__int64 (__fastcall **)(float *, __int64))(*(_QWORD *)a1 + 360LL))(a1, v18);
  v20 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  if ( v23 )
    result = Mtx_unlock(v22);
  if ( v25 )
    return j_LanguageEnumProc(v24);
  return result;
}
