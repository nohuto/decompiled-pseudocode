/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180030590
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x1800302D4 (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180030800 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180030820 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007DEDC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        char *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r9
  WCHAR *v6; // rdx
  signed __int64 v7; // rcx
  WCHAR v9; // ax
  WCHAR *v10; // rax
  __int64 v11; // rdx
  WCHAR *v12; // rax
  __int64 v13; // r14
  __int64 v14; // r8
  WCHAR *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  char *v18; // r8
  WCHAR v19; // r9
  WCHAR *v20; // rax
  HANDLE v21; // rax
  int ValueFromSemaphore; // eax
  int LastError; // esi
  __int64 v24; // rdx
  WCHAR *v25; // rax
  __int64 v26; // r8
  WCHAR *v27; // rdx
  __int64 v28; // rdi
  char *v29; // rax
  WCHAR v30; // cx
  WCHAR *v31; // rax
  HANDLE v32; // rax
  const char *v33; // r9
  int v34; // eax
  int v35; // edi
  const char *v37; // r9
  int v38[2]; // [rsp+28h] [rbp-E0h] BYREF
  HANDLE v39; // [rsp+30h] [rbp-D8h] BYREF
  HANDLE v40[2]; // [rsp+38h] [rbp-D0h] BYREF
  WCHAR Name[264]; // [rsp+48h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+280h] [rbp+178h]

  v4 = 0;
  *a3 = 0LL;
  v5 = 260LL;
  v6 = Name;
  v7 = a1 - (char *)Name;
  do
  {
    if ( v5 == -2147483386 )
      break;
    v9 = *(WCHAR *)((char *)v6 + v7);
    if ( !v9 )
      break;
    *v6++ = v9;
    --v5;
  }
  while ( v5 );
  v10 = v6 - 1;
  if ( v5 )
    v10 = v6;
  v11 = 260LL;
  *v10 = 0;
  v12 = Name;
  do
  {
    if ( !*v12 )
      break;
    ++v12;
    --v11;
  }
  while ( v11 );
  v13 = 2147483646LL;
  v14 = (260 - v11) & -(__int64)(v11 != 0);
  if ( v11 )
  {
    v15 = &Name[v14];
    v16 = 260 - v14;
    if ( v14 != 260 )
    {
      v17 = 2147483646LL;
      v18 = (char *)((char *)L"_p0" - (char *)v15);
      do
      {
        if ( !v17 )
          break;
        v19 = *(WCHAR *)((char *)v15 + (_QWORD)v18);
        if ( !v19 )
          break;
        *v15 = v19;
        --v17;
        ++v15;
        --v16;
      }
      while ( v16 );
    }
    v20 = v15 - 1;
    if ( v16 )
      v20 = v15;
    *v20 = 0;
  }
  v21 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v40[0] = v21;
  if ( !v21 )
  {
    if ( GetLastError() == 2 )
      LastError = 0;
    else
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC9, (unsigned int)"wil", v37);
    goto LABEL_39;
  }
  v38[1] = 0;
  v38[0] = 0;
  ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v21, &v38[1]);
  LastError = ValueFromSemaphore;
  if ( ValueFromSemaphore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCF,
      (unsigned int)"wil",
      (const char *)(unsigned int)ValueFromSemaphore,
      v38[0]);
LABEL_39:
    v4 = LastError;
    goto LABEL_36;
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
        if ( !v13 )
          break;
        v30 = *(WCHAR *)((char *)v27 + (_QWORD)v29);
        if ( !v30 )
          break;
        *v27 = v30;
        --v13;
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
  v32 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v39 = v32;
  if ( !v32 )
  {
    v35 = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD5, (unsigned int)"wil", v33);
    goto LABEL_43;
  }
  v34 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v32, v38);
  v35 = v34;
  if ( v34 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD7,
      (unsigned int)"wil",
      (const char *)(unsigned int)v34,
      v38[0]);
LABEL_43:
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(&v39);
    v4 = v35;
    goto LABEL_36;
  }
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(&v39);
  *a3 = ((__int64)v38[0] << 31) | v38[1];
LABEL_36:
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(v40);
  return v4;
}
