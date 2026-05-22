/*
 * XREFs of ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18003565C
 * Callers:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18001ADB0 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x1800353D4 (-SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPT.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180035488 (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x180035560 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x18009436C (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     memcpy_s @ 0x180035778 (memcpy_s.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x180054B38 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall wil::details_abi::heap_buffer::ensure(wil::details_abi::heap_buffer *this, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // rbx
  HANDLE ProcessHeap; // rax
  char *v8; // rax
  void (__fastcall *v9)(HANDLE, char *); // r14
  char v10; // bp
  char *v11; // rsi
  HANDLE v12; // rax
  rsize_t v13; // r14
  void *v14; // rdx
  wil::details *v15; // rcx

  v3 = a2;
  v4 = *((_QWORD *)this + 2) - *(_QWORD *)this;
  if ( a2 + *((_QWORD *)this + 1) - *(_QWORD *)this < v4 )
    return 1;
  if ( a2 < 2 * v4 )
    v3 = 2 * v4;
  if ( v4 < v3 )
  {
    v6 = (v3 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    ProcessHeap = GetProcessHeap();
    v8 = (char *)HeapAlloc(ProcessHeap, 0, v6);
    v9 = (void (__fastcall *)(HANDLE, char *))wil::details::g_pfnRtlDisownModuleHeapAllocation;
    v10 = 0;
    v11 = v8;
    if ( wil::details::g_pfnRtlDisownModuleHeapAllocation )
    {
      v12 = GetProcessHeap();
      v9(v12, v11);
    }
    if ( !v11 )
      return v10;
    v13 = *((_QWORD *)this + 1) - *(_QWORD *)this;
    memcpy_s(v11, v6, *(const void *const *)this, v13);
    v15 = (wil::details *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = v11;
    if ( v15 )
      wil::details::FreeProcessHeap(v15, v14);
    *(_QWORD *)this = v11;
    *((_QWORD *)this + 1) = &v11[v13];
    *((_QWORD *)this + 2) = &v11[v6];
  }
  return 1;
}
