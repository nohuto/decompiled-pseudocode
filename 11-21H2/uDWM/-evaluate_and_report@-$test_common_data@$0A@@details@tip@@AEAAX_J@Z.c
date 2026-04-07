/*
 * XREFs of ?evaluate_and_report@?$test_common_data@$0A@@details@tip@@AEAAX_J@Z @ 0x18004462C
 * Callers:
 *     ??1?$test_common_data@$0A@@details@tip@@QEAA@XZ @ 0x180013500 (--1-$test_common_data@$0A@@details@tip@@QEAA@XZ.c)
 *     ?complete@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x180040D9C (-complete@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x1800138DC (-wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800423D8 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall tip::details::test_common_data<0>::evaluate_and_report(_QWORD *a1, __int64 a2)
{
  char v6; // cl
  unsigned __int8 v7; // al
  unsigned int v8; // r8d
  int v9; // edx
  int *v10; // rcx
  void **v11; // rax
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  FARPROC ProcAddress; // rax
  HMODULE KernelBaseModuleHandle; // rax
  __int64 result; // rax
  unsigned int v18; // ecx
  unsigned int v19; // eax
  int v22; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+48h] [rbp-C0h]
  int v24; // [rsp+50h] [rbp-B8h]
  __int128 v25; // [rsp+54h] [rbp-B4h]
  int v26; // [rsp+64h] [rbp-A4h]
  char v27; // [rsp+68h] [rbp-A0h]
  __int16 v28; // [rsp+6Ah] [rbp-9Eh]
  __int64 v29; // [rsp+70h] [rbp-98h]
  __int64 v30; // [rsp+78h] [rbp-90h]
  void **v31; // [rsp+88h] [rbp-80h]
  int v32; // [rsp+90h] [rbp-78h]
  __int64 v33; // [rsp+98h] [rbp-70h]
  __int16 v34; // [rsp+A0h] [rbp-68h]
  int v35; // [rsp+ACh] [rbp-5Ch]
  int v36; // [rsp+B0h] [rbp-58h]
  void *v37[3]; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int64 v38; // [rsp+D8h] [rbp-30h]

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
  tip::details::test_common_data<0>::data(a1, (__int64)v37, v8);
  memset_0(&v22, 0, 0x78uLL);
  v9 = *((_DWORD *)a1 + 29);
  if ( v9 )
  {
    v22 = *((_DWORD *)a1 + 29);
    v10 = (int *)a1[1];
  }
  else
  {
    v10 = (int *)a1[1];
    v22 = *v10;
  }
  v23 = *((_QWORD *)v10 + 1);
  v24 = v10[1];
  v25 = *((_OWORD *)a1 + 5);
  v26 = *((_DWORD *)a1 + 6) | 0x200000;
  v27 = *((_BYTE *)a1 + 96);
  v28 = *((_WORD *)a1 + 49);
  v29 = a1[13];
  v30 = a2;
  if ( v37[2] )
  {
    v11 = v37;
    if ( v38 >= 0x10 )
      v11 = (void **)v37[0];
  }
  else
  {
    v11 = 0LL;
  }
  v31 = v11;
  v35 = *((_DWORD *)a1 + 28);
  if ( v9 )
    v36 = *v10;
  else
    v36 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = a1[4];
  if ( v14 != a1[5] )
  {
    do
    {
      v18 = v12;
      v19 = *(_DWORD *)(v14 + 8);
      if ( v19 != (_DWORD)v12 )
        v13 = v14;
      v14 += 168LL;
      v12 = v19;
      if ( v19 == v18 )
        v12 = v18;
    }
    while ( v14 != a1[5] );
    if ( v13 )
    {
      v32 = *(_DWORD *)(v13 + 8);
      v33 = *(_QWORD *)(v13 + 56);
      v34 = *(_WORD *)(v13 + 64);
    }
  }
  ProcAddress = (FARPROC)`TestReport'::`2'::s_pfnTestReport;
  if ( `TestReport'::`2'::s_pfnTestReport
    || (KernelBaseModuleHandle = wil_details_GetKernelBaseModuleHandle(),
        ProcAddress = GetProcAddress(KernelBaseModuleHandle, "TestReport"),
        (`TestReport'::`2'::s_pfnTestReport = (__int64)ProcAddress) != 0) )
  {
    ((void (__fastcall *)(int *, __int64, __int64, __int64, _QWORD *, __int64))ProcAddress)(&v22, v13, v14, v12, a1, a2);
  }
  result = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*a1 + 24LL))(*a1, &v22);
  if ( v38 >= 0x10 )
    return std::_Deallocate<16,0>(v37[0], v38 + 1);
  return result;
}
