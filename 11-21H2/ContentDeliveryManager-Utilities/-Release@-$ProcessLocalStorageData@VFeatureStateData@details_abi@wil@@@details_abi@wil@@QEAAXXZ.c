/*
 * XREFs of ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180042A80
 * Callers:
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x1800294C8 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x1800F7970 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x1800280F4 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ??1FeatureStateData@details_abi@wil@@QEAA@XZ @ 0x1800293E0 (--1FeatureStateData@details_abi@wil@@QEAA@XZ.c)
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180029884 (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180030AC0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ @ 0x180031AA4 (-Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800324E8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x18003F71C (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x1800434C0 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x1800463BC (-Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(char *lpMem)
{
  void *v2; // rbx
  DWORD v3; // eax
  void *v4; // rdx
  const char *v5; // r9
  bool v6; // zf
  DWORD LastError; // edi
  void *v8; // rdx
  void *v9; // rdx
  wil::details *v10; // rcx
  wil::details *v11; // rcx
  wil::details *v12; // rcx
  HANDLE ProcessHeap; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  const struct wil::details_abi::RawUsageIndex *v16; // r9
  _BYTE v17[64]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v18[64]; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v19[64]; // [rsp+A0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  if ( wil::details::g_processShutdownInProgress
    || wil::details::g_pfnDllShutdownInProgress && (unsigned __int8)wil::details::g_pfnDllShutdownInProgress() )
  {
    v6 = (*(_DWORD *)lpMem)-- == 1;
    if ( v6 )
    {
      wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)v17);
      if ( lpMem[96] )
        wil::details_abi::RawUsageIndex::Swap(
          (wil::details_abi::RawUsageIndex *)v17,
          (struct wil::details_abi::RawUsageIndex *)(lpMem + 40));
      if ( lpMem[160] )
        wil::details_abi::RawUsageIndex::Swap(
          (wil::details_abi::RawUsageIndex *)v18,
          (struct wil::details_abi::RawUsageIndex *)(lpMem + 104));
      if ( lpMem[224] )
        wil::details_abi::RawUsageIndex::Swap(
          (wil::details_abi::RawUsageIndex *)v19,
          (struct wil::details_abi::RawUsageIndex *)(lpMem + 168));
      wil::details_abi::UsageIndexes::Record((wil::details_abi::UsageIndexes *)v17, v14, v15, v16);
      wil::details_abi::UsageIndexes::~UsageIndexes((wil::details_abi::UsageIndexes *)v17);
    }
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
    v6 = (*(_DWORD *)lpMem)-- == 1;
    if ( v6 )
    {
      wil::details_abi::SemaphoreValue::Destroy((wil::details **)lpMem + 2);
      if ( v2 )
      {
        LastError = GetLastError();
        wil::details::ReleaseMutex((wil::details *)v2, v8);
        SetLastError(LastError);
      }
      wil::details_abi::FeatureStateData::~FeatureStateData((wil::details_abi::FeatureStateData *)(lpMem + 32));
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
