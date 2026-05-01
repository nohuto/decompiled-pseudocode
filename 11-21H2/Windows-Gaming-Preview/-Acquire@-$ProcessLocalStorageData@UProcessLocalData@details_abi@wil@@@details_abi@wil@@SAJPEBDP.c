/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180008358
 * Callers:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x1800041B0 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001B14 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180001F04 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180002630 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800036FC (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180003750 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x180003780 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x1800038B0 (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180003B88 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     __security_check_cookie @ 0x18004A5E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004B744 (memset_0.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(
        __int64 a1,
        _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  wil::details *Mutex; // rax
  wil::details *v6; // rcx
  wil::details *v7; // rbx
  void *v8; // rdx
  unsigned int LastErrorFailHr; // edi
  DWORD v10; // eax
  void *v11; // rdx
  __int64 v12; // r8
  char *v13; // r9
  wil::details *v14; // r14
  int ValueInternal; // eax
  __int64 v16; // rdx
  _DWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rsi
  int v20; // eax
  void *v21; // rdx
  HANDLE ProcessHeap; // rax
  wil::details *v24[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v25; // [rsp+40h] [rbp-C0h] BYREF
  wil::details *v26; // [rsp+48h] [rbp-B8h]
  wil::details *v27; // [rsp+50h] [rbp-B0h]
  WCHAR Name[264]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 260LL, L"Local\\SM0:%lu:%lu:%hs", CurrentProcessId, 120, a1);
  Mutex = (wil::details *)CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  v7 = Mutex;
  v26 = Mutex;
  if ( !Mutex )
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v6);
    goto LABEL_25;
  }
  v10 = WaitForSingleObjectEx(Mutex, 0xFFFFFFFF, 0);
  if ( v10 == 258 )
  {
    v14 = 0LL;
  }
  else
  {
    if ( (v10 & 0xFFFFFF7F) != 0 )
      wil::details::in1diag3::FailFast_Unexpected(retaddr, v11, v12, v13);
    v14 = v7;
  }
  v27 = v14;
  v25 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal((char *)Name, (__int64)v11, &v25, (bool *)v13);
  LastErrorFailHr = ValueInternal;
  if ( ValueInternal < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x62, (int)"wil", (const char *)(unsigned int)ValueInternal);
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6B, (int)"wil", (const char *)LastErrorFailHr);
    v16 = 294LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v16, (int)"wil", (const char *)LastErrorFailHr);
    goto LABEL_23;
  }
  v17 = (_DWORD *)(4 * v25);
  if ( !(4 * v25) )
  {
    *a2 = 0LL;
    v18 = wil::details::ProcessHeapAlloc(8u, 0x78uLL);
    v19 = v18;
    if ( v18 )
    {
      *(_OWORD *)v24 = 0LL;
      v20 = wil::details_abi::SemaphoreValue::CreateFromPointer(
              (wil::details_abi::SemaphoreValue *)v24,
              (char *)Name,
              (unsigned __int64)v18);
      LastErrorFailHr = v20;
      if ( v20 >= 0 )
      {
        *(_DWORD *)v19 = 1;
        v19[1] = v7;
        v7 = 0LL;
        v26 = 0LL;
        v19[2] = v24[0];
        v24[0] = 0LL;
        v19[3] = v24[1];
        v24[1] = 0LL;
        memset_0((char *)v19 + 34, 0, 0x56uLL);
        *((_WORD *)v19 + 16) = 88;
        *((_DWORD *)v19 + 9) = 1;
        memset_0(v19 + 5, 0, 0x50uLL);
        *a2 = v19;
        goto LABEL_22;
      }
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x145, (int)"wil", (const char *)(unsigned int)v20);
      if ( v24[1] )
        wil::details::CloseHandle(v24[1], v21);
      if ( v24[0] )
        wil::details::CloseHandle(v24[0], v21);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v19);
    }
    else
    {
      LastErrorFailHr = -2147024882;
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x142, (int)"wil", (const char *)0x8007000ELL);
    }
    v16 = 302LL;
    goto LABEL_20;
  }
  *a2 = v17;
  *(_DWORD *)*a2 = *v17 + 1;
  v7 = v26;
LABEL_22:
  LastErrorFailHr = 0;
LABEL_23:
  if ( v14 )
    wil::details::ReleaseMutex(v14, v8);
LABEL_25:
  if ( v7 )
    wil::details::CloseHandle(v7, v8);
  return LastErrorFailHr;
}
