/*
 * XREFs of ?evaluate_and_report@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAX_J@Z @ 0x18009DFA4
 * Callers:
 *     ?complete_helper@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x18009DD08 (-complete_helper@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     tip_details_GetKernelBaseModuleHandle @ 0x180097AC8 (tip_details_GetKernelBaseModuleHandle.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18009D9B8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z @ 0x18009E254 (-evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x18009F3DC (-serialize_data@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall tip2::details::shared_data<0,0,1>::evaluate_and_report(_QWORD *a1, __int64 a2)
{
  char v4; // cl
  unsigned __int8 v5; // al
  char v6; // dl
  unsigned int v7; // ecx
  bool v8; // zf
  __int64 v9; // r8
  __int64 v10; // rsi
  int v11; // ecx
  __int128 v12; // xmm0
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned int v18; // eax
  FARPROC ProcAddress; // rax
  HMODULE KernelBaseModuleHandle; // rax
  const struct tip2::test_requirement *v21[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v22; // [rsp+30h] [rbp-D0h]
  __int128 v23; // [rsp+34h] [rbp-CCh]
  int v24; // [rsp+44h] [rbp-BCh]
  char v25; // [rsp+48h] [rbp-B8h]
  __int16 v26; // [rsp+4Ah] [rbp-B6h]
  __int64 v27; // [rsp+50h] [rbp-B0h]
  __int64 v28; // [rsp+58h] [rbp-A8h]
  __int64 v29; // [rsp+68h] [rbp-98h]
  int v30; // [rsp+70h] [rbp-90h]
  __int64 v31; // [rsp+78h] [rbp-88h]
  __int16 v32; // [rsp+80h] [rbp-80h]
  int v33; // [rsp+8Ch] [rbp-74h]
  int v34; // [rsp+90h] [rbp-70h]
  void *v35; // [rsp+A0h] [rbp-60h] BYREF
  char v36; // [rsp+A8h] [rbp-58h]
  int v37; // [rsp+A9h] [rbp-57h] BYREF
  char v38; // [rsp+ADh] [rbp-53h]
  char v39; // [rsp+AEh] [rbp-52h] BYREF
  char v40; // [rsp+8A9h] [rbp+7A9h] BYREF
  int *v41; // [rsp+8B0h] [rbp+7B0h]
  char *v42; // [rsp+8B8h] [rbp+7B8h]
  char *v43; // [rsp+8C0h] [rbp+7C0h]

  if ( !*((_BYTE *)a1 + 160)
    && tip2::details::evaluate_flags(
         (tip2::details *)(a1 + 1),
         (const struct tip2::test_state *)a1[5],
         (const struct tip2::test_requirement *)a1[7],
         (const struct tip2::test_requirement *)a1[6],
         v21[0]) )
  {
    (**(void (__fastcall ***)(_QWORD))*a1)(*a1);
  }
  v4 = *((_BYTE *)a1 + 160);
  if ( v4 )
  {
    if ( (unsigned __int8)(v4 - 2) > 1u && ((*((_DWORD *)a1 + 5) & 0x1000) == 0 || v4 == 4) )
      goto LABEL_11;
  }
  else
  {
    a1[21] = 0LL;
    *((_WORD *)a1 + 81) = 16394;
    *((_BYTE *)a1 + 160) = 3;
  }
  if ( (a1[8] & 0x800) != 0 )
  {
    v5 = 1;
    goto LABEL_12;
  }
LABEL_11:
  v5 = 0;
LABEL_12:
  v6 = v5;
  v41 = &v37;
  v7 = v5 | 2;
  v36 = 0;
  v8 = (*((_DWORD *)a1 + 5) & 0x200) == 0;
  v43 = &v40;
  if ( v8 )
    v7 = v5;
  v42 = &v39;
  v35 = 0LL;
  v8 = (*((_DWORD *)a1 + 5) & 0x200) == 0;
  v37 = -2143256512;
  if ( !v8 )
    v6 = 1;
  v38 = 0;
  v9 = v7 | 4;
  if ( !v6 )
    v9 = v7;
  v10 = tip2::details::shared_data<0,0,1>::serialize_data(a1, &v35, v9, 1LL);
  memset_0(v21, 0, 0x78uLL);
  v11 = *((_DWORD *)a1 + 45);
  if ( v11 )
    LODWORD(v21[0]) = *((_DWORD *)a1 + 45);
  else
    LODWORD(v21[0]) = *((_DWORD *)a1 + 4);
  v12 = *((_OWORD *)a1 + 9);
  v21[1] = *((const struct tip2::test_requirement **)a1 + 3);
  v22 = *((_DWORD *)a1 + 5);
  v13 = *((_DWORD *)a1 + 16) | 0x200000;
  v28 = a2;
  v24 = v13;
  v25 = *((_BYTE *)a1 + 160);
  v26 = *((_WORD *)a1 + 81);
  v27 = a1[21];
  v33 = *((_DWORD *)a1 + 44);
  v29 = v10;
  v23 = v12;
  if ( v11 )
    v34 = *((_DWORD *)a1 + 4);
  else
    v34 = 0;
  v14 = a1[9];
  v15 = 0LL;
  v16 = v14 + 168LL * a1[11];
  v17 = 0LL;
  if ( v14 != v16 )
  {
    do
    {
      v18 = *(_DWORD *)(v14 + 8);
      if ( (_DWORD)v15 != v18 )
        v17 = v14;
      v14 += 168LL;
      if ( (_DWORD)v15 == v18 )
        v18 = v15;
      v15 = v18;
    }
    while ( v14 != v16 );
    if ( v17 )
    {
      v30 = *(_DWORD *)(v17 + 8);
      v31 = *(_QWORD *)(v17 + 56);
      v32 = *(_WORD *)(v17 + 64);
    }
  }
  ProcAddress = (FARPROC)`TestReport'::`2'::s_pfnTestReport;
  if ( `TestReport'::`2'::s_pfnTestReport
    || (KernelBaseModuleHandle = tip_details_GetKernelBaseModuleHandle(),
        ProcAddress = GetProcAddress(KernelBaseModuleHandle, "TestReport"),
        (`TestReport'::`2'::s_pfnTestReport = (__int64)ProcAddress) != 0) )
  {
    ((void (__fastcall *)(const struct tip2::test_requirement **, __int64, __int64, __int64))ProcAddress)(
      v21,
      v14,
      v16,
      v15);
  }
  (*(void (__fastcall **)(_QWORD, const struct tip2::test_requirement **))(*(_QWORD *)*a1 + 24LL))(*a1, v21);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v35);
}
