/*
 * XREFs of ?evaluate_and_report@?$test_common_data@$00@details@tip@@AEAAX_J@Z @ 0x18009582C
 * Callers:
 *     ??1?$test_common_data@$00@details@tip@@QEAA@XZ @ 0x180093D4C (--1-$test_common_data@$00@details@tip@@QEAA@XZ.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 * Callees:
 *     TestReport @ 0x1800BCD68 (TestReport.c)
 *     ?data@?$test_common_data@$00@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800BE188 (-data@-$test_common_data@$00@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1803920BC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall tip::details::test_common_data<1>::evaluate_and_report(_QWORD *a1, void *a2)
{
  char v5; // al
  unsigned __int8 v6; // al
  unsigned int v7; // edx
  unsigned int v8; // eax
  __int64 v9; // r8
  int v10; // edx
  int *v11; // rcx
  void **v12; // rax
  int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  void *v17; // rcx
  int v18; // eax
  unsigned __int64 v19; // [rsp+20h] [rbp-D8h] BYREF
  void *v20; // [rsp+28h] [rbp-D0h] BYREF
  int v21; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B0h]
  int v23; // [rsp+50h] [rbp-A8h]
  __int128 v24; // [rsp+54h] [rbp-A4h]
  int v25; // [rsp+64h] [rbp-94h]
  char v26; // [rsp+68h] [rbp-90h]
  __int16 v27; // [rsp+6Ah] [rbp-8Eh]
  __int64 v28; // [rsp+70h] [rbp-88h]
  void *v29; // [rsp+78h] [rbp-80h]
  void **v30; // [rsp+88h] [rbp-70h]
  int v31; // [rsp+90h] [rbp-68h]
  __int64 v32; // [rsp+98h] [rbp-60h]
  __int16 v33; // [rsp+A0h] [rbp-58h]
  int v34; // [rsp+ACh] [rbp-4Ch]
  int v35; // [rsp+B0h] [rbp-48h]
  void *v36[3]; // [rsp+C0h] [rbp-38h] BYREF
  unsigned __int64 v37; // [rsp+D8h] [rbp-20h]

  v19 = (unsigned __int64)a1;
  v20 = a2;
  (**(void (__fastcall ***)(_QWORD))*a1)(*a1);
  v5 = *((_BYTE *)a1 + 128);
  if ( !v5 )
  {
    *((_BYTE *)a1 + 128) = 3;
    *((_WORD *)a1 + 65) = 16394;
    a1[17] = 0LL;
    goto LABEL_31;
  }
  if ( v5 == 4 )
  {
LABEL_5:
    v6 = 0;
    goto LABEL_6;
  }
  if ( v5 != 1 )
  {
LABEL_31:
    if ( (a1[7] & 0x800) != 0 )
      goto LABEL_22;
  }
  if ( (*(_DWORD *)(a1[1] + 4LL) & 0x1000) == 0 )
    goto LABEL_5;
LABEL_22:
  v6 = 1;
LABEL_6:
  v7 = v6;
  v8 = v6 | 2;
  if ( (*(_DWORD *)(a1[1] + 4LL) & 0x200) != 0 )
    LOBYTE(v7) = 1;
  else
    v8 = v7;
  v9 = v8 | 4;
  if ( !(_BYTE)v7 )
    v9 = v8;
  tip::details::test_common_data<1>::data(a1, v36, v9);
  memset_0(&v21, 0, 0x78uLL);
  v10 = *((_DWORD *)a1 + 37);
  if ( v10 )
    v21 = *((_DWORD *)a1 + 37);
  else
    v21 = *(_DWORD *)a1[1];
  v11 = (int *)a1[1];
  v22 = *((_QWORD *)v11 + 1);
  v23 = v11[1];
  v24 = *((_OWORD *)a1 + 7);
  v25 = *((_DWORD *)a1 + 14) | 0x200000;
  v26 = *((_BYTE *)a1 + 128);
  v27 = *((_WORD *)a1 + 65);
  v28 = a1[17];
  v29 = a2;
  if ( v36[2] )
  {
    v12 = v36;
    if ( v37 >= 0x10 )
      v12 = (void **)v36[0];
  }
  else
  {
    v12 = 0LL;
  }
  v30 = v12;
  v34 = *((_DWORD *)a1 + 36);
  if ( v10 )
    v35 = *v11;
  else
    v35 = 0;
  v13 = 0;
  v14 = 0LL;
  v15 = a1[8];
  if ( v15 != a1[9] )
  {
    do
    {
      v18 = *(_DWORD *)(v15 + 8);
      if ( v18 != v13 )
        v14 = v15;
      v15 += 168LL;
      if ( v18 == v13 )
        v18 = v13;
      v13 = v18;
    }
    while ( v15 != a1[9] );
    if ( v14 )
    {
      v31 = *(_DWORD *)(v14 + 8);
      v32 = *(_QWORD *)(v14 + 56);
      v33 = *(_WORD *)(v14 + 64);
    }
  }
  TestReport(&v21);
  (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)*a1 + 24LL))(*a1, &v21);
  if ( v37 >= 0x10 )
  {
    v16 = v37 + 1;
    v19 = v37 + 1;
    v17 = v36[0];
    v20 = v36[0];
    if ( v37 + 1 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v20, &v19);
      v16 = v19;
      v17 = v20;
    }
    operator delete(v17, v16);
  }
}
