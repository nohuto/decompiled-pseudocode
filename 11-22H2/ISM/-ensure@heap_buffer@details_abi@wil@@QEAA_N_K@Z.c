/*
 * XREFs of ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18003E2E4
 * Callers:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18001B718 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18003E044 (-SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPT.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18003E0F8 (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18003E1D0 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x1800A6F38 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     memcpy_s @ 0x18003E410 (memcpy_s.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800558A8 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1800A4C8C (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1800A5254 (--1last_error_context@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall wil::details_abi::heap_buffer::ensure(wil::details_abi::heap_buffer *this, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v7; // rbx
  HANDLE ProcessHeap; // rax
  char *v9; // rsi
  void (__fastcall *v10)(HANDLE, char *); // r14
  char v11; // bp
  HANDLE v12; // rax
  rsize_t v13; // r14
  void *v14; // rdx
  wil::details *v15; // rcx
  char v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  v4 = *((_QWORD *)this + 1) + a2 - *(_QWORD *)this;
  v5 = *((_QWORD *)this + 2) - *(_QWORD *)this;
  if ( v4 < v5 )
    return 1;
  if ( a2 < 2 * v5 )
    v2 = 2 * v5;
  if ( v5 >= v2 )
    return 1;
  wil::last_error_context::last_error_context((wil::last_error_context *)&v16);
  v7 = (v2 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
  ProcessHeap = GetProcessHeap();
  v9 = (char *)HeapAlloc(ProcessHeap, 0, v7);
  v10 = (void (__fastcall *)(HANDLE, char *))wil::details::g_pfnRtlDisownModuleHeapAllocation;
  v11 = 0;
  if ( wil::details::g_pfnRtlDisownModuleHeapAllocation )
  {
    v12 = GetProcessHeap();
    v10(v12, v9);
  }
  if ( v9 )
  {
    v13 = *((_QWORD *)this + 1) - *(_QWORD *)this;
    memcpy_s(v9, v7, *(const void *const *)this, v13);
    v15 = (wil::details *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = v9;
    if ( v15 )
      wil::details::FreeProcessHeap(v15, v14);
    *(_QWORD *)this = v9;
    *((_QWORD *)this + 1) = &v9[v13];
    *((_QWORD *)this + 2) = &v9[v7];
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v16);
    return 1;
  }
  wil::last_error_context::~last_error_context((wil::last_error_context *)&v16);
  return v11;
}
