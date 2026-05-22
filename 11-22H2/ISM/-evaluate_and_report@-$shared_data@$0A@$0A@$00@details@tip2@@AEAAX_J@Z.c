/*
 * XREFs of ?evaluate_and_report@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAX_J@Z @ 0x18006B6B4
 * Callers:
 *     ?complete_helper@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x18006B110 (-complete_helper@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18006A268 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z @ 0x18006B968 (-evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x18006CD10 (-serialize_data@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 *     tip_details_GetKernelBaseModuleHandle @ 0x18006D604 (tip_details_GetKernelBaseModuleHandle.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall tip2::details::shared_data<0,0,1>::evaluate_and_report(_QWORD *a1, __int64 a2)
{
  char v4; // cl
  unsigned __int8 v5; // al
  char v6; // dl
  unsigned int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // rsi
  int v10; // ecx
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // eax
  FARPROC ProcAddress; // rax
  HMODULE KernelBaseModuleHandle; // rax
  const struct tip2::test_requirement *v18; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+28h] [rbp-D8h]
  _BYTE v20[24]; // [rsp+30h] [rbp-D0h]
  int v21; // [rsp+48h] [rbp-B8h]
  __int64 v22; // [rsp+50h] [rbp-B0h]
  __int64 v23; // [rsp+58h] [rbp-A8h]
  __int64 v24; // [rsp+68h] [rbp-98h]
  int v25; // [rsp+70h] [rbp-90h]
  __int64 v26; // [rsp+78h] [rbp-88h]
  __int16 v27; // [rsp+80h] [rbp-80h]
  int v28; // [rsp+8Ch] [rbp-74h]
  int v29; // [rsp+90h] [rbp-70h]
  void *v30; // [rsp+A0h] [rbp-60h] BYREF
  char v31; // [rsp+A8h] [rbp-58h]
  int v32; // [rsp+A9h] [rbp-57h] BYREF
  char v33; // [rsp+ADh] [rbp-53h]
  char v34; // [rsp+AEh] [rbp-52h] BYREF
  char v35; // [rsp+8A9h] [rbp+7A9h] BYREF
  int *v36; // [rsp+8B0h] [rbp+7B0h]
  char *v37; // [rsp+8B8h] [rbp+7B8h]
  char *v38; // [rsp+8C0h] [rbp+7C0h]

  if ( !*((_BYTE *)a1 + 160)
    && tip2::details::evaluate_flags(
         (tip2::details *)(a1 + 1),
         (const struct tip2::test_state *)a1[5],
         (const struct tip2::test_requirement *)a1[7],
         (const struct tip2::test_requirement *)a1[6],
         v18) )
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
    *((_BYTE *)a1 + 160) = 3;
    *((_WORD *)a1 + 81) = 16394;
    a1[21] = 0LL;
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
  v7 = v5 | 2;
  if ( (*((_DWORD *)a1 + 5) & 0x200) == 0 )
    v7 = v5;
  v30 = 0LL;
  v31 = 0;
  v36 = &v32;
  v38 = &v35;
  v32 = -2143256512;
  v33 = 0;
  v37 = &v34;
  if ( (*((_DWORD *)a1 + 5) & 0x200) != 0 )
    v6 = 1;
  v8 = v7 | 4;
  if ( !v6 )
    v8 = v7;
  v9 = tip2::details::shared_data<0,0,1>::serialize_data(a1, &v30, v8);
  memset_0(&v18, 0, 0x78uLL);
  v10 = *((_DWORD *)a1 + 45);
  if ( v10 )
    LODWORD(v18) = *((_DWORD *)a1 + 45);
  else
    LODWORD(v18) = *((_DWORD *)a1 + 4);
  v19 = a1[3];
  *(_DWORD *)v20 = *((_DWORD *)a1 + 5);
  *(_OWORD *)&v20[4] = *((_OWORD *)a1 + 9);
  *(_DWORD *)&v20[20] = *((_DWORD *)a1 + 16) | 0x200000;
  LOBYTE(v21) = *((_BYTE *)a1 + 160);
  HIWORD(v21) = *((_WORD *)a1 + 81);
  v22 = a1[21];
  v23 = a2;
  v24 = v9;
  v28 = *((_DWORD *)a1 + 44);
  if ( v10 )
    v29 = *((_DWORD *)a1 + 4);
  else
    v29 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = a1[9];
  v14 = v13 + 168LL * a1[11];
  if ( v13 != v14 )
  {
    do
    {
      v15 = *(_DWORD *)(v13 + 8);
      if ( (_DWORD)v11 != v15 )
        v12 = v13;
      v13 += 168LL;
      if ( (_DWORD)v11 == v15 )
        v15 = v11;
      v11 = v15;
    }
    while ( v13 != v14 );
    if ( v12 )
    {
      v25 = *(_DWORD *)(v12 + 8);
      v26 = *(_QWORD *)(v12 + 56);
      v27 = *(_WORD *)(v12 + 64);
    }
  }
  ProcAddress = (FARPROC)`TestReport'::`2'::s_pfnTestReport;
  if ( `TestReport'::`2'::s_pfnTestReport
    || (KernelBaseModuleHandle = (HMODULE)tip_details_GetKernelBaseModuleHandle(
                                            v12,
                                            v13,
                                            v14,
                                            v11,
                                            (_DWORD)v18,
                                            v19,
                                            *(_QWORD *)v20,
                                            *(_QWORD *)&v20[8],
                                            *(_QWORD *)&v20[16],
                                            v21,
                                            v22,
                                            v23),
        ProcAddress = GetProcAddress(KernelBaseModuleHandle, "TestReport"),
        (`TestReport'::`2'::s_pfnTestReport = (__int64)ProcAddress) != 0) )
  {
    ((void (__fastcall *)(const struct tip2::test_requirement **, __int64, __int64, __int64))ProcAddress)(
      &v18,
      v13,
      v14,
      v11);
  }
  (*(void (__fastcall **)(_QWORD, const struct tip2::test_requirement **))(*(_QWORD *)*a1 + 24LL))(*a1, &v18);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v30);
}
