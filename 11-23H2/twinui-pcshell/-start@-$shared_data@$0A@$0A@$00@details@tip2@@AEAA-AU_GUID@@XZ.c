/*
 * XREFs of ?start@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA?AU_GUID@@XZ @ 0x1802893E8
 * Callers:
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18028733C (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@P.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180095B78 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHTIPTEST__@@P6AXPEAU1@@Z$1?TestClose@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHTIPTEST__@@@Z @ 0x1800983B8 (-reset@-$unique_storage@U-$resource_policy@PEAUHTIPTEST__@@P6AXPEAU1@@Z$1-TestClose@@YAX0@ZU-$in.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     TestCreate @ 0x180098EA4 (TestCreate.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180289230 (-serialize_data@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 */

_OWORD *__fastcall tip2::details::shared_data<0,0,1>::start(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  bool v6; // zf
  __int64 v8; // rax
  FARPROC v9; // rax
  __int128 v10; // xmm0
  void *v11; // rcx
  struct _RTL_CRITICAL_SECTION *v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-C0h] BYREF
  char v15; // [rsp+48h] [rbp-B8h]
  int v16; // [rsp+49h] [rbp-B7h] BYREF
  char v17; // [rsp+4Dh] [rbp-B3h]
  _BYTE v18[2043]; // [rsp+4Eh] [rbp-B2h] BYREF
  char v19; // [rsp+849h] [rbp+749h] BYREF
  int *v20; // [rsp+850h] [rbp+750h]
  _BYTE *v21; // [rsp+858h] [rbp+758h]
  char *v22; // [rsp+860h] [rbp+760h]

  v13[0] = 0LL;
  wil::EnterCriticalSection(v13, (struct _RTL_CRITICAL_SECTION *)(a1 + 192));
  memset_0(v18, 0, 0x802uLL);
  pv = 0LL;
  v6 = (*(_DWORD *)(a1 + 64) & 0x800) == 0;
  v20 = &v16;
  v22 = &v19;
  v21 = v18;
  v15 = 0;
  v16 = -2143256512;
  v17 = 0;
  if ( !v6 && (*(_DWORD *)(a1 + 20) & 0x8000) == 0 )
    v8 = tip2::details::shared_data<0,0,1>::serialize_data((_QWORD *)a1, (struct tson::write_buffer *)&pv, 1u);
  else
    v8 = 0LL;
  LOBYTE(v5) = *(_BYTE *)(a1 + 32);
  v9 = TestCreate(*(_DWORD *)(a1 + 16), v4, v5, *(_DWORD *)(a1 + 20), v8, a1 + 144);
  wil::details::unique_storage<wil::details::resource_policy<HTIPTEST__ *,void (*)(HTIPTEST__ *),&void TestClose(HTIPTEST__ *),wistd::integral_constant<unsigned __int64,0>,HTIPTEST__ *,HTIPTEST__ *,0,std::nullptr_t>>::reset(
    (__int64 *)(a1 + 232),
    (__int64)v9);
  v10 = *(_OWORD *)(a1 + 144);
  v11 = pv;
  *(_DWORD *)(a1 + 184) = 1;
  *a2 = v10;
  if ( v11 )
    CoTaskMemFree(v11);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(v13);
  return a2;
}
