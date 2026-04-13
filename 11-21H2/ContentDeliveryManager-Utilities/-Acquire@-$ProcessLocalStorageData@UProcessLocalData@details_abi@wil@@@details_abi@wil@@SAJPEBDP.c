/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18002F7A4
 * Callers:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180038F68 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180030AC0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x180030E14 (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800324E8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800363EC (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x18003BFB8 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x1800434C0 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180045F44 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800467B0 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(
        __int64 a1,
        _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  wil::details *Mutex; // rax
  wil::details *v5; // rcx
  wil::details *v6; // rbx
  DWORD v8; // eax
  bool v9; // dl
  char *v10; // r9
  wil::details *v11; // rdi
  int ValueInternal; // eax
  void *v13; // rdx
  unsigned __int64 v14; // r8
  unsigned int v15; // esi
  void *v16; // rdx
  _DWORD *v17; // rax
  wil::details *v18; // rbx
  _QWORD *v19; // rax
  _QWORD *v20; // r14
  int v21; // eax
  void *v22; // rdx
  HANDLE ProcessHeap; // rax
  void *v24; // rdx
  int v25; // [rsp+20h] [rbp-E0h]
  int v26; // [rsp+20h] [rbp-E0h]
  int v27; // [rsp+20h] [rbp-E0h]
  wil::details *v28[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  wil::details *v30; // [rsp+48h] [rbp-B8h]
  wil::details *v31; // [rsp+50h] [rbp-B0h]
  WCHAR Name[264]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 0x104uLL, L"Local\\SM0:%lu:%lu:%hs", CurrentProcessId);
  Mutex = (wil::details *)CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  v6 = Mutex;
  v30 = Mutex;
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
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xB4F,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
        v10);
    v11 = v6;
  }
  v31 = v11;
  v29 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal(Name, v9, &v29, (bool *)v10);
  v15 = ValueInternal;
  if ( ValueInternal < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62,
      (unsigned int)"wil",
      (const char *)(unsigned int)ValueInternal,
      120);
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6B, (unsigned int)"wil", (const char *)v15, v25);
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x126, (unsigned int)"wil", (const char *)v15, v26);
    if ( v11 )
      wil::details::ReleaseMutex(v11, v16);
    wil::details::CloseHandle(v6, v16);
    return v15;
  }
  v17 = (_DWORD *)(4 * v29);
  if ( !(4 * v29) )
  {
    *a2 = 0LL;
    v19 = wil::details::ProcessHeapAlloc(8u, 0x78uLL, v14);
    v20 = v19;
    if ( v19 )
    {
      *(_OWORD *)v28 = 0LL;
      v21 = wil::details_abi::SemaphoreValue::CreateFromPointer((wil::details_abi::SemaphoreValue *)v28, Name, v19);
      v15 = v21;
      if ( v21 >= 0 )
      {
        *(_DWORD *)v20 = 1;
        v20[1] = v6;
        v18 = 0LL;
        v30 = 0LL;
        v20[2] = v28[0];
        v28[0] = 0LL;
        v20[3] = v28[1];
        v28[1] = 0LL;
        memset_0((char *)v20 + 34, 0, 0x56uLL);
        *((_WORD *)v20 + 16) = 88;
        *((_DWORD *)v20 + 9) = 1;
        memset_0(v20 + 5, 0, 0x50uLL);
        *a2 = v20;
        goto LABEL_27;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x145,
        (unsigned int)"wil",
        (const char *)(unsigned int)v21,
        120);
      if ( v28[1] )
        wil::details::CloseHandle(v28[1], v22);
      if ( v28[0] )
        wil::details::CloseHandle(v28[0], v22);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v20);
    }
    else
    {
      v15 = -2147024882;
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x142, (unsigned int)"wil", (const char *)0x8007000ELL, 120);
    }
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x12E, (unsigned int)"wil", (const char *)v15, v27);
    if ( v11 )
      wil::details::ReleaseMutex(v11, v24);
    if ( v6 )
      wil::details::CloseHandle(v6, v24);
    return v15;
  }
  *a2 = v17;
  *(_DWORD *)*a2 = *v17 + 1;
  v18 = v30;
LABEL_27:
  if ( v11 )
    wil::details::ReleaseMutex(v11, v13);
  if ( v18 )
    wil::details::CloseHandle(v18, v13);
  return 0LL;
}
