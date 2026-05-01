/*
 * XREFs of ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180008A74
 * Callers:
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x180006A0C (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x18004D480 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800036FC (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180003750 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x180003780 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ?Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ @ 0x180003820 (-Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ.c)
 *     ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x1800050D4 (-Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z.c)
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x1800061C8 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180006288 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 *     ??1FeatureStateData@details_abi@wil@@QEAA@XZ @ 0x180006624 (--1FeatureStateData@details_abi@wil@@QEAA@XZ.c)
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x18000695C (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(char *lpMem)
{
  void *v2; // rbx
  DWORD v3; // eax
  void *v4; // rdx
  __int64 v5; // r8
  const char *v6; // r9
  bool v7; // zf
  DWORD LastError; // edi
  void *v9; // rdx
  void *v10; // rdx
  wil::details *v11; // rcx
  wil::details *v12; // rcx
  wil::details *v13; // rcx
  HANDLE ProcessHeap; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  const struct wil::details_abi::RawUsageIndex *v17; // r9
  _BYTE v18[64]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v19[64]; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v20[64]; // [rsp+A0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  if ( wil::details::g_processShutdownInProgress
    || wil::details::g_pfnDllShutdownInProgress && (unsigned __int8)wil::details::g_pfnDllShutdownInProgress() )
  {
    v7 = (*(_DWORD *)lpMem)-- == 1;
    if ( v7 )
    {
      wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)v18);
      if ( lpMem[96] )
        wil::details_abi::RawUsageIndex::Swap(
          (wil::details_abi::RawUsageIndex *)v18,
          (struct wil::details_abi::RawUsageIndex *)(lpMem + 40));
      if ( lpMem[160] )
        wil::details_abi::RawUsageIndex::Swap(
          (wil::details_abi::RawUsageIndex *)v19,
          (struct wil::details_abi::RawUsageIndex *)(lpMem + 104));
      if ( lpMem[224] )
        wil::details_abi::RawUsageIndex::Swap(
          (wil::details_abi::RawUsageIndex *)v20,
          (struct wil::details_abi::RawUsageIndex *)(lpMem + 168));
      wil::details_abi::UsageIndexes::Record((wil::details_abi::UsageIndexes *)v18, v15, v16, v17);
      wil::details_abi::UsageIndexes::~UsageIndexes((wil::details_abi::UsageIndexes *)v18);
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
      wil::details::in1diag3::FailFast_Unexpected(retaddr, v4, v5, v6);
    }
    v7 = (*(_DWORD *)lpMem)-- == 1;
    if ( v7 )
    {
      wil::details_abi::SemaphoreValue::Destroy((wil::details **)lpMem + 2);
      if ( v2 )
      {
        LastError = GetLastError();
        wil::details::ReleaseMutex((wil::details *)v2, v9);
        SetLastError(LastError);
      }
      wil::details_abi::FeatureStateData::~FeatureStateData((wil::details_abi::FeatureStateData *)(lpMem + 32));
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
