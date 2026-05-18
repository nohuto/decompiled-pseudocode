/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000A5E0
 * Callers:
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18000AC00 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180001C50 (__security_check_cookie.c)
 *     memset_0 @ 0x180002628 (memset_0.c)
 *     ??$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z @ 0x18000401C (--$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005DE8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180005FEC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180008A14 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180008A30 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180009A2C (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x180009F14 (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x18000A9A4 (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x18000B620 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18000D264 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 */

signed int __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(
        __int64 a1,
        _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  HANDLE Mutex; // rax
  wil::details *v6; // rcx
  unsigned __int64 v7; // rbx
  DWORD v9; // eax
  bool v10; // dl
  char *v11; // r9
  unsigned __int64 v12; // r14
  int ValueInternal; // eax
  unsigned __int64 v14; // r8
  unsigned int v15; // edi
  _DWORD *v16; // rax
  char *v17; // rax
  char *v18; // rdi
  unsigned int v19; // esi
  int v20; // eax
  HANDLE ProcessHeap; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v24; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 260LL, L"Local\\SM0:%lu:%lu:%hs", CurrentProcessId, 304, a1);
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  v7 = (unsigned __int64)Mutex;
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
  v23 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal(Name, v10, &v23, (bool *)v11);
  v15 = ValueInternal;
  if ( ValueInternal < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x62, (__int64)"wil", (const char *)(unsigned int)ValueInternal);
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6B, (__int64)"wil", (const char *)v15);
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x126, (__int64)"wil", (const char *)v15);
    if ( v12 )
    {
      v23 = v12;
      *(_QWORD *)&v24 = wil::details::ReleaseMutex;
      ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&v24, &v23);
    }
    *(_QWORD *)&v24 = v7;
    v23 = (unsigned __int64)wil::details::CloseHandle;
    ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&v23, &v24);
    return v15;
  }
  v16 = (_DWORD *)(4 * v23);
  if ( 4 * v23 )
  {
    *a2 = v16;
    *(_DWORD *)*a2 = *v16 + 1;
LABEL_23:
    if ( v12 )
    {
      *(_QWORD *)&v24 = v12;
      v23 = (unsigned __int64)wil::details::ReleaseMutex;
      ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&v23, &v24);
    }
    if ( v7 )
    {
      *(_QWORD *)&v24 = v7;
      v23 = (unsigned __int64)wil::details::CloseHandle;
      ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&v23, &v24);
    }
    return 0;
  }
  *a2 = 0LL;
  v17 = (char *)wil::details::ProcessHeapAlloc(8u, 0x130uLL, v14);
  v18 = v17;
  if ( v17 )
  {
    v24 = 0LL;
    v20 = wil::details_abi::SemaphoreValue::CreateFromPointer((wil::details_abi::SemaphoreValue *)&v24, Name, v17);
    v19 = v20;
    if ( v20 >= 0 )
    {
      *((_QWORD *)v18 + 2) = v24;
      v22 = *((_QWORD *)&v24 + 1);
      *((_QWORD *)v18 + 1) = v7;
      v7 = 0LL;
      v24 = 0uLL;
      *((_QWORD *)v18 + 3) = v22;
      *(_DWORD *)v18 = 1;
      memset_0(v18 + 40, 0, 0x108uLL);
      *((_QWORD *)v18 + 4) = 0LL;
      wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)(v18 + 40));
      InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v18 + 232), 0, 0);
      *((_QWORD *)v18 + 34) = 0LL;
      *((_QWORD *)v18 + 35) = 0LL;
      *((_QWORD *)v18 + 36) = 0LL;
      *((_QWORD *)v18 + 37) = 0LL;
      *a2 = v18;
      wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)&v24);
      goto LABEL_23;
    }
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x145, (__int64)"wil", (const char *)(unsigned int)v20);
    wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)&v24);
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
    *(_QWORD *)&v24 = v12;
    v23 = (unsigned __int64)wil::details::ReleaseMutex;
    ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&v23, &v24);
  }
  if ( v7 )
  {
    *(_QWORD *)&v24 = v7;
    v23 = (unsigned __int64)wil::details::CloseHandle;
    ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&v23, &v24);
  }
  return v19;
}
