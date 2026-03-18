/*
 * XREFs of ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x180027784
 * Callers:
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x1800276B4 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180178118 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800279B8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180027CD0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180177F9C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180178E94 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::CreateFromValueInternal(
        wil::details_abi::SemaphoreValue *this,
        const unsigned __int16 *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  WCHAR *v6; // rax
  __int64 v7; // r11
  LONG v8; // edi
  __int64 v9; // rbp
  __int64 v10; // r8
  WCHAR *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  char *v14; // r8
  WCHAR v15; // r9
  WCHAR *v16; // rax
  LONG v17; // r8d
  unsigned __int64 v18; // r14
  LONG v19; // esi
  HANDLE Semaphore; // rax
  wil::details *v21; // rcx
  int LastErrorFailHr; // eax
  unsigned int v23; // esi
  __int64 v24; // rdx
  WCHAR *v25; // rax
  __int64 v26; // r8
  WCHAR *v27; // rcx
  __int64 v28; // rbx
  char *v29; // rax
  WCHAR v30; // dx
  WCHAR *v31; // rax
  HANDLE v32; // rax
  wil::details *v33; // rcx
  int v34; // eax
  unsigned int v35; // ebx
  WCHAR Name[264]; // [rsp+30h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  if ( (a4 & 0xC000000000000000uLL) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(this);
  StringCchCopyW(Name, 0x104uLL, a2);
  v6 = Name;
  v7 = 260LL;
  v8 = 1;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v7;
  }
  while ( v7 );
  v9 = 2147483646LL;
  v10 = (260 - v7) & -(__int64)(v7 != 0);
  if ( v7 )
  {
    v11 = &Name[v10];
    v12 = 260 - v10;
    if ( v10 != 260 )
    {
      v13 = 2147483646LL;
      v14 = (char *)((char *)L"_p0" - (char *)v11);
      do
      {
        if ( !v13 )
          break;
        v15 = *(WCHAR *)((char *)v11 + (_QWORD)v14);
        if ( !v15 )
          break;
        *v11 = v15;
        --v13;
        ++v11;
        --v12;
      }
      while ( v12 );
    }
    v16 = v11 - 1;
    if ( v12 )
      v16 = v11;
    *v16 = 0;
  }
  v17 = 1;
  v18 = a4 >> 31;
  v19 = a4 & 0x7FFFFFFF;
  if ( v19 )
    v17 = v19;
  Semaphore = CreateSemaphoreExW(0LL, v19, v17, Name, 0, 0x1F0003u);
  if ( Semaphore )
  {
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      this,
      Semaphore);
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v21);
    v23 = LastErrorFailHr;
    if ( LastErrorFailHr < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x85, (int)"wil", (const char *)(unsigned int)LastErrorFailHr);
      return v23;
    }
  }
  v24 = 260LL;
  v25 = Name;
  do
  {
    if ( !*v25 )
      break;
    ++v25;
    --v24;
  }
  while ( v24 );
  v26 = (260 - v24) & -(__int64)(v24 != 0);
  if ( v24 )
  {
    v27 = &Name[v26];
    v28 = 260 - v26;
    if ( 260 != v26 )
    {
      v29 = (char *)((char *)L"h" - (char *)v27);
      do
      {
        if ( !v9 )
          break;
        v30 = *(WCHAR *)((char *)v27 + (_QWORD)v29);
        if ( !v30 )
          break;
        *v27 = v30;
        --v9;
        ++v27;
        --v28;
      }
      while ( v28 );
    }
    v31 = v27 - 1;
    if ( v28 )
      v31 = v27;
    *v31 = 0;
  }
  if ( (_DWORD)v18 )
    v8 = v18;
  v32 = CreateSemaphoreExW(0LL, v18, v8, Name, 0, 0x1F0003u);
  if ( v32 )
  {
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (char *)this + 8,
      v32);
    return 0LL;
  }
  v34 = wil::details::GetLastErrorFailHr(v33);
  v35 = v34;
  if ( v34 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0x89, (int)"wil", (const char *)(unsigned int)v34);
  return v35;
}
