/*
 * XREFs of ??0ActivityThreadWatcher@wil@@QEAA@$$QEAV01@@Z @ 0x1805C0440
 * Callers:
 *     ??$?0VActivityThreadWatcher@wil@@$0A@@?$optional@VActivityThreadWatcher@wil@@@std@@QEAA@$$QEAVActivityThreadWatcher@wil@@@Z @ 0x1805BEBB8 (--$-0VActivityThreadWatcher@wil@@$0A@@-$optional@VActivityThreadWatcher@wil@@@std@@QEAA@$$QEAVAc.c)
 *     ??$emplace@VActivityThreadWatcher@wil@@@?$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVActivityThreadWatcher@wil@@$$QEAV23@@Z @ 0x1805BFADC (--$emplace@VActivityThreadWatcher@wil@@@-$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVAct.c)
 * Callees:
 *     ??4StoredCallContextInfo@details@wil@@QEAAAEAV012@$$QEAV012@@Z @ 0x180048994 (--4StoredCallContextInfo@details@wil@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::ActivityThreadWatcher::ActivityThreadWatcher(__int64 a1, __int64 a2)
{
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  wil::details::StoredCallContextInfo::operator=(a1, a2);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  if ( *(_DWORD *)(a2 + 56) )
  {
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 32));
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 32));
  }
  *(_QWORD *)(a1 + 64) = a1;
  return a1;
}
