/*
 * XREFs of ?start@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18006CEE0
 * Callers:
 *     ?start@?$tip_test@V?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18006D048 (-start@-$tip_test@V-$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_ba.c)
 * Callees:
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18006A268 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x18006CD10 (-serialize_data@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 *     TestClose @ 0x18006D3D4 (TestClose.c)
 *     TestCreate @ 0x18006D430 (TestCreate.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800A4E04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1800A5254 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1800A5868 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 */

_OWORD *__fastcall tip2::details::shared_data<0,0,1>::start(__int64 a1, _OWORD *a2)
{
  int v4; // edx
  int v5; // r8d
  bool v6; // zf
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r15
  __int128 v12; // xmm0
  _BYTE v14[4]; // [rsp+30h] [rbp-D0h] BYREF
  DWORD LastError; // [rsp+34h] [rbp-CCh]
  _BYTE v16[8]; // [rsp+38h] [rbp-C8h] BYREF
  void *v17; // [rsp+40h] [rbp-C0h] BYREF
  char v18; // [rsp+48h] [rbp-B8h]
  int v19; // [rsp+49h] [rbp-B7h] BYREF
  char v20; // [rsp+4Dh] [rbp-B3h]
  char v21; // [rsp+4Eh] [rbp-B2h] BYREF
  char v22; // [rsp+849h] [rbp+749h] BYREF
  int *v23; // [rsp+850h] [rbp+750h]
  char *v24; // [rsp+858h] [rbp+758h]
  char *v25; // [rsp+860h] [rbp+760h]

  wil::EnterCriticalSection(v16, a1 + 192);
  v17 = 0LL;
  v6 = (*(_DWORD *)(a1 + 64) & 0x800) == 0;
  v23 = &v19;
  v25 = &v22;
  v24 = &v21;
  v18 = 0;
  v19 = -2143256512;
  v20 = 0;
  if ( !v6 && (*(_DWORD *)(a1 + 20) & 0x8000) == 0 )
    v8 = tip2::details::shared_data<0,0,1>::serialize_data((_QWORD *)a1, (struct tson::write_buffer *)&v17, 1u);
  else
    v8 = 0LL;
  LOBYTE(v5) = *(_BYTE *)(a1 + 32);
  v9 = TestCreate(*(_DWORD *)(a1 + 16), v4, v5, *(_DWORD *)(a1 + 20), v8, a1 + 144);
  v10 = *(_QWORD *)(a1 + 232);
  v11 = v9;
  if ( v10 )
  {
    v14[0] = 0;
    LastError = GetLastError();
    TestClose(v10);
    wil::last_error_context::~last_error_context((wil::last_error_context *)v14);
  }
  *(_QWORD *)(a1 + 232) = v11;
  v12 = *(_OWORD *)(a1 + 144);
  *(_DWORD *)(a1 + 184) = 1;
  *a2 = v12;
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v17);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v16);
  return a2;
}
