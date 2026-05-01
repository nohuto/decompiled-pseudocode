/*
 * XREFs of ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x18007DB40
 * Callers:
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x18008039C (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x1800804D4 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800070B0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     StringCopyWorkerW @ 0x18004FDF8 (StringCopyWorkerW.c)
 *     StringValidateDestAndLengthW @ 0x18004FEB8 (StringValidateDestAndLengthW.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18007E4A0 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180080B10 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800818B4 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800819BC (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::CreateFromValueInternal(
        wil::details_abi::SemaphoreValue *this,
        char *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  WCHAR *v6; // rax
  __int64 v7; // r8
  LONG v8; // esi
  LONG v9; // r8d
  unsigned __int64 v10; // rbp
  LONG v11; // edi
  HANDLE Semaphore; // rax
  wil::details *v13; // rcx
  int LastErrorFailHr; // eax
  size_t v15; // rdx
  unsigned int v16; // r8d
  size_t v17; // r9
  unsigned int v18; // edi
  size_t *v20; // r8
  HANDLE v21; // rax
  wil::details *v22; // rcx
  int v23; // eax
  unsigned int v24; // r8d
  unsigned int v25; // ebx
  size_t dwFlags; // [rsp+20h] [rbp-268h]
  size_t dwFlagsa; // [rsp+20h] [rbp-268h]
  DWORD dwFlagsb; // [rsp+20h] [rbp-268h]
  size_t pcchDestLength[2]; // [rsp+30h] [rbp-258h] BYREF
  WCHAR Name[264]; // [rsp+40h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]

  if ( (a4 & 0xC000000000000000uLL) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(this);
  StringCchCopyW((char *)Name, 260LL, a2);
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
  if ( v7 )
    StringCopyWorkerW(
      (WCHAR *)((char *)Name + ((2 * (260 - v7)) & -(__int64)(v7 != 0))),
      ((v7 - 260) & ((unsigned __int128)-(__int128)(unsigned __int64)v7 >> 64)) + 260,
      (size_t *)-v7,
      L"_p0",
      dwFlags);
  v9 = 1;
  v10 = a4 >> 31;
  v11 = a4 & 0x7FFFFFFF;
  if ( v11 )
    v9 = v11;
  Semaphore = CreateSemaphoreExW(0LL, v11, v9, Name, 0, 0x1F0003u);
  if ( Semaphore )
  {
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      this,
      Semaphore);
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v13);
    v18 = LastErrorFailHr;
    if ( LastErrorFailHr < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x85,
        v16,
        (const char *)(unsigned int)LastErrorFailHr,
        dwFlagsa);
      return v18;
    }
  }
  if ( StringValidateDestAndLengthW(Name, v15, pcchDestLength, v17) >= 0 )
    StringCopyWorkerW(&Name[pcchDestLength[0]], 260 - pcchDestLength[0], v20, L"h", dwFlagsa);
  if ( (_DWORD)v10 )
    v8 = v10;
  v21 = CreateSemaphoreExW(0LL, v10, v8, Name, 0, 0x1F0003u);
  if ( v21 )
  {
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (char *)this + 8,
      v21);
  }
  else
  {
    v23 = wil::details::GetLastErrorFailHr(v22);
    v25 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x89, v24, (const char *)(unsigned int)v23, dwFlagsb);
      return v25;
    }
  }
  return 0LL;
}
