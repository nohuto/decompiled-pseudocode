/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x14004E708
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x14004E688 (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140020820 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x140037E2E (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??1?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAA@XZ @ 0x14004B444 (--1-$unique_any_t@V-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x14004C978 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14004DEB4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        size_t *a1,
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
  int ValueFromSemaphore; // eax
  unsigned int LastError; // ebx
  void *v19; // rdx
  __int64 v20; // rdx
  WCHAR *v21; // rax
  __int64 v22; // r8
  WCHAR *v23; // rdx
  __int64 v24; // rsi
  char *v25; // rcx
  WCHAR v26; // ax
  WCHAR *v27; // rax
  wil::details *v28; // rax
  const char *v29; // r9
  wil::details *v30; // rbx
  int v31; // eax
  void *v32; // rdx
  int v33; // esi
  void *v34; // rdx
  void *v35; // rdx
  void *v37; // rdx
  const char *v38; // r9
  int v39; // [rsp+20h] [rbp-E0h] BYREF
  int v40; // [rsp+24h] [rbp-DCh] BYREF
  wil::details *v41; // [rsp+28h] [rbp-D8h] BYREF
  wil::details *v42; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR Name[264]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  *a3 = 0LL;
  StringCchCopyW(Name, 0x104uLL, a1);
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
  v41 = v15;
  v16 = v15;
  if ( v15 )
  {
    v40 = 0;
    v39 = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v15, &v40);
    LastError = ValueFromSemaphore;
    if ( ValueFromSemaphore >= 0 )
    {
      v20 = 260LL;
      v21 = Name;
      do
      {
        if ( !*v21 )
          break;
        ++v21;
        --v20;
      }
      while ( v20 );
      v22 = (260 - v20) & -(__int64)(v20 != 0);
      if ( v20 )
      {
        v23 = &Name[v22];
        v24 = 260 - v22;
        if ( 260 != v22 )
        {
          v25 = (char *)((char *)L"h" - (char *)v23);
          do
          {
            if ( !v7 )
              break;
            v26 = *(WCHAR *)((char *)v23 + (_QWORD)v25);
            if ( !v26 )
              break;
            *v23 = v26;
            --v7;
            ++v23;
            --v24;
          }
          while ( v24 );
        }
        v27 = v23 - 1;
        if ( v24 )
          v27 = v23;
        *v27 = 0;
      }
      v28 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
      v42 = v28;
      v30 = v28;
      if ( v28 )
      {
        v31 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v28, &v39);
        v33 = v31;
        if ( v31 >= 0 )
        {
          wil::details::CloseHandle(v30, v32);
          *a3 = v40 | (unsigned __int64)((__int64)v39 << 31);
          wil::details::CloseHandle(v16, v35);
          return 0LL;
        }
        wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD7, (__int64)"wil", (const char *)(unsigned int)v31);
        wil::details::CloseHandle(v30, v34);
        LastError = v33;
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD5, (int)"wil", v29);
        __1__unique_any_t_V__mutex_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil___wil__QEAA_XZ(
          &v42,
          v37);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCF,
        (__int64)"wil",
        (const char *)(unsigned int)ValueFromSemaphore);
    }
  }
  else if ( GetLastError() == 2 )
  {
    LastError = 0;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC9, (int)"wil", v38);
  }
  __1__unique_any_t_V__mutex_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil___wil__QEAA_XZ(
    &v41,
    v19);
  return LastError;
}
