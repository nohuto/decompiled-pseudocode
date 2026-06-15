/*
 * XREFs of ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180006514
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x180046AD0 (wil--details--_dynamic_atexit_destructor_for__g_processLocalData__.c)
 * Callees:
 *     ??1?$ThreadLocalStorage@UThreadLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x180004E5C (--1-$ThreadLocalStorage@UThreadLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180005410 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180005464 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x1800066CC (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Release(_QWORD *lpMem)
{
  void *v2; // rbx
  DWORD v3; // eax
  void *v4; // rdx
  const char *v5; // r9
  wil::details *v7; // rbp
  DWORD LastError; // edi
  void *v9; // rdx
  wil::details *v10; // rbp
  DWORD v11; // edi
  void *v12; // rdx
  DWORD v13; // edi
  void *v14; // rdx
  void *v15; // rdx
  wil::details *v16; // rcx
  wil::details *v17; // rcx
  wil::details *v18; // rcx
  HANDLE ProcessHeap; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( wil::details::g_processShutdownInProgress
    || wil::details::g_pfnDllShutdownInProgress && (unsigned __int8)wil::details::g_pfnDllShutdownInProgress() )
  {
    --*(_DWORD *)lpMem;
  }
  else
  {
    v2 = (void *)lpMem[1];
    v3 = WaitForSingleObjectEx(v2, 0xFFFFFFFF, 0);
    if ( v3 == 258 )
    {
      v2 = 0LL;
    }
    else if ( (v3 & 0xFFFFFF7F) != 0 )
    {
      wil::details::in1diag3::FailFast_Unexpected(
        retaddr,
        2895LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
        v5);
    }
    if ( (*(_DWORD *)lpMem)-- == 1 )
    {
      v7 = (wil::details *)lpMem[2];
      if ( v7 )
      {
        LastError = GetLastError();
        wil::details::CloseHandle(v7, v9);
        SetLastError(LastError);
      }
      lpMem[2] = 0LL;
      v10 = (wil::details *)lpMem[3];
      if ( v10 )
      {
        v11 = GetLastError();
        wil::details::CloseHandle(v10, v12);
        SetLastError(v11);
      }
      lpMem[3] = 0LL;
      if ( v2 )
      {
        v13 = GetLastError();
        wil::details::ReleaseMutex((wil::details *)v2, v14);
        SetLastError(v13);
      }
      wil::details_abi::ThreadLocalStorage<wil::details_abi::ThreadLocalData>::~ThreadLocalStorage<wil::details_abi::ThreadLocalData>(lpMem + 5);
      v16 = (wil::details *)lpMem[3];
      if ( v16 )
        wil::details::CloseHandle(v16, v15);
      v17 = (wil::details *)lpMem[2];
      if ( v17 )
        wil::details::CloseHandle(v17, v15);
      v18 = (wil::details *)lpMem[1];
      if ( v18 )
        wil::details::CloseHandle(v18, v15);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
    else if ( v2 )
    {
      wil::details::ReleaseMutex((wil::details *)v2, v4);
    }
  }
}
