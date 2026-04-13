/*
 * XREFs of ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180048AAC
 * Callers:
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x18003F278 (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18003F414 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x18003FA64 (-RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180040158 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180045FC0 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x1800462F8 (-SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPT.c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x18003BFB8 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 */

char __fastcall wil::details_abi::heap_buffer::ensure(wil::details_abi::heap_buffer *this, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // rbx
  char *v7; // rax
  char v8; // bp
  char *v9; // rsi
  rsize_t v10; // r14
  void *v11; // r15
  HANDLE ProcessHeap; // rax

  v3 = a2;
  v4 = *((_QWORD *)this + 2) - *(_QWORD *)this;
  if ( a2 + *((_QWORD *)this + 1) - *(_QWORD *)this < v4 )
    return 1;
  if ( a2 < 2 * v4 )
    v3 = 2 * v4;
  if ( v4 >= v3 )
    return 1;
  v6 = (v3 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
  v7 = (char *)wil::details::ProcessHeapAlloc(0, v6);
  v8 = 0;
  v9 = v7;
  if ( v7 )
  {
    v10 = *((_QWORD *)this + 1) - *(_QWORD *)this;
    memcpy_s(v7, v6, *(const void *const *)this, v10);
    v11 = (void *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = v9;
    if ( v11 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v11);
    }
    *(_QWORD *)this = v9;
    *((_QWORD *)this + 1) = &v9[v10];
    *((_QWORD *)this + 2) = &v9[v6];
    return 1;
  }
  return v8;
}
