/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800051DC
 * Callers:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180005CC0 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180005410 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180005464 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180005A30 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180006164 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x1800066CC (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800073B4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18000748C (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(
        __int64 a1,
        _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  wil::details *Mutex; // rax
  wil::details *v5; // rcx
  wil::details *v6; // rdi
  DWORD v8; // eax
  bool v9; // dl
  char *v10; // r9
  wil::details *v11; // rbx
  int ValueInternal; // eax
  void *v13; // rdx
  unsigned int v14; // esi
  void *v15; // rdx
  _DWORD *v16; // rax
  int v17; // eax
  unsigned int v18; // edi
  void *v19; // rdx
  int v20; // [rsp+20h] [rbp-E0h]
  int v21; // [rsp+20h] [rbp-E0h]
  wil::details *v22; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v23[3]; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 0x104uLL, L"Local\\SM0:%lu:%lu:%hs", CurrentProcessId);
  Mutex = (wil::details *)CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  v6 = Mutex;
  v22 = Mutex;
  if ( !Mutex )
    return wil::details::GetLastErrorFailHr(v5);
  v8 = WaitForSingleObjectEx(Mutex, 0xFFFFFFFF, 0);
  if ( v8 == 258 )
  {
    v11 = 0LL;
  }
  else
  {
    if ( (v8 & 0xFFFFFF7F) != 0 )
      wil::details::in1diag3::FailFast_Unexpected(
        retaddr,
        (void *)0xB4F,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
        v10);
    v11 = v6;
  }
  v23[1] = (unsigned __int64)v11;
  v23[0] = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal(Name, v9, v23, (bool *)v10);
  v14 = ValueInternal;
  if ( ValueInternal < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62,
      (unsigned int)"wil",
      (const char *)(unsigned int)ValueInternal,
      120);
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6B, (unsigned int)"wil", (const char *)v14, v20);
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x126, (unsigned int)"wil", (const char *)v14, v21);
    if ( v11 )
      wil::details::ReleaseMutex(v11, v15);
    wil::details::CloseHandle(v6, v15);
    return v14;
  }
  v16 = (_DWORD *)(4 * v23[0]);
  if ( 4 * v23[0] )
  {
    *a2 = v16;
    *(_DWORD *)*a2 = *v16 + 1;
LABEL_13:
    if ( v11 )
      wil::details::ReleaseMutex(v11, v13);
    if ( v22 )
      wil::details::CloseHandle(v22, v13);
    return 0LL;
  }
  v17 = wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(Name, &v22, a2);
  v18 = v17;
  if ( v17 >= 0 )
    goto LABEL_13;
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0x12E, (unsigned int)"wil", (const char *)(unsigned int)v17, 120);
  if ( v11 )
    wil::details::ReleaseMutex(v11, v19);
  if ( v22 )
    wil::details::CloseHandle(v22, v19);
  return v18;
}
