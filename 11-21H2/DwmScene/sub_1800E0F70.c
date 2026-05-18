/*
 * XREFs of sub_1800E0F70 @ 0x1800E0F70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010D08 @ 0x180010D08 (sub_180010D08.c)
 *     sub_18002F6EC @ 0x18002F6EC (sub_18002F6EC.c)
 *     sub_1800E0468 @ 0x1800E0468 (sub_1800E0468.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall sub_1800E0F70(__int64 a1)
{
  double v2; // xmm0_8
  float v3; // xmm7_4
  double v4; // xmm0_8
  float v5; // xmm6_4
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-58h] BYREF
  float v10; // [rsp+28h] [rbp-50h] BYREF
  __int64 v11; // [rsp+2Ch] [rbp-4Ch]
  float v12; // [rsp+34h] [rbp-44h]
  __int64 v13; // [rsp+38h] [rbp-40h]

  sub_18002F6EC(a1);
  v2 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
  v3 = *(float *)&v2 * (*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1);
  v4 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1);
  v5 = *(float *)&v4 * (*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
  if ( v3 != 0.0 && v5 != 0.0 )
  {
    v6 = (_QWORD *)sub_1800E0468(a1);
    if ( sub_180010D08(v6) )
    {
      v9 = 0LL;
      if ( !(**(unsigned int (__fastcall ***)(_QWORD, void *, __int64 *))*v7)(*v7, &unk_1801BBA70, &v9) )
      {
        v11 = 0LL;
        v13 = 0LL;
        v10 = 1.0 / v3;
        v12 = 1.0 / v5;
        (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v9 + 272LL))(v9, &v10);
      }
      v8 = v9;
      if ( v9 )
      {
        v9 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
    }
  }
}
