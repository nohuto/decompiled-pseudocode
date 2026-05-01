/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800036E8
 * Callers:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180002F5C (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x18000135C (-StringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180001DE4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800027A8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800027F0 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000280C (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEB_W_NPEA_KPEA_N@Z @ 0x1800029F0 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEB_W_NPEA_KPEA_N@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180003668 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEB_W$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180003B64 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     __security_check_cookie @ 0x180007300 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(
        __int64 a1,
        _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  HANDLE Mutex; // rax
  wil::details *v6; // rcx
  HANDLE v7; // rbx
  unsigned int LastErrorFailHr; // edi
  __int64 v9; // r8
  const char *v10; // r9
  DWORD v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  char *v15; // r9
  void *v16; // rsi
  int ValueInternal; // eax
  _DWORD *v18; // rax
  __int64 v19; // r8
  const char *v20; // r9
  int v21; // eax
  HANDLE hObject; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v23[3]; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 260LL, L"Local\\SM0:%lu:%lu:%hs", CurrentProcessId, 120, a1);
  hObject = 0LL;
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    &hObject,
    Mutex);
  v7 = hObject;
  if ( !hObject )
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v6);
    goto LABEL_3;
  }
  v12 = WaitForSingleObjectEx(hObject, 0xFFFFFFFF, 0);
  if ( v12 == 258 )
  {
    v16 = 0LL;
  }
  else
  {
    if ( (v12 & 0xFFFFFF7F) != 0 )
      wil::details::in1diag3::FailFast_Unexpected(retaddr, v13, v14, v15);
    v16 = v7;
  }
  v23[1] = (unsigned __int64)v16;
  v23[0] = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal(Name, v13, v23, (bool *)v15);
  LastErrorFailHr = ValueInternal;
  if ( ValueInternal >= 0 )
  {
    v18 = (_DWORD *)(4 * v23[0]);
    if ( 4 * v23[0] )
    {
      *a2 = v18;
      *(_DWORD *)*a2 = *v18 + 1;
    }
    else
    {
      v21 = wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
              Name,
              &hObject,
              a2);
      LastErrorFailHr = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(retaddr, (void *)0x130, (int)"wil", (const char *)(unsigned int)v21);
        goto LABEL_15;
      }
    }
    LastErrorFailHr = 0;
LABEL_15:
    v7 = hObject;
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0x62, (int)"wil", (const char *)(unsigned int)ValueInternal);
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6B, (int)"wil", (const char *)LastErrorFailHr);
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0x128, (int)"wil", (const char *)LastErrorFailHr);
LABEL_16:
  if ( v16 && !ReleaseMutex(v16) )
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x941, v19, v20);
LABEL_3:
  if ( v7 && !CloseHandle(v7) )
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x937, v9, v10);
  return LastErrorFailHr;
}
