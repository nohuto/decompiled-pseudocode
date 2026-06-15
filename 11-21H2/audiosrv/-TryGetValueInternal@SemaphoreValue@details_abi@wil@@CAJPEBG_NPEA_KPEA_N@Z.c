/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18005AD24
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18005AAA4 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180012B50 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18004CB1C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x1800BF01C (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BFD00 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        char *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  unsigned int v4; // ebx
  WCHAR *v6; // rax
  __int64 v7; // r11
  __int64 v8; // r14
  __int64 v9; // r8
  WCHAR *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  char *v13; // r8
  WCHAR v14; // r9
  WCHAR *v15; // rax
  wil::details *v16; // rax
  void *v17; // rdx
  const char *v18; // r9
  int v19; // esi
  int ValueFromSemaphore; // eax
  __int64 v22; // rdx
  WCHAR *v23; // rax
  __int64 v24; // r8
  WCHAR *v25; // rdx
  __int64 v26; // rdi
  char *v27; // rax
  WCHAR v28; // cx
  WCHAR *v29; // rax
  wil::details *v30; // rax
  const char *v31; // r9
  int v32; // eax
  void *v33; // rdx
  int LastError; // edi
  void *v35; // rdx
  int v36[2]; // [rsp+28h] [rbp-E0h] BYREF
  wil::details *v37; // [rsp+30h] [rbp-D8h] BYREF
  wil::details *v38; // [rsp+38h] [rbp-D0h] BYREF
  WCHAR Name[264]; // [rsp+48h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+280h] [rbp+178h]

  v4 = 0;
  *a3 = 0LL;
  StringCchCopyW((char *)Name, 260LL, a1);
  v6 = Name;
  v7 = 260LL;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v7;
  }
  while ( v7 );
  v8 = 2147483646LL;
  v9 = (260 - v7) & -(__int64)(v7 != 0);
  if ( v7 )
  {
    v10 = &Name[v9];
    v11 = 260 - v9;
    if ( v9 != 260 )
    {
      v12 = 2147483646LL;
      v13 = (char *)((char *)L"_p0" - (char *)v10);
      do
      {
        if ( !v12 )
          break;
        v14 = *(WCHAR *)((char *)v10 + (_QWORD)v13);
        if ( !v14 )
          break;
        *v10 = v14;
        --v12;
        ++v10;
        --v11;
      }
      while ( v11 );
    }
    v15 = v10 - 1;
    if ( v11 )
      v15 = v10;
    *v15 = 0;
  }
  v16 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v38 = v16;
  if ( v16 )
  {
    v36[1] = 0;
    v36[0] = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v16, &v36[1]);
    v19 = ValueFromSemaphore;
    if ( ValueFromSemaphore >= 0 )
    {
      v22 = 260LL;
      v23 = Name;
      do
      {
        if ( !*v23 )
          break;
        ++v23;
        --v22;
      }
      while ( v22 );
      v24 = (260 - v22) & -(__int64)(v22 != 0);
      if ( v22 )
      {
        v25 = &Name[v24];
        v26 = 260 - v24;
        if ( 260 != v24 )
        {
          v27 = (char *)((char *)L"h" - (char *)v25);
          do
          {
            if ( !v8 )
              break;
            v28 = *(WCHAR *)((char *)v25 + (_QWORD)v27);
            if ( !v28 )
              break;
            *v25 = v28;
            --v8;
            ++v25;
            --v26;
          }
          while ( v26 );
        }
        v29 = v25 - 1;
        if ( v26 )
          v29 = v25;
        *v29 = 0;
      }
      v30 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
      v37 = v30;
      if ( v30 )
      {
        v32 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v30, v36);
        LastError = v32;
        if ( v32 >= 0 )
        {
          __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
            &v37,
            v33);
          *a3 = v36[1] | (unsigned __int64)((__int64)v36[0] << 31);
          goto LABEL_17;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD7,
          (unsigned int)"wil",
          (const char *)(unsigned int)v32,
          v36[0]);
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD5, (unsigned int)"wil", v31);
      }
      __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
        &v37,
        v35);
      v4 = LastError;
      goto LABEL_17;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCF,
      (unsigned int)"wil",
      (const char *)(unsigned int)ValueFromSemaphore,
      v36[0]);
  }
  else if ( GetLastError() == 2 )
  {
    v19 = 0;
  }
  else
  {
    v19 = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC9, (unsigned int)"wil", v18);
  }
  v4 = v19;
LABEL_17:
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
    &v38,
    v17);
  return v4;
}
