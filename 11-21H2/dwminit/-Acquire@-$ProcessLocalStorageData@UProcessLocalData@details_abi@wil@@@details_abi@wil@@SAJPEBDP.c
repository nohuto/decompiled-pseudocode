/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000A234
 * Callers:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x18000B21C (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180001C50 (__security_check_cookie.c)
 *     memset_0 @ 0x180002628 (memset_0.c)
 *     ??$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z @ 0x18000401C (--$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005DE8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180005FEC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180008A14 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180008A30 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x180009F14 (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x18000A9A4 (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x18000B620 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18000D264 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 */

signed int __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(
        __int64 a1,
        _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  void (__fastcall *Mutex)(wil::details *__hidden, void *); // rax
  wil::details *v6; // rcx
  void (__fastcall *v7)(wil::details *__hidden, void *); // rbx
  DWORD v9; // eax
  bool v10; // dl
  char *v11; // r9
  void (__fastcall *v12)(wil::details *__hidden, void *); // rsi
  int ValueInternal; // eax
  unsigned __int64 v14; // r8
  unsigned int v15; // edi
  _DWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rdi
  unsigned int v19; // r14d
  int v20; // eax
  HANDLE ProcessHeap; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // [rsp+30h] [rbp-D0h] BYREF
  void (__fastcall *v25)(wil::details *__hidden, void *); // [rsp+38h] [rbp-C8h] BYREF
  __int128 v26; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 260LL, L"Local\\SM0:%lu:%lu:%hs", CurrentProcessId, 120, a1);
  Mutex = (void (__fastcall *)(wil::details *__hidden, void *))CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  v7 = Mutex;
  if ( !Mutex )
    return wil::details::GetLastErrorFailHr(v6);
  v9 = WaitForSingleObjectEx(Mutex, 0xFFFFFFFF, 0);
  if ( v9 == 258 )
  {
    v12 = 0LL;
  }
  else
  {
    if ( (v9 & 0xFFFFFF7F) != 0 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        2895LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
        v11);
    v12 = v7;
  }
  v24 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal(Name, v10, &v24, (bool *)v11);
  v15 = ValueInternal;
  if ( ValueInternal < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x62, (__int64)"wil", (const char *)(unsigned int)ValueInternal);
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6B, (__int64)"wil", (const char *)v15);
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x126, (__int64)"wil", (const char *)v15);
    if ( v12 )
    {
      v24 = (unsigned __int64)v12;
      v25 = wil::details::ReleaseMutex;
      ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&v25, &v24);
    }
    v25 = v7;
    v24 = (unsigned __int64)wil::details::CloseHandle;
    ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&v24, &v25);
    return v15;
  }
  v16 = (_DWORD *)(4 * v24);
  if ( 4 * v24 )
  {
    *a2 = v16;
    *(_DWORD *)*a2 = *v16 + 1;
LABEL_23:
    if ( v12 )
    {
      v25 = v12;
      v24 = (unsigned __int64)wil::details::ReleaseMutex;
      ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&v24, &v25);
    }
    if ( v7 )
    {
      v25 = v7;
      v24 = (unsigned __int64)wil::details::CloseHandle;
      ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&v24, &v25);
    }
    return 0;
  }
  *a2 = 0LL;
  v17 = wil::details::ProcessHeapAlloc(8u, 0x78uLL, v14);
  v18 = v17;
  if ( v17 )
  {
    v26 = 0LL;
    v20 = wil::details_abi::SemaphoreValue::CreateFromPointer((wil::details_abi::SemaphoreValue *)&v26, Name, v17);
    v19 = v20;
    if ( v20 >= 0 )
    {
      v22 = v26;
      v18[1] = v7;
      v18[2] = v22;
      v7 = 0LL;
      v23 = *((_QWORD *)&v26 + 1);
      v26 = 0uLL;
      *(_DWORD *)v18 = 1;
      v18[3] = v23;
      memset_0((char *)v18 + 34, 0, 0x56uLL);
      *((_WORD *)v18 + 16) = 88;
      *((_DWORD *)v18 + 9) = 1;
      memset_0(v18 + 5, 0, 0x50uLL);
      *a2 = v18;
      wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)&v26);
      goto LABEL_23;
    }
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x145, (__int64)"wil", (const char *)(unsigned int)v20);
    wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)&v26);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v18);
  }
  else
  {
    v19 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x142, (__int64)"wil", (const char *)0x8007000ELL);
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0x12E, (__int64)"wil", (const char *)v19);
  if ( v12 )
  {
    v25 = v12;
    v24 = (unsigned __int64)wil::details::ReleaseMutex;
    ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&v24, &v25);
  }
  if ( v7 )
  {
    v25 = v7;
    v24 = (unsigned __int64)wil::details::CloseHandle;
    ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&v24, &v25);
  }
  return v19;
}
