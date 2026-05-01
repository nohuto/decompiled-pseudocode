/*
 * XREFs of ??1?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800A35CC
 * Callers:
 *     ??1Show@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18000B648 (--1Show@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18000BBE8 (--1WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1Hide@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18000CD5C (--1Hide@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18000D8A8 (--1OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1Uncloak@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18002ACF8 (--1Uncloak@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1Cloak@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18002BA98 (--1Cloak@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180048B0C (--1CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1OnViewCreatedBase@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1800A3538 (--1OnViewCreatedBase@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1Launch@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1800A35A0 (--1Launch@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1OnViewDestroyedBase@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180177BB8 (--1OnViewDestroyedBase@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1805F1010 (--1RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800A36B8 (--1-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderT_ea_1800A36B8.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802DEEA4 (--$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx
  char *v4; // rbx
  void *v5; // rbx
  HANDLE ProcessHeap; // rax
  void *v7; // rbx
  HANDLE v8; // rax
  __int64 *v9; // rax

  v2 = *(volatile signed __int32 **)(a1 + 312);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v4 = *(char **)(a1 + 312);
      if ( v4 )
      {
        wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(v4 + 8);
        operator delete(v4, 0x108uLL);
      }
    }
    *(_QWORD *)(a1 + 312) = 0LL;
  }
  v3 = *(volatile signed __int32 **)(a1 + 288);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3, 0xFFFFFFFF) == 1 )
    {
      v5 = *(void **)(a1 + 288);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v5);
    }
    *(_QWORD *)(a1 + 288) = 0LL;
    *(_QWORD *)(a1 + 296) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 120) )
  {
    v7 = *(void **)(a1 + 112);
    v8 = GetProcessHeap();
    HeapFree(v8, 0, v7);
    *(_BYTE *)(a1 + 120) = 0;
  }
  *(_QWORD *)(a1 + 112) = 0LL;
  if ( *(_DWORD *)(a1 + 56) == 1 )
  {
    *(_DWORD *)(a1 + 56) = 2;
    v9 = wil::details::static_lazy<SingleViewExperienceLogging>::get(
           (__int64)v3,
           _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    _tlgWriteActivityAutoStop<35184372088832,5>(v9[1], a1 + 64);
  }
  *(_DWORD *)(a1 + 56) = 3;
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
