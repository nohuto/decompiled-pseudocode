/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000B7C4
 * Callers:
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18000BC40 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180001C60 (__security_check_cookie.c)
 *     memset_0 @ 0x180002638 (memset_0.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x180003E5C (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x1800043F0 (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800045B4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180004B80 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x18000571C (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059F0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180006000 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180006074 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180006544 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180006560 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x18000B218 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(
        __int64 a1,
        _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  HANDLE Mutex; // rax
  wil::details *v6; // rcx
  HANDLE v7; // rbx
  unsigned int v8; // edi
  DWORD v10; // eax
  __int64 v11; // rdx
  char *v12; // r9
  void *v13; // r14
  int ValueInternal; // eax
  const char *v15; // r9
  const char *v16; // r9
  _DWORD *v17; // rax
  HANDLE v18; // rbx
  char *v19; // rax
  char *v20; // rdi
  unsigned int v21; // esi
  int v22; // eax
  HANDLE ProcessHeap; // rax
  const char *v24; // r9
  const char *v25; // r9
  __int64 v26; // rax
  const char *v27; // r9
  const char *v28; // r9
  HANDLE hObject; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v30; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 260LL, L"Local\\SM0:%lu:%lu:%hs", CurrentProcessId, 304, a1);
  hObject = 0LL;
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    &hObject,
    Mutex);
  v7 = hObject;
  if ( !hObject )
    return (unsigned int)wil::details::GetLastErrorFailHr(v6);
  v10 = WaitForSingleObjectEx(hObject, 0xFFFFFFFF, 0);
  if ( v10 == 258 )
  {
    v13 = 0LL;
  }
  else
  {
    if ( (v10 & 0xFFFFFF7F) != 0 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        2925LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
        v12);
    v13 = v7;
  }
  v31 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal((char *)Name, v11, &v31, (bool *)v12);
  v8 = ValueInternal;
  if ( ValueInternal < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x62, (__int64)"wil", (const char *)(unsigned int)ValueInternal);
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6B, (__int64)"wil", (const char *)v8);
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x128, (__int64)"wil", (const char *)v8);
    if ( v13 && !ReleaseMutex(v13) )
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x941,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
        v15);
    if ( v7 )
    {
      if ( !CloseHandle(v7) )
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x937,
          (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
          v16);
    }
    return v8;
  }
  v17 = (_DWORD *)(4 * v31);
  if ( 4 * v31 )
  {
    *a2 = v17;
    v18 = hObject;
    *(_DWORD *)*a2 = *v17 + 1;
    goto LABEL_26;
  }
  *a2 = 0LL;
  v19 = (char *)wil::details::ProcessHeapAlloc(8u, 0x130uLL);
  v20 = v19;
  if ( v19 )
  {
    v30 = 0LL;
    v22 = wil::details_abi::SemaphoreValue::CreateFromPointer(
            (wil::details_abi::SemaphoreValue *)&v30,
            (char *)Name,
            (unsigned __int64)v19);
    v21 = v22;
    if ( v22 >= 0 )
    {
      *((_QWORD *)v20 + 2) = v30;
      v26 = *((_QWORD *)&v30 + 1);
      *((_QWORD *)v20 + 1) = v7;
      v18 = 0LL;
      v30 = 0uLL;
      *((_QWORD *)v20 + 3) = v26;
      *(_DWORD *)v20 = 1;
      memset_0(v20 + 40, 0, 0x108uLL);
      *((_QWORD *)v20 + 4) = 0LL;
      wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)(v20 + 40));
      InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v20 + 232), 0, 0);
      *((_QWORD *)v20 + 34) = 0LL;
      *((_QWORD *)v20 + 35) = 0LL;
      *((_QWORD *)v20 + 36) = 0LL;
      *((_QWORD *)v20 + 37) = 0LL;
      *a2 = v20;
      wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)&v30);
LABEL_26:
      if ( v13 && !ReleaseMutex(v13) )
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x941,
          (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
          v27);
      if ( v18 && !CloseHandle(v18) )
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x937,
          (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
          v28);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x147, (__int64)"wil", (const char *)(unsigned int)v22);
    wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)&v30);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v20);
  }
  else
  {
    v21 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x144, (__int64)"wil", (const char *)0x8007000ELL);
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0x130, (__int64)"wil", (const char *)v21);
  if ( v13 && !ReleaseMutex(v13) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x941,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      v24);
  if ( v7 && !CloseHandle(v7) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x937,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      v25);
  return v21;
}
