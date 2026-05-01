/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18008116C
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x1800810FC (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800070B0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     StringCopyWorkerW @ 0x18004FDF8 (StringCopyWorkerW.c)
 *     StringValidateDestAndLengthW @ 0x18004FEB8 (StringValidateDestAndLengthW.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007D558 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x18007E858 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180080AF0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180080B10 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        char *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  unsigned int v4; // ebx
  size_t *v6; // r8
  __int64 v7; // r9
  WCHAR *v8; // rax
  wil::details *v9; // rax
  int ValueFromSemaphore; // eax
  size_t v11; // rdx
  __int64 v12; // r8
  size_t v13; // r9
  unsigned int LastError; // edi
  void *v15; // rdx
  size_t *v16; // r8
  HANDLE v17; // rax
  __int64 v18; // r8
  const char *v19; // r9
  int v20; // eax
  void *v21; // rdx
  __int64 v22; // r8
  void *v23; // rdx
  __int64 v24; // r8
  const char *v25; // r9
  size_t v27; // [rsp+20h] [rbp-E0h]
  int v28; // [rsp+30h] [rbp-D0h] BYREF
  int v29; // [rsp+34h] [rbp-CCh] BYREF
  size_t pcchDestLength; // [rsp+38h] [rbp-C8h] BYREF
  wil::details *v31; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  v4 = 0;
  *a3 = 0LL;
  StringCchCopyW((char *)Name, 260LL, a1);
  v7 = 260LL;
  v8 = Name;
  do
  {
    if ( !*v8 )
      break;
    ++v8;
    --v7;
  }
  while ( v7 );
  if ( v7 )
    StringCopyWorkerW(
      (WCHAR *)((char *)Name + ((2 * (260 - v7)) & -(__int64)(v7 != 0))),
      ((v7 - 260) & ((unsigned __int128)-(__int128)(unsigned __int64)v7 >> 64)) + 260,
      v6,
      L"_p0",
      v27);
  v9 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v31 = v9;
  if ( !v9 )
  {
    if ( GetLastError() == 2 )
      LastError = 0;
    else
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC9, v24, v25);
    goto LABEL_20;
  }
  v29 = 0;
  v28 = 0;
  ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v9, &v29);
  LastError = ValueFromSemaphore;
  if ( ValueFromSemaphore < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xCF, v12, (const char *)(unsigned int)ValueFromSemaphore);
LABEL_20:
    v4 = LastError;
    goto LABEL_21;
  }
  if ( StringValidateDestAndLengthW(Name, v11, &pcchDestLength, v13) >= 0 )
    StringCopyWorkerW(&Name[pcchDestLength], 260 - pcchDestLength, v16, L"h", v27);
  v17 = OpenSemaphoreW(0x1F0003u, 0, Name);
  pcchDestLength = (size_t)v17;
  if ( !v17 )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD5, v18, v19);
    goto LABEL_16;
  }
  v20 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v17, &v28);
  LastError = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD7, v22, (const char *)(unsigned int)v20);
LABEL_16:
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
      (wil::details **)&pcchDestLength,
      v23);
    goto LABEL_20;
  }
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
    (wil::details **)&pcchDestLength,
    v21);
  *a3 = v29 | (unsigned __int64)((__int64)v28 << 31);
LABEL_21:
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
    &v31,
    v15);
  return v4;
}
