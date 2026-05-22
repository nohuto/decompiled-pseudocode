/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180032EE8
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x180032E28 (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180031890 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180033718 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ??1?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAA@XZ @ 0x1800556EC (--1-$unique_any_t@V-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009509C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        char *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  __int64 v4; // r9
  WCHAR *v5; // rdx
  signed __int64 v6; // rcx
  WCHAR v8; // ax
  WCHAR *v9; // rax
  __int64 v10; // rdx
  WCHAR *v11; // rax
  __int64 v12; // r14
  __int64 v13; // r8
  WCHAR *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  char *v17; // r8
  WCHAR v18; // r9
  WCHAR *v19; // rax
  wil::details *v20; // rax
  wil::details *v21; // rdi
  int ValueFromSemaphore; // eax
  unsigned int LastError; // ebx
  __int64 v24; // rdx
  WCHAR *v25; // rax
  __int64 v26; // r8
  WCHAR *v27; // rdx
  __int64 v28; // rsi
  char *v29; // rcx
  WCHAR v30; // ax
  WCHAR *v31; // rax
  wil::details *v32; // rax
  const char *v33; // r9
  wil::details *v34; // rbx
  int v35; // eax
  void *v36; // rdx
  int v37; // esi
  void *v38; // rdx
  void *v40; // rdx
  const char *v41; // r9
  int v42; // [rsp+20h] [rbp-E0h] BYREF
  int v43; // [rsp+24h] [rbp-DCh] BYREF
  wil::details *v44; // [rsp+28h] [rbp-D8h] BYREF
  wil::details *v45; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR Name[264]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  *a3 = 0LL;
  v4 = 260LL;
  v5 = Name;
  v6 = a1 - (char *)Name;
  do
  {
    if ( v4 == -2147483386 )
      break;
    v8 = *(WCHAR *)((char *)v5 + v6);
    if ( !v8 )
      break;
    *v5++ = v8;
    --v4;
  }
  while ( v4 );
  v9 = v5 - 1;
  if ( v4 )
    v9 = v5;
  v10 = 260LL;
  *v9 = 0;
  v11 = Name;
  do
  {
    if ( !*v11 )
      break;
    ++v11;
    --v10;
  }
  while ( v10 );
  v12 = 2147483646LL;
  v13 = (260 - v10) & -(__int64)(v10 != 0);
  if ( v10 )
  {
    v14 = &Name[v13];
    v15 = 260 - v13;
    if ( v13 != 260 )
    {
      v16 = 2147483646LL;
      v17 = (char *)((char *)L"_p0" - (char *)v14);
      do
      {
        if ( !v16 )
          break;
        v18 = *(WCHAR *)((char *)v14 + (_QWORD)v17);
        if ( !v18 )
          break;
        *v14 = v18;
        --v16;
        ++v14;
        --v15;
      }
      while ( v15 );
    }
    v19 = v14 - 1;
    if ( v15 )
      v19 = v14;
    *v19 = 0;
  }
  v20 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v44 = v20;
  v21 = v20;
  if ( v20 )
  {
    v43 = 0;
    v42 = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v20, &v43);
    LastError = ValueFromSemaphore;
    if ( ValueFromSemaphore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCF,
        (__int64)"wil",
        (const char *)(unsigned int)ValueFromSemaphore);
    }
    else
    {
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
            if ( !v12 )
              break;
            v30 = *(WCHAR *)((char *)v27 + (_QWORD)v29);
            if ( !v30 )
              break;
            *v27 = v30;
            --v12;
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
      v32 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
      v45 = v32;
      v34 = v32;
      if ( v32 )
      {
        v35 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v32, &v42);
        v37 = v35;
        if ( v35 >= 0 )
        {
          wil::details::CloseHandle(v34, v36);
          *a3 = ((__int64)v42 << 31) | v43;
          wil::details::CloseHandle(v21, v38);
          return 0LL;
        }
        wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD7, (__int64)"wil", (const char *)(unsigned int)v35);
        wil::details::CloseHandle(v34, v40);
        LastError = v37;
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD5, (unsigned int)"wil", v33);
        __1__unique_any_t_V__mutex_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil___wil__QEAA_XZ(&v45);
      }
    }
  }
  else if ( GetLastError() == 2 )
  {
    LastError = 0;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC9, (unsigned int)"wil", v41);
  }
  __1__unique_any_t_V__mutex_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil___wil__QEAA_XZ(&v44);
  return LastError;
}
