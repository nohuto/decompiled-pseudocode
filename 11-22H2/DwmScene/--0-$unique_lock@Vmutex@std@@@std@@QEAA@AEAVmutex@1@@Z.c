/*
 * XREFs of ??0?$unique_lock@Vmutex@std@@@std@@QEAA@AEAVmutex@1@@Z @ 0x18002B36C
 * Callers:
 *     ?GetPresentLock@RenderOutput@Engine@Spectre@@UEAA?AV?$unique_lock@Vmutex@std@@@std@@XZ @ 0x18002C2C0 (-GetPresentLock@RenderOutput@Engine@Spectre@@UEAA-AV-$unique_lock@Vmutex@std@@@std@@XZ.c)
 *     ?OnShutdown@Engine@1Spectre@@MEAAXXZ @ 0x180035310 (-OnShutdown@Engine@1Spectre@@MEAAXXZ.c)
 *     ?SendPerformanceSummaryTimer@Engine@1Spectre@@IEAAXXZ @ 0x1800369E0 (-SendPerformanceSummaryTimer@Engine@1Spectre@@IEAAXXZ.c)
 *     ??1Display@Engine@Spectre@@QEAA@XZ @ 0x1800572C4 (--1Display@Engine@Spectre@@QEAA@XZ.c)
 *     ?RenderThread@Display@Engine@Spectre@@AEAAXXZ @ 0x1800581C0 (-RenderThread@Display@Engine@Spectre@@AEAAXXZ.c)
 *     ?SetRenderingMode@Display@Engine@Spectre@@QEAAXW4RenderingMode@123@@Z @ 0x180058314 (-SetRenderingMode@Display@Engine@Spectre@@QEAAXW4RenderingMode@123@@Z.c)
 *     ?WaitForPresent@Display@Engine@Spectre@@QEAAXXZ @ 0x1800583DC (-WaitForPresent@Display@Engine@Spectre@@QEAAXXZ.c)
 *     ?lock@SharedMutex@Utils@Spectre@@QEAAXXZ @ 0x1800E0D84 (-lock@SharedMutex@Utils@Spectre@@QEAAXXZ.c)
 *     ?lock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ @ 0x1800E0E04 (-lock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall std::unique_lock<std::mutex>::unique_lock<std::mutex>(__int64 a1, std::_Mutex_base *a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 8) = 0;
  std::_Mutex_base::lock(a2);
  result = a1;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
