/*
 * XREFs of sub_180078514 @ 0x180078514
 * Callers:
 *     sub_18006D170 @ 0x18006D170 (sub_18006D170.c)
 *     sub_1800713F0 @ 0x1800713F0 (sub_1800713F0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_18006560C @ 0x18006560C (sub_18006560C.c)
 *     sub_18006B2C0 @ 0x18006B2C0 (sub_18006B2C0.c)
 *     sub_18009E5F0 @ 0x18009E5F0 (sub_18009E5F0.c)
 *     sub_18009E600 @ 0x18009E600 (sub_18009E600.c)
 *     sub_18009E610 @ 0x18009E610 (sub_18009E610.c)
 *     sub_18009E638 @ 0x18009E638 (sub_18009E638.c)
 *     sub_18009E648 @ 0x18009E648 (sub_18009E648.c)
 *     sub_18009E6BC @ 0x18009E6BC (sub_18009E6BC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 **__fastcall sub_180078514(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  int v4; // xmm7_4
  int v5; // xmm8_4
  int v6; // xmm9_4
  double v7; // xmm0_8
  double v8; // xmm0_8
  double v9; // xmm0_8
  __int64 **v10; // r15
  __int64 *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // r12
  char v17; // al
  char v18; // bl
  double v19; // xmm0_8
  float v20; // xmm12_4
  double v21; // xmm0_8
  float v22; // xmm10_4
  double v23; // xmm0_8
  float v24; // xmm11_4
  char v25; // r13
  char v26; // al
  int v27; // eax
  double v28; // xmm0_8
  int v29; // xmm14_4
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rdx
  float v33; // xmm0_4
  float v34; // xmm0_4
  __int64 **result; // rax
  int v36; // [rsp+20h] [rbp-F8h]
  _QWORD v37[2]; // [rsp+28h] [rbp-F0h] BYREF
  _QWORD v38[3]; // [rsp+38h] [rbp-E0h] BYREF
  char v39; // [rsp+128h] [rbp+10h]
  unsigned int v40; // [rsp+130h] [rbp+18h]
  int v41; // [rsp+138h] [rbp+20h]

  v3 = sub_180036808(a1, *(_DWORD *)(*a2 + 112));
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, &qword_1801F96D8, 0LL) )
  {
    v7 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 88LL))(v3, &qword_1801F9678);
    v4 = LODWORD(v7);
    v8 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 88LL))(v3, &qword_1801F9698);
    v5 = LODWORD(v8);
    v9 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 88LL))(v3, &qword_1801F96B8);
    v6 = LODWORD(v9);
  }
  v40 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, &qword_1801F9638, 0LL);
  v10 = off_1801EA890;
  v11 = (__int64 *)(sub_18006B2C0(*a2) + 144);
  do
  {
    v12 = *v11;
    if ( *v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      v12 = *v11;
    }
    v13 = *(v11 - 1);
    v14 = v13;
    v37[0] = v13;
    v37[1] = v12;
    if ( sub_1800122C0(v37) )
    {
      v15 = *(v11 - 16);
      if ( v15 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
        v15 = *(v11 - 16);
        v14 = v37[0];
      }
      v16 = *(v11 - 17);
      v38[0] = v16;
      v38[1] = v15;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, *(v10 - 2), 0LL);
      v18 = v17;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 88LL))(v3, *(v10 - 1));
      v19 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 88LL))(v3, *v10);
      v20 = *(float *)&v19;
      v21 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 88LL))(v3, v10[3]);
      v22 = *(float *)&v21;
      v23 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 88LL))(v3, v10[4]);
      v24 = *(float *)&v23;
      v25 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, v10[2], 0LL);
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, v10[5], 0LL);
      v39 = v26;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 88LL))(v3, v10[6]);
      v41 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, v10[8], 0LL);
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, v10[9], 0LL);
      v36 = v27;
      v28 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 88LL))(v3, v10[10]);
      v29 = LODWORD(v28);
      *(float *)&v28 = o_roundf();
      sub_18009E610(v14, (unsigned int)(int)*(float *)&v28);
      sub_18009E6BC(v30, v40);
      *(_BYTE *)(v14 + 72) = v18;
      if ( v20 != *(float *)(v13 + 340) )
      {
        *(float *)(v13 + 340) = v20;
        sub_18006560C(v13, 2);
      }
      LOBYTE(v31) = v25;
      sub_18009E638(v14, v31);
      if ( v22 != *(float *)(v13 + 320) )
      {
        *(float *)(v13 + 320) = v22;
        sub_18006560C(v13, 2);
      }
      if ( v24 != *(float *)(v13 + 324) )
      {
        *(float *)(v13 + 324) = v24;
        sub_18006560C(v13, 2);
      }
      LOBYTE(v32) = v39;
      sub_18009E600(v14, v32);
      sub_18009E5F0();
      *(_DWORD *)(v14 + 1960) = v41;
      *(_DWORD *)(v14 + 1964) = v36;
      *(_DWORD *)(v14 + 1968) = v29;
      if ( sub_1800122C0(v38) && *(_DWORD *)(v16 + 120) == 1 )
      {
        v33 = *(float *)(v16 + 112);
        if ( v33 != *(float *)(v13 + 328) )
        {
          *(float *)(v13 + 328) = v33;
          sub_18006560C(v13, 2);
        }
      }
      else
      {
        v34 = (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 88LL))(v3, v10[1]);
        if ( v34 != *(float *)(v13 + 328) )
        {
          *(float *)(v13 + 328) = v34;
          sub_18006560C(v13, 2);
        }
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 88LL))(v3, v10[7]);
      }
      sub_18009E648(v14);
      *(_DWORD *)(v13 + 400) = v4;
      *(_DWORD *)(v13 + 404) = v5;
      *(_DWORD *)(v13 + 408) = v6;
      sub_180010910((__int64)v38);
    }
    sub_180010910((__int64)v37);
    v11 += 2;
    v10 += 13;
    result = off_1801EA9C8;
  }
  while ( (__int64)v10 < (__int64)off_1801EA9C8 );
  return result;
}
