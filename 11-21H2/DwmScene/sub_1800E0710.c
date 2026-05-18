/*
 * XREFs of sub_1800E0710 @ 0x1800E0710
 * Callers:
 *     sub_1800E0A70 @ 0x1800E0A70 (sub_1800E0A70.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     sub_180029794 @ 0x180029794 (sub_180029794.c)
 *     sub_18002C84C @ 0x18002C84C (sub_18002C84C.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     sub_1800E0390 @ 0x1800E0390 (sub_1800E0390.c)
 *     sub_1800E0658 @ 0x1800E0658 (sub_1800E0658.c)
 *     sub_1800E0A7C @ 0x1800E0A7C (sub_1800E0A7C.c)
 *     sub_1800E0DF0 @ 0x1800E0DF0 (sub_1800E0DF0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800E0710(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // r14d
  unsigned int v9; // esi
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v12; // rdi
  int v13; // r14d
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  char v17; // [rsp+20h] [rbp-69h]
  char v18; // [rsp+21h] [rbp-68h]
  _Mtx_t v19; // [rsp+28h] [rbp-61h] BYREF
  char v20; // [rsp+30h] [rbp-59h]
  __int128 v21; // [rsp+38h] [rbp-51h]
  LARGE_INTEGER PerformanceCount[2]; // [rsp+48h] [rbp-41h] BYREF
  LARGE_INTEGER v23[2]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v24; // [rsp+68h] [rbp-21h]
  _OWORD v25[3]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+17h]
  char v28; // [rsp+F8h] [rbp+6Fh]

  v18 = *(_BYTE *)(a2 + 8);
  if ( v18 )
  {
    if ( !*(_QWORD *)a2 )
      goto LABEL_34;
    j_LanguageEnumProc(*(_QWORD *)a2);
    *(_BYTE *)(a2 + 8) = 0;
  }
  v17 = *(_BYTE *)(a3 + 8);
  if ( v17 )
  {
    if ( !*(_QWORD *)a3 )
      goto LABEL_34;
    j_LanguageEnumProc(*(_QWORD *)a3);
    *(_BYTE *)(a3 + 8) = 0;
  }
  v28 = *(_BYTE *)(a4 + 8);
  if ( v28 )
  {
    if ( !*(_QWORD *)a4 )
      goto LABEL_34;
    j_LanguageEnumProc(*(_QWORD *)a4);
    *(_BYTE *)(a4 + 8) = 0;
  }
  v8 = *((_DWORD *)a1 + 128);
  v9 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 312LL))(a1);
  *((_QWORD *)&v21 + 1) = __PAIR64__(v8, v9);
  PerformanceCount[0].LowPart = 0;
  LOBYTE(v24) = 0;
  *(_QWORD *)&v21 = a1[60];
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v12 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  QueryPerformanceCounter(&PerformanceCount[1]);
  (*(void (__fastcall **)(_QWORD *, _Mtx_t *))(*a1 + 320LL))(a1, &v19);
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)a1[63] + 64LL))(a1[63], v9, v8);
  if ( v20 )
    Mtx_unlock(v19);
  v14 = Query_perf_frequency();
  v15 = Query_perf_counter();
  v16 = 1000000000 * (v15 % v14) / v14 + 1000000000 * (v15 / v14);
  QueryPerformanceCounter(v23);
  if ( v13 == -2005270523 )
  {
    sub_18001F2B4(&stru_1801EA4E8, 3, "Present() returned DXGI_ERROR_DEVICE_REMOVED");
  }
  else if ( v13 == -2005270521 )
  {
    sub_18001F2B4(&stru_1801EA4E8, 3, "Present() returned DXGI_ERROR_DEVICE_RESET");
  }
  else if ( v13 < 0 )
  {
    sub_18001F2B4(&stru_1801EA4E8, 3, "Present() returned error %08x", v13);
  }
  sub_1800E0390((__int64)a1, &v19);
  if ( v19 )
    sub_1800DD668((__int64)v19, v13);
  sub_180010910((__int64)&v19);
  (*(void (__fastcall **)(_QWORD, LARGE_INTEGER *))(*(_QWORD *)a1[63] + 136LL))(a1[63], PerformanceCount);
  v25[0] = v21;
  v25[1] = *(_OWORD *)&PerformanceCount[0].LowPart;
  v25[2] = *(_OWORD *)&v23[0].LowPart;
  v26 = v24;
  sub_1800E0DF0(a1, v25);
  sub_1800E0658((__int64)a1);
  sub_1800E0A7C(a1);
  if ( v28 )
  {
    if ( !*(_QWORD *)a4 )
      goto LABEL_34;
    if ( *(_BYTE *)(a4 + 8) )
      goto LABEL_33;
    sub_18002C84C(*(_QWORD *)a4);
    *(_BYTE *)(a4 + 8) = 1;
  }
  if ( v17 )
  {
    if ( !*(_QWORD *)a3 )
      goto LABEL_34;
    if ( *(_BYTE *)(a3 + 8) )
      goto LABEL_33;
    sub_18002C84C(*(_QWORD *)a3);
    *(_BYTE *)(a3 + 8) = 1;
  }
  if ( v18 )
  {
    if ( *(_QWORD *)a2 )
    {
      if ( !*(_BYTE *)(a2 + 8) )
      {
        sub_18002C84C(*(_QWORD *)a2);
        *(_BYTE *)(a2 + 8) = 1;
        goto LABEL_32;
      }
LABEL_33:
      sub_180029794(0x24u);
    }
LABEL_34:
    sub_180029794(1u);
  }
LABEL_32:
  sub_18002EF54(a1, v12, v16, v16 - v12);
}
