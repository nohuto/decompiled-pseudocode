/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18007A218
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x18007A1A8 (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180031C70 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     StringCopyWorkerW @ 0x18004D12C (StringCopyWorkerW.c)
 *     StringValidateDestAndLengthW @ 0x18004D1EC (StringValidateDestAndLengthW.c)
 *     ??1?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAA@XZ @ 0x180075DC8 (--1-$unique_any_t@V-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800765F0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x1800776E8 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800797FC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007981C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        char *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  size_t *v5; // r8
  __int64 v6; // r9
  WCHAR *v7; // rax
  wil::details *v8; // rax
  wil::details *v9; // rdi
  int ValueFromSemaphore; // eax
  size_t v11; // rdx
  __int64 v12; // r8
  size_t v13; // r9
  unsigned int LastError; // ebx
  void *v15; // rdx
  size_t *v16; // r8
  wil::details *v17; // rax
  __int64 v18; // r8
  const char *v19; // r9
  wil::details *v20; // rbx
  int v21; // eax
  void *v22; // rdx
  __int64 v23; // r8
  int v24; // esi
  void *v25; // rdx
  void *v26; // rdx
  void *v28; // rdx
  __int64 v29; // r8
  const char *v30; // r9
  size_t v31; // [rsp+28h] [rbp-E0h]
  int v32[2]; // [rsp+38h] [rbp-D0h] BYREF
  size_t pcchDestLength; // [rsp+40h] [rbp-C8h] BYREF
  wil::details *v34; // [rsp+48h] [rbp-C0h] BYREF
  WCHAR Name[264]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+290h] [rbp+188h]

  *a3 = 0LL;
  StringCchCopyW((char *)Name, 260LL, a1);
  v6 = 260LL;
  v7 = Name;
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v6;
  }
  while ( v6 );
  if ( v6 )
    StringCopyWorkerW(
      (WCHAR *)((char *)Name + ((2 * (260 - v6)) & -(__int64)(v6 != 0))),
      ((v6 - 260) & ((unsigned __int128)-(__int128)(unsigned __int64)v6 >> 64)) + 260,
      v5,
      L"_p0",
      v31);
  v8 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v34 = v8;
  v9 = v8;
  if ( !v8 )
  {
    if ( GetLastError() == 2 )
      LastError = 0;
    else
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC9, v29, v30);
    goto LABEL_21;
  }
  v32[1] = 0;
  v32[0] = 0;
  ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v8, &v32[1]);
  LastError = ValueFromSemaphore;
  if ( ValueFromSemaphore < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xCF, v12, (const char *)(unsigned int)ValueFromSemaphore);
LABEL_21:
    __1__unique_any_t_V__mutex_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil___wil__QEAA_XZ(
      &v34,
      v15);
    return LastError;
  }
  if ( StringValidateDestAndLengthW(Name, v11, &pcchDestLength, v13) >= 0 )
    StringCopyWorkerW(&Name[pcchDestLength], 260 - pcchDestLength, v16, L"h", v31);
  v17 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  pcchDestLength = (size_t)v17;
  v20 = v17;
  if ( !v17 )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD5, v18, v19);
    __1__unique_any_t_V__mutex_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil___wil__QEAA_XZ(
      (wil::details **)&pcchDestLength,
      v28);
    goto LABEL_21;
  }
  v21 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v17, v32);
  v24 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD7, v23, (const char *)(unsigned int)v21);
    wil::details::CloseHandle(v20, v25);
    LastError = v24;
    goto LABEL_21;
  }
  wil::details::CloseHandle(v20, v22);
  *a3 = v32[1] | (unsigned __int64)((__int64)v32[0] << 31);
  if ( v9 )
    wil::details::CloseHandle(v9, v26);
  return 0LL;
}
