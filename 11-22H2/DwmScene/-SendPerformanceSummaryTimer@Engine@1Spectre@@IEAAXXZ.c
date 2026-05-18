/*
 * XREFs of ?SendPerformanceSummaryTimer@Engine@1Spectre@@IEAAXXZ @ 0x1800369E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$unique_lock@Vmutex@std@@@std@@QEAA@AEAVmutex@1@@Z @ 0x18002B36C (--0-$unique_lock@Vmutex@std@@@std@@QEAA@AEAVmutex@1@@Z.c)
 *     ??1?$unique_lock@Vmutex@std@@@std@@QEAA@XZ @ 0x18002B860 (--1-$unique_lock@Vmutex@std@@@std@@QEAA@XZ.c)
 *     ??$wait_for@_JU?$ratio@$00$00@std@@@condition_variable@std@@QEAA?AW4cv_status@1@AEAV?$unique_lock@Vmutex@std@@@1@AEBV?$duration@_JU?$ratio@$00$00@std@@@chrono@1@@Z @ 0x18003094C (--$wait_for@_JU-$ratio@$00$00@std@@@condition_variable@std@@QEAA-AW4cv_status@1@AEAV-$unique_loc.c)
 *     ?SendPerformanceSummary@Engine@1Spectre@@IEAAXXZ @ 0x18003691C (-SendPerformanceSummary@Engine@1Spectre@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::Engine::SendPerformanceSummaryTimer(Spectre::Engine::Engine *this)
{
  _Mtx_t v2[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  std::unique_lock<std::mutex>::unique_lock<std::mutex>((__int64)v2, (Spectre::Engine::Engine *)((char *)this + 1280));
  while ( 1 )
  {
    v3 = *((int *)this + 300);
    std::condition_variable::wait_for<__int64,std::ratio<1,1>>(
      (Spectre::Engine::Engine *)((char *)this + 1208),
      v2,
      &v3);
    if ( *((_BYTE *)this + 1360) )
      break;
    Spectre::Engine::Engine::SendPerformanceSummary((__int64 ***)this);
  }
  std::unique_lock<std::mutex>::~unique_lock<std::mutex>((__int64)v2);
}
