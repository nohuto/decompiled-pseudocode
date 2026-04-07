/*
 * XREFs of ?evaluate_and_report@?$test_common_data@$0A@@details@tip@@AEAAX_J@Z @ 0x1800F2E48
 * Callers:
 *     ?complete@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x180016C9C (-complete@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ??1?$test_common_data@$0A@@details@tip@@QEAA@XZ @ 0x1800F13DC (--1-$test_common_data@$0A@@details@tip@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x1800583DC (-wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     memset_0 @ 0x18005D340 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800F2BC4 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 */

__int64 __fastcall tip::details::test_common_data<0>::evaluate_and_report(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rsi
  _QWORD *v4; // rdi
  char v5; // al
  unsigned __int8 v6; // al
  int v7; // edx
  int v8; // eax
  unsigned int v9; // r8d
  int v10; // edx
  int *v11; // rcx
  void **v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // eax
  FARPROC ProcAddress; // rax
  HMODULE KernelBaseModuleHandle; // rax
  __int64 result; // rax
  int v22; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B0h]
  int v24; // [rsp+50h] [rbp-A8h]
  __int128 v25; // [rsp+54h] [rbp-A4h]
  int v26; // [rsp+64h] [rbp-94h]
  char v27; // [rsp+68h] [rbp-90h]
  __int16 v28; // [rsp+6Ah] [rbp-8Eh]
  __int64 v29; // [rsp+70h] [rbp-88h]
  __int64 v30; // [rsp+78h] [rbp-80h]
  void **v31; // [rsp+88h] [rbp-70h]
  int v32; // [rsp+90h] [rbp-68h]
  __int64 v33; // [rsp+98h] [rbp-60h]
  __int16 v34; // [rsp+A0h] [rbp-58h]
  int v35; // [rsp+ACh] [rbp-4Ch]
  int v36; // [rsp+B0h] [rbp-48h]
  void *v37[3]; // [rsp+C0h] [rbp-38h] BYREF
  unsigned __int64 v38; // [rsp+D8h] [rbp-20h]

  try
  {
    v3 = a2;
    v2 = a1;
    v4 = a1;
    (**(void (__fastcall ***)(_QWORD))*a1)(*a1);
  }
  catch ( ... )
  {
    if ( !*((_BYTE *)a1 + 128) )
    {
      *((_BYTE *)a1 + 128) = 3;
      *((_WORD *)a1 + 65) = 16395;
      a1[17] = 0LL;
    }
    v2 = a1;
    v3 = a2;
    v4 = a1;
  }
  v5 = *((_BYTE *)v2 + 128);
  if ( !v5 )
  {
    *((_BYTE *)v2 + 128) = 3;
    *((_WORD *)v4 + 65) = 16394;
    v4[17] = 0LL;
LABEL_6:
    if ( (v2[7] & 0x800) != 0 )
    {
LABEL_8:
      v6 = 1;
      goto LABEL_10;
    }
    goto LABEL_7;
  }
  if ( v5 == 4 )
    goto LABEL_9;
  if ( v5 != 1 )
    goto LABEL_6;
LABEL_7:
  if ( (*(_DWORD *)(v2[1] + 4LL) & 0x1000) != 0 )
    goto LABEL_8;
LABEL_9:
  v6 = 0;
LABEL_10:
  v7 = v6;
  v8 = v6 | 2;
  if ( (*(_DWORD *)(v2[1] + 4LL) & 0x200) != 0 )
    LOBYTE(v7) = 1;
  else
    v8 = v7;
  v9 = v8 | 4;
  if ( !(_BYTE)v7 )
    v9 = v8;
  tip::details::test_common_data<0>::data((__int64 **)v2, (__int64)v37, v9);
  memset_0(&v22, 0, 0x78uLL);
  v10 = *((_DWORD *)v2 + 37);
  if ( v10 )
    v22 = *((_DWORD *)v2 + 37);
  else
    v22 = *(_DWORD *)v2[1];
  v11 = (int *)v2[1];
  v23 = *((_QWORD *)v11 + 1);
  v24 = v11[1];
  v25 = *((_OWORD *)v2 + 7);
  v26 = *((_DWORD *)v2 + 14) | 0x200000;
  v27 = *((_BYTE *)v2 + 128);
  v28 = *((_WORD *)v2 + 65);
  v29 = v2[17];
  v30 = v3;
  if ( v37[2] )
  {
    v12 = v37;
    if ( v38 >= 0x10 )
      v12 = (void **)v37[0];
  }
  else
  {
    v12 = 0LL;
  }
  v31 = v12;
  v35 = *((_DWORD *)v2 + 36);
  if ( v10 )
    v36 = *v11;
  else
    v36 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = v2[8];
  if ( v15 != v2[9] )
  {
    do
    {
      v16 = *(_DWORD *)(v15 + 8);
      if ( v16 != (_DWORD)v13 )
        v14 = v15;
      v15 += 168LL;
      if ( v16 == (_DWORD)v13 )
        v16 = v13;
      v13 = v16;
    }
    while ( v15 != v2[9] );
    if ( v14 )
    {
      v32 = *(_DWORD *)(v14 + 8);
      v33 = *(_QWORD *)(v14 + 56);
      v34 = *(_WORD *)(v14 + 64);
    }
  }
  ProcAddress = (FARPROC)`TestReport'::`2'::s_pfnTestReport;
  if ( `TestReport'::`2'::s_pfnTestReport
    || (KernelBaseModuleHandle = wil_details_GetKernelBaseModuleHandle(),
        ProcAddress = GetProcAddress(KernelBaseModuleHandle, "TestReport"),
        (`TestReport'::`2'::s_pfnTestReport = (__int64)ProcAddress) != 0) )
  {
    ((void (__fastcall *)(int *, __int64, __int64))ProcAddress)(&v22, v15, v13);
  }
  result = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v2 + 24LL))(*v2, &v22);
  if ( v38 >= 0x10 )
    return std::_Deallocate<16,0>(v37[0], v38 + 1);
  return result;
}
