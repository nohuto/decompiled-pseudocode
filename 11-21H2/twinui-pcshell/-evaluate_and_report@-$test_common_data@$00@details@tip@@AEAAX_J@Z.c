/*
 * XREFs of ?evaluate_and_report@?$test_common_data@$00@details@tip@@AEAAX_J@Z @ 0x18011FBE0
 * Callers:
 *     ??1?$test_common_data@$00@details@tip@@QEAA@XZ @ 0x18011EDCC (--1-$test_common_data@$00@details@tip@@QEAA@XZ.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x18011FB18 (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 * Callees:
 *     TestReport @ 0x180120070 (TestReport.c)
 *     ?data@?$test_common_data@$00@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x180120CE4 (-data@-$test_common_data@$00@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall tip::details::test_common_data<1>::evaluate_and_report(_QWORD *a1, void *a2)
{
  char v6; // cl
  unsigned __int8 v7; // al
  __int64 v8; // r8
  int v9; // edx
  int *v10; // rcx
  void **v11; // rax
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  void *v16; // rcx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  unsigned __int64 v19; // [rsp+20h] [rbp-E8h] BYREF
  void *v20; // [rsp+28h] [rbp-E0h] BYREF
  int v21; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+48h] [rbp-C0h]
  int v23; // [rsp+50h] [rbp-B8h]
  __int128 v24; // [rsp+54h] [rbp-B4h]
  int v25; // [rsp+64h] [rbp-A4h]
  char v26; // [rsp+68h] [rbp-A0h]
  __int16 v27; // [rsp+6Ah] [rbp-9Eh]
  __int64 v28; // [rsp+70h] [rbp-98h]
  void *v29; // [rsp+78h] [rbp-90h]
  void **v30; // [rsp+88h] [rbp-80h]
  int v31; // [rsp+90h] [rbp-78h]
  __int64 v32; // [rsp+98h] [rbp-70h]
  __int16 v33; // [rsp+A0h] [rbp-68h]
  int v34; // [rsp+ACh] [rbp-5Ch]
  int v35; // [rsp+B0h] [rbp-58h]
  void *v36[3]; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int64 v37; // [rsp+D8h] [rbp-30h]

  v19 = (unsigned __int64)a1;
  v20 = a2;
  (**(void (__fastcall ***)(_QWORD))*a1)(*a1);
  v6 = *((_BYTE *)a1 + 96);
  if ( v6 )
  {
    v7 = 1;
    if ( v6 == 1 || v6 == 4 )
      goto LABEL_3;
  }
  else
  {
    *((_BYTE *)a1 + 96) = 3;
    v7 = 1;
    *((_WORD *)a1 + 49) = 16394;
    a1[13] = 0LL;
  }
  if ( (a1[3] & 0x800) == 0 )
LABEL_3:
    v7 = 0;
  v8 = v7 | 2u;
  if ( (*(_DWORD *)(a1[1] + 4LL) & 0x200) == 0 )
    v8 = v7;
  tip::details::test_common_data<1>::data(a1, v36, v8);
  memset_0(&v21, 0, 0x78uLL);
  v9 = *((_DWORD *)a1 + 29);
  if ( v9 )
  {
    v21 = *((_DWORD *)a1 + 29);
    v10 = (int *)a1[1];
  }
  else
  {
    v10 = (int *)a1[1];
    v21 = *v10;
  }
  v22 = *((_QWORD *)v10 + 1);
  v23 = v10[1];
  v24 = *((_OWORD *)a1 + 5);
  v25 = *((_DWORD *)a1 + 6) | 0x200000;
  v26 = *((_BYTE *)a1 + 96);
  v27 = *((_WORD *)a1 + 49);
  v28 = a1[13];
  v29 = a2;
  if ( v36[2] )
  {
    v11 = v36;
    if ( v37 >= 0x10 )
      v11 = (void **)v36[0];
  }
  else
  {
    v11 = 0LL;
  }
  v30 = v11;
  v34 = *((_DWORD *)a1 + 28);
  if ( v9 )
    v35 = *v10;
  else
    v35 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = a1[4];
  if ( v14 != a1[5] )
  {
    do
    {
      v17 = v12;
      v18 = *(_DWORD *)(v14 + 8);
      if ( v18 != (_DWORD)v12 )
        v13 = v14;
      v14 += 168LL;
      v12 = v18;
      if ( v18 == v17 )
        v12 = v17;
    }
    while ( v14 != a1[5] );
    if ( v13 )
    {
      v31 = *(_DWORD *)(v13 + 8);
      v32 = *(_QWORD *)(v13 + 56);
      v33 = *(_WORD *)(v13 + 64);
    }
  }
  TestReport(&v21, v13, v14, v12, v19, v20);
  (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)*a1 + 24LL))(*a1, &v21);
  if ( v37 >= 0x10 )
  {
    v15 = v37 + 1;
    v19 = v37 + 1;
    v16 = v36[0];
    v20 = v36[0];
    if ( v37 + 1 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v20, &v19);
      v15 = v19;
      v16 = v20;
    }
    operator delete(v16, v15);
  }
}
