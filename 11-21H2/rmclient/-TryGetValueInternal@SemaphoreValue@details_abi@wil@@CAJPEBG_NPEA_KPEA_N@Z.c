/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180011484
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x180011414 (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800082C0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18000CEEC (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x18000E824 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180010960 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010980 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        size_t *a1,
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
  __int64 v18; // r8
  unsigned int LastError; // edi
  __int64 v20; // rdx
  WCHAR *v21; // rax
  __int64 v22; // r8
  WCHAR *v23; // rdx
  __int64 v24; // rsi
  char *v25; // rax
  WCHAR v26; // cx
  WCHAR *v27; // rax
  HANDLE v28; // rax
  __int64 v29; // r8
  const char *v30; // r9
  int v31; // eax
  __int64 v32; // r8
  __int64 v33; // r8
  const char *v34; // r9
  int v36[2]; // [rsp+28h] [rbp-E0h] BYREF
  HANDLE v37; // [rsp+30h] [rbp-D8h] BYREF
  HANDLE v38[2]; // [rsp+38h] [rbp-D0h] BYREF
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
  v38[0] = v16;
  if ( !v16 )
  {
    if ( GetLastError() == 2 )
      LastError = 0;
    else
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC9, v33, v34);
    goto LABEL_37;
  }
  v36[1] = 0;
  v36[0] = 0;
  ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v16, &v36[1]);
  LastError = ValueFromSemaphore;
  if ( ValueFromSemaphore < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xCF, v18, (const char *)(unsigned int)ValueFromSemaphore);
LABEL_37:
    v4 = LastError;
    goto LABEL_38;
  }
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
        if ( !v8 )
          break;
        v26 = *(WCHAR *)((char *)v23 + (_QWORD)v25);
        if ( !v26 )
          break;
        *v23 = v26;
        --v8;
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
  v28 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v37 = v28;
  if ( !v28 )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD5, v29, v30);
    goto LABEL_33;
  }
  v31 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v28, v36);
  LastError = v31;
  if ( v31 < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD7, v32, (const char *)(unsigned int)v31);
LABEL_33:
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ((__int64 *)&v37);
    goto LABEL_37;
  }
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ((__int64 *)&v37);
  *a3 = v36[1] | (unsigned __int64)((__int64)v36[0] << 31);
LABEL_38:
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ((__int64 *)v38);
  return v4;
}
