/*
 * XREFs of ?evaluate_and_report@?$test_common_data@$0A@@details@tip@@AEAAX_J@Z @ 0x18011FE9C
 * Callers:
 *     ??1?$test_common_data@$0A@@details@tip@@QEAA@XZ @ 0x18011F994 (--1-$test_common_data@$0A@@details@tip@@QEAA@XZ.c)
 *     ?complete@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x18011FDD8 (-complete@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 * Callees:
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x180085E80 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     TestReport @ 0x180120070 (TestReport.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall tip::details::test_common_data<0>::evaluate_and_report(_QWORD *a1, __int64 a2)
{
  char v6; // cl
  unsigned __int8 v7; // al
  unsigned int v8; // r8d
  int v9; // edx
  int *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 result; // rax
  unsigned int v16; // ecx
  unsigned int v17; // eax
  int v20; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-C0h]
  int v22; // [rsp+50h] [rbp-B8h]
  __int128 v23; // [rsp+54h] [rbp-B4h]
  int v24; // [rsp+64h] [rbp-A4h]
  char v25; // [rsp+68h] [rbp-A0h]
  __int16 v26; // [rsp+6Ah] [rbp-9Eh]
  __int64 v27; // [rsp+70h] [rbp-98h]
  __int64 v28; // [rsp+78h] [rbp-90h]
  _QWORD *v29; // [rsp+88h] [rbp-80h]
  int v30; // [rsp+90h] [rbp-78h]
  __int64 v31; // [rsp+98h] [rbp-70h]
  __int16 v32; // [rsp+A0h] [rbp-68h]
  int v33; // [rsp+ACh] [rbp-5Ch]
  int v34; // [rsp+B0h] [rbp-58h]
  _QWORD v35[3]; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int64 v36; // [rsp+D8h] [rbp-30h]

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
  v8 = v7 | 2;
  if ( (*(_DWORD *)(a1[1] + 4LL) & 0x200) == 0 )
    v8 = v7;
  tip::details::test_common_data<0>::data(a1, (__int64)v35, v8);
  memset_0(&v20, 0, 0x78uLL);
  v9 = *((_DWORD *)a1 + 29);
  if ( v9 )
  {
    v20 = *((_DWORD *)a1 + 29);
    v10 = (int *)a1[1];
  }
  else
  {
    v10 = (int *)a1[1];
    v20 = *v10;
  }
  v21 = *((_QWORD *)v10 + 1);
  v22 = v10[1];
  v23 = *((_OWORD *)a1 + 5);
  v24 = *((_DWORD *)a1 + 6) | 0x200000;
  v25 = *((_BYTE *)a1 + 96);
  v26 = *((_WORD *)a1 + 49);
  v27 = a1[13];
  v28 = a2;
  if ( v35[2] )
  {
    v11 = v35;
    if ( v36 >= 0x10 )
      v11 = (_QWORD *)v35[0];
  }
  else
  {
    v11 = 0LL;
  }
  v29 = v11;
  v33 = *((_DWORD *)a1 + 28);
  if ( v9 )
    v34 = *v10;
  else
    v34 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = a1[4];
  if ( v14 != a1[5] )
  {
    do
    {
      v16 = v12;
      v17 = *(_DWORD *)(v14 + 8);
      if ( v17 != (_DWORD)v12 )
        v13 = v14;
      v14 += 168LL;
      v12 = v17;
      if ( v17 == v16 )
        v12 = v16;
    }
    while ( v14 != a1[5] );
    if ( v13 )
    {
      v30 = *(_DWORD *)(v13 + 8);
      v31 = *(_QWORD *)(v13 + 56);
      v32 = *(_WORD *)(v13 + 64);
    }
  }
  TestReport(&v20, v13, v14, v12, a1, a2);
  result = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*a1 + 24LL))(*a1, &v20);
  if ( v36 >= 0x10 )
    return std::_Deallocate<16,0>(v35[0], v36 + 1);
  return result;
}
