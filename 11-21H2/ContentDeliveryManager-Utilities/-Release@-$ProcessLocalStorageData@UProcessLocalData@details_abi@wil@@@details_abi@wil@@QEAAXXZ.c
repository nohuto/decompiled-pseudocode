/*
 * XREFs of ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180042924
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x1800F79E0 (wil--details--_dynamic_atexit_destructor_for__g_processLocalData__.c)
 * Callees:
 *     ??1?$ThreadLocalStorage@UThreadLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x180028D54 (--1-$ThreadLocalStorage@UThreadLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180030AC0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ @ 0x180031AA4 (-Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800324E8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x1800434C0 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Release(LPVOID lpMem)
{
  void *v2; // rbx
  DWORD v3; // eax
  void *v4; // rdx
  const char *v5; // r9
  DWORD LastError; // edi
  void *v8; // rdx
  void *v9; // rdx
  wil::details *v10; // rcx
  wil::details *v11; // rcx
  wil::details *v12; // rcx
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
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        2895LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
        v5);
    }
    if ( (*(_DWORD *)lpMem)-- == 1 )
    {
      wil::details_abi::SemaphoreValue::Destroy((wil::details **)lpMem + 2);
      if ( v2 )
      {
        LastError = GetLastError();
        wil::details::ReleaseMutex((wil::details *)v2, v8);
        SetLastError(LastError);
      }
      wil::details_abi::ThreadLocalStorage<wil::details_abi::ThreadLocalData>::~ThreadLocalStorage<wil::details_abi::ThreadLocalData>((__int64 *)lpMem + 5);
      v10 = (wil::details *)*((_QWORD *)lpMem + 3);
      if ( v10 )
        wil::details::CloseHandle(v10, v9);
      v11 = (wil::details *)*((_QWORD *)lpMem + 2);
      if ( v11 )
        wil::details::CloseHandle(v11, v9);
      v12 = (wil::details *)*((_QWORD *)lpMem + 1);
      if ( v12 )
        wil::details::CloseHandle(v12, v9);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
    else if ( v2 )
    {
      wil::details::ReleaseMutex((wil::details *)v2, v4);
    }
  }
}
