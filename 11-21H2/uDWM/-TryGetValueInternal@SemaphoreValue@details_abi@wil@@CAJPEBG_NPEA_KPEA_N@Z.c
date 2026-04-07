/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180045718
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x18004856C (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18004593C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x18004595C (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800465A8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180095C14 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        const unsigned __int16 *a1,
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
  HANDLE v16; // rax
  int ValueFromSemaphore; // eax
  int LastError; // esi
  __int64 v19; // rdx
  WCHAR *v20; // rax
  __int64 v21; // r8
  WCHAR *v22; // rdx
  __int64 v23; // rdi
  char *v24; // rax
  WCHAR v25; // cx
  WCHAR *v26; // rax
  HANDLE v27; // rax
  const char *v28; // r9
  int v29; // eax
  int v30; // edi
  const char *v32; // r9
  int v33[2]; // [rsp+28h] [rbp-E0h] BYREF
  HANDLE v34; // [rsp+30h] [rbp-D8h] BYREF
  HANDLE v35[2]; // [rsp+38h] [rbp-D0h] BYREF
  WCHAR Name[264]; // [rsp+48h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+280h] [rbp+178h]

  v4 = 0;
  *a3 = 0LL;
  StringCchCopyW(Name, 0x104uLL, a1);
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
  v16 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v35[0] = v16;
  if ( !v16 )
  {
    if ( GetLastError() == 2 )
      LastError = 0;
    else
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC9, (unsigned int)"wil", v32);
    goto LABEL_38;
  }
  v33[1] = 0;
  v33[0] = 0;
  ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v16, &v33[1]);
  LastError = ValueFromSemaphore;
  if ( ValueFromSemaphore < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xCF, (int)"wil", (const char *)(unsigned int)ValueFromSemaphore);
LABEL_38:
    v4 = LastError;
    goto LABEL_30;
  }
  v19 = 260LL;
  v20 = Name;
  do
  {
    if ( !*v20 )
      break;
    ++v20;
    --v19;
  }
  while ( v19 );
  v21 = (260 - v19) & -(__int64)(v19 != 0);
  if ( v19 )
  {
    v22 = &Name[v21];
    v23 = 260 - v21;
    if ( 260 != v21 )
    {
      v24 = (char *)((char *)L"h" - (char *)v22);
      do
      {
        if ( !v8 )
          break;
        v25 = *(WCHAR *)((char *)v22 + (_QWORD)v24);
        if ( !v25 )
          break;
        *v22 = v25;
        --v8;
        ++v22;
        --v23;
      }
      while ( v23 );
    }
    v26 = v22 - 1;
    if ( v23 )
      v26 = v22;
    *v26 = 0;
  }
  v27 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v34 = v27;
  if ( !v27 )
  {
    v30 = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD5, (unsigned int)"wil", v28);
    goto LABEL_34;
  }
  v29 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v27, v33);
  v30 = v29;
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD7, (int)"wil", (const char *)(unsigned int)v29);
LABEL_34:
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(&v34);
    v4 = v30;
    goto LABEL_30;
  }
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(&v34);
  *a3 = ((__int64)v33[0] << 31) | v33[1];
LABEL_30:
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(v35);
  return v4;
}
