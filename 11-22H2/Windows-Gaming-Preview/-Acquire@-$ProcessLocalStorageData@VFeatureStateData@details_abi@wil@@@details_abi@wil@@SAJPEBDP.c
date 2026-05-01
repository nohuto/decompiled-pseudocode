/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180008774
 * Callers:
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180007278 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001B24 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180001F10 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180002640 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003720 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000373C (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x180003834 (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180003B5C (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180006370 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800081F0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x180008D50 (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004B4D0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004C634 (memset_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(
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
  void *v13; // rdx
  __int64 v14; // r8
  char *v15; // r9
  void *v16; // r14
  int ValueInternal; // eax
  __int64 v18; // rdx
  _DWORD *v19; // rax
  char *v20; // rax
  char *v21; // rsi
  int v22; // eax
  HANDLE ProcessHeap; // rax
  __int64 v24; // r8
  const char *v25; // r9
  HANDLE hObject; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v27; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v28[3]; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR Name[264]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

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
  v28[1] = (unsigned __int64)v16;
  v28[0] = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal((char *)Name, (__int64)v13, v28, (bool *)v15);
  LastErrorFailHr = ValueInternal;
  if ( ValueInternal >= 0 )
  {
    v19 = (_DWORD *)(4 * v28[0]);
    if ( 4 * v28[0] )
    {
      *a2 = v19;
      *(_DWORD *)*a2 = *v19 + 1;
      v7 = hObject;
LABEL_21:
      LastErrorFailHr = 0;
      goto LABEL_22;
    }
    *a2 = 0LL;
    v20 = (char *)wil::details::ProcessHeapAlloc(8u, 0x130uLL);
    v21 = v20;
    if ( v20 )
    {
      v27 = 0LL;
      v22 = wil::details_abi::SemaphoreValue::CreateFromPointer(
              (wil::details_abi::SemaphoreValue *)&v27,
              (char *)Name,
              (unsigned __int64)v20);
      LastErrorFailHr = v22;
      if ( v22 >= 0 )
      {
        *(_DWORD *)v21 = 1;
        *((_QWORD *)v21 + 1) = v7;
        v7 = 0LL;
        *((_QWORD *)v21 + 2) = v27;
        *(_QWORD *)&v27 = 0LL;
        *((_QWORD *)v21 + 3) = *((_QWORD *)&v27 + 1);
        *((_QWORD *)&v27 + 1) = 0LL;
        memset_0(v21 + 40, 0, 0x108uLL);
        *((_QWORD *)v21 + 4) = 0LL;
        wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)(v21 + 40));
        InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v21 + 232), 0, 0);
        *((_QWORD *)v21 + 34) = 0LL;
        *((_QWORD *)v21 + 35) = 0LL;
        *((_QWORD *)v21 + 36) = 0LL;
        *((_QWORD *)v21 + 37) = 0LL;
        *a2 = v21;
        wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)&v27);
        goto LABEL_21;
      }
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x147, (int)"wil", (const char *)(unsigned int)v22);
      wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)&v27);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v21);
    }
    else
    {
      LastErrorFailHr = -2147024882;
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x144, (int)"wil", (const char *)0x8007000ELL);
    }
    v18 = 304LL;
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0x62, (int)"wil", (const char *)(unsigned int)ValueInternal);
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6B, (int)"wil", (const char *)LastErrorFailHr);
  v18 = 296LL;
LABEL_19:
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v18, (int)"wil", (const char *)LastErrorFailHr);
LABEL_22:
  if ( v16 && !ReleaseMutex(v16) )
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x941, v24, v25);
LABEL_3:
  if ( v7 && !CloseHandle(v7) )
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x937, v9, v10);
  return LastErrorFailHr;
}
