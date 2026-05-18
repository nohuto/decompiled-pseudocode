/*
 * XREFs of sub_1800CAA10 @ 0x1800CAA10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_18001070C @ 0x18001070C (sub_18001070C.c)
 *     sub_18002D088 @ 0x18002D088 (sub_18002D088.c)
 *     sub_1800C8814 @ 0x1800C8814 (sub_1800C8814.c)
 *     sub_1800CA050 @ 0x1800CA050 (sub_1800CA050.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800CAA10(__int64 a1)
{
  double v2; // xmm0_8
  float v3; // xmm7_4
  double v4; // xmm0_8
  float v5; // xmm6_4
  _QWORD *v6; // rax
  __int64 (__fastcall ****v7)(_QWORD, void *, __int64 *); // rcx
  __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  float v9; // [rsp+28h] [rbp-50h] BYREF
  __int64 v10; // [rsp+2Ch] [rbp-4Ch]
  float v11; // [rsp+34h] [rbp-44h]
  __int64 v12; // [rsp+38h] [rbp-40h]

  sub_18002D088(a1);
  v2 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
  v3 = *(float *)&v2 * (*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1);
  v4 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1);
  v5 = *(float *)&v4 * (*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
  if ( v3 != 0.0 && v5 != 0.0 )
  {
    v6 = (_QWORD *)sub_1800CA050(a1);
    if ( sub_18001070C(v6) )
    {
      v8 = 0LL;
      if ( !(unsigned int)sub_1800C8814(v7, &v8) )
      {
        v10 = 0LL;
        v12 = 0LL;
        v9 = 1.0 / v3;
        v11 = 1.0 / v5;
        (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v8 + 272LL))(v8, &v9);
      }
      sub_18000E72C(&v8);
    }
  }
}
