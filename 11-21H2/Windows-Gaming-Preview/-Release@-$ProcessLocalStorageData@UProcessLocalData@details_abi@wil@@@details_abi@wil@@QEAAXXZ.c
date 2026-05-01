/*
 * XREFs of ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180008634
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x18004D3F0 (wil--details--_dynamic_atexit_destructor_for__g_processLocalData__.c)
 * Callees:
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800036FC (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180003750 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x180003780 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ?Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ @ 0x180003820 (-Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ.c)
 *     ??1?$ThreadLocalStorage@UThreadLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x180008C94 (--1-$ThreadLocalStorage@UThreadLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Release(char *lpMem)
{
  void *v2; // rbx
  DWORD v3; // eax
  void *v4; // rdx
  __int64 v5; // r8
  const char *v6; // r9
  DWORD LastError; // edi
  void *v9; // rdx
  void *v10; // rdx
  wil::details *v11; // rcx
  wil::details *v12; // rcx
  wil::details *v13; // rcx
  HANDLE ProcessHeap; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( wil::details::g_processShutdownInProgress
    || wil::details::g_pfnDllShutdownInProgress && (unsigned __int8)wil::details::g_pfnDllShutdownInProgress() )
  {
    --*(_DWORD *)lpMem;
  }
  else
  {
    v2 = (void *)*((_QWORD *)lpMem + 1);
    v3 = WaitForSingleObjectEx(v2, 0xFFFFFFFF, 0);
    if ( v3 == 258 )
    {
      v2 = 0LL;
    }
    else if ( (v3 & 0xFFFFFF7F) != 0 )
    {
      wil::details::in1diag3::FailFast_Unexpected(retaddr, v4, v5, v6);
    }
    if ( (*(_DWORD *)lpMem)-- == 1 )
    {
      wil::details_abi::SemaphoreValue::Destroy((wil::details **)lpMem + 2);
      if ( v2 )
      {
        LastError = GetLastError();
        wil::details::ReleaseMutex((wil::details *)v2, v9);
        SetLastError(LastError);
      }
      wil::details_abi::ThreadLocalStorage<wil::details_abi::ThreadLocalData>::~ThreadLocalStorage<wil::details_abi::ThreadLocalData>(lpMem + 40);
      v11 = (wil::details *)*((_QWORD *)lpMem + 3);
      if ( v11 )
        wil::details::CloseHandle(v11, v10);
      v12 = (wil::details *)*((_QWORD *)lpMem + 2);
      if ( v12 )
        wil::details::CloseHandle(v12, v10);
      v13 = (wil::details *)*((_QWORD *)lpMem + 1);
      if ( v13 )
        wil::details::CloseHandle(v13, v10);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
    else if ( v2 )
    {
      wil::details::ReleaseMutex((wil::details *)v2, v4);
    }
  }
}
