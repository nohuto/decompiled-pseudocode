/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18005FF7C
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18005F830 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180028C1C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800486BC (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ??1?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAA@XZ @ 0x1800CC5C4 (--1-$unique_any_t@V-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x1800CCCF8 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CD4A0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        char *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  WCHAR *v5; // rax
  __int64 v6; // r11
  __int64 v7; // r14
  __int64 v8; // r8
  WCHAR *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  char *v12; // r8
  WCHAR v13; // r9
  WCHAR *v14; // rax
  wil::details *v15; // rax
  wil::details *v16; // rdi
  const char *v17; // r9
  unsigned int LastError; // ebx
  int ValueFromSemaphore; // eax
  __int64 v21; // rdx
  WCHAR *v22; // rax
  __int64 v23; // r8
  WCHAR *v24; // rdx
  __int64 v25; // rsi
  char *v26; // rcx
  WCHAR v27; // ax
  WCHAR *v28; // rax
  wil::details *v29; // rax
  const char *v30; // r9
  wil::details *v31; // rbx
  int v32; // eax
  void *v33; // rdx
  int v34; // esi
  void *v35; // rdx
  void *v36; // rdx
  int v37; // [rsp+20h] [rbp-E0h] BYREF
  int v38; // [rsp+24h] [rbp-DCh] BYREF
  wil::details *v39; // [rsp+28h] [rbp-D8h] BYREF
  wil::details *v40; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR Name[264]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  *a3 = 0LL;
  StringCchCopyW((char *)Name, 260LL, a1);
  v5 = Name;
  v6 = 260LL;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v6;
  }
  while ( v6 );
  v7 = 2147483646LL;
  v8 = (260 - v6) & -(__int64)(v6 != 0);
  if ( v6 )
  {
    v9 = &Name[v8];
    v10 = 260 - v8;
    if ( v8 != 260 )
    {
      v11 = 2147483646LL;
      v12 = (char *)((char *)L"_p0" - (char *)v9);
      do
      {
        if ( !v11 )
          break;
        v13 = *(WCHAR *)((char *)v9 + (_QWORD)v12);
        if ( !v13 )
          break;
        *v9 = v13;
        --v11;
        ++v9;
        --v10;
      }
      while ( v10 );
    }
    v14 = v9 - 1;
    if ( v10 )
      v14 = v9;
    *v14 = 0;
  }
  v15 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v39 = v15;
  v16 = v15;
  if ( !v15 )
  {
    if ( GetLastError() == 2 )
      LastError = 0;
    else
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC9, (unsigned int)"wil", v17);
    goto LABEL_16;
  }
  v38 = 0;
  v37 = 0;
  ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v15, &v38);
  LastError = ValueFromSemaphore;
  if ( ValueFromSemaphore < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xCF, (int)"wil", (const char *)(unsigned int)ValueFromSemaphore);
LABEL_16:
    __1__unique_any_t_V__mutex_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil___wil__QEAA_XZ(&v39);
    return LastError;
  }
  v21 = 260LL;
  v22 = Name;
  do
  {
    if ( !*v22 )
      break;
    ++v22;
    --v21;
  }
  while ( v21 );
  v23 = (260 - v21) & -(__int64)(v21 != 0);
  if ( v21 )
  {
    v24 = &Name[v23];
    v25 = 260 - v23;
    if ( 260 != v23 )
    {
      v26 = (char *)((char *)L"h" - (char *)v24);
      do
      {
        if ( !v7 )
          break;
        v27 = *(WCHAR *)((char *)v24 + (_QWORD)v26);
        if ( !v27 )
          break;
        *v24 = v27;
        --v7;
        ++v24;
        --v25;
      }
      while ( v25 );
    }
    v28 = v24 - 1;
    if ( v25 )
      v28 = v24;
    *v28 = 0;
  }
  v29 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v40 = v29;
  v31 = v29;
  if ( !v29 )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD5, (unsigned int)"wil", v30);
    __1__unique_any_t_V__mutex_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil___wil__QEAA_XZ(&v40);
    goto LABEL_16;
  }
  v32 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v29, &v37);
  v34 = v32;
  if ( v32 < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD7, (int)"wil", (const char *)(unsigned int)v32);
    wil::details::CloseHandle(v31, v35);
    LastError = v34;
    goto LABEL_16;
  }
  wil::details::CloseHandle(v31, v33);
  *a3 = v38 | (unsigned __int64)((__int64)v37 << 31);
  wil::details::CloseHandle(v16, v36);
  return 0LL;
}
