/*
 * XREFs of ?start@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18009F5A8
 * Callers:
 *     ?start@?$tip_test@V?$merged_data@U_tip_CompositionTextureSurfaceBindingTest_attributes@CompositionTextureTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18009F714 (-start@-$tip_test@V-$merged_data@U_tip_CompositionTextureSurfaceBindingTest_attributes@Compositi.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_CreateCompositionTextureTest_attributes@CompositionTextureTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x1800A0D6C (-start@-$tip_test@V-$merged_data@U_tip_CreateCompositionTextureTest_attributes@CompositionTextur.c)
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18000BE3C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     TestClose @ 0x1800979C4 (TestClose.c)
 *     TestCreate @ 0x180097A20 (TestCreate.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18009D9B8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x18009F3DC (-serialize_data@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E3AAC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1800E3DA4 (--1last_error_context@wil@@QEAA@XZ.c)
 */

_OWORD *__fastcall tip2::details::shared_data<0,0,1>::start(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  bool v6; // zf
  unsigned int *v7; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r15
  __int128 v13; // xmm0
  _BYTE v15[4]; // [rsp+30h] [rbp-D0h] BYREF
  DWORD LastError; // [rsp+34h] [rbp-CCh]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+38h] [rbp-C8h] BYREF
  void *v18; // [rsp+40h] [rbp-C0h] BYREF
  char v19; // [rsp+48h] [rbp-B8h]
  int v20; // [rsp+49h] [rbp-B7h] BYREF
  char v21; // [rsp+4Dh] [rbp-B3h]
  char v22; // [rsp+4Eh] [rbp-B2h] BYREF
  char v23; // [rsp+849h] [rbp+749h] BYREF
  int *v24; // [rsp+850h] [rbp+750h]
  char *v25; // [rsp+858h] [rbp+758h]
  char *v26; // [rsp+860h] [rbp+760h]

  wil::EnterCriticalSection(&v17, (struct _RTL_CRITICAL_SECTION *)(a1 + 192));
  v18 = 0LL;
  v6 = (*(_DWORD *)(a1 + 64) & 0x800) == 0;
  v7 = (unsigned int *)(a1 + 20);
  v24 = &v20;
  v26 = &v23;
  v25 = &v22;
  v19 = 0;
  v20 = -2143256512;
  v21 = 0;
  if ( !v6 && (*v7 & 0x8000) == 0 )
    v9 = tip2::details::shared_data<0,0,1>::serialize_data((_QWORD *)a1, (struct tson::write_buffer *)&v18, 1u);
  else
    v9 = 0LL;
  LOBYTE(v5) = *(_BYTE *)(a1 + 32);
  v10 = TestCreate(*(_DWORD *)(a1 + 16), v4, v5, *v7, v9, (_OWORD *)(a1 + 144));
  v11 = *(_QWORD *)(a1 + 232);
  v12 = v10;
  if ( v11 )
  {
    v15[0] = 0;
    LastError = GetLastError();
    TestClose(v11);
    wil::last_error_context::~last_error_context((wil::last_error_context *)v15);
  }
  *(_QWORD *)(a1 + 232) = v12;
  v13 = *(_OWORD *)(a1 + 144);
  *(_DWORD *)(a1 + 184) = 1;
  *a2 = v13;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v18);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v17);
  return a2;
}
