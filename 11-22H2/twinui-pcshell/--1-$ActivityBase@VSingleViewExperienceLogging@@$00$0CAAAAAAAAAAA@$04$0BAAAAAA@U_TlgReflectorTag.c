/*
 * XREFs of ??1?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800BA6CC
 * Callers:
 *     ??1Show@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18002B1DC (--1Show@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18002B940 (--1WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1Hide@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18002C398 (--1Hide@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18002C6F8 (--1OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1Uncloak@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180054EE4 (--1Uncloak@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1Cloak@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180056758 (--1Cloak@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180083EB8 (--1CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1OnViewDestroyedBase@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18010D064 (--1OnViewDestroyedBase@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1Launch@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18010D49C (--1Launch@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1OnViewCreatedBase@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18010D4C8 (--1OnViewCreatedBase@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1807471EC (--1RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800B980C (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18010DBA0 (-reset@-$shared_object@V-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflector_ea_18010DBA0.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18016B8F0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18016CF38 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ??$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x180395D28 (--$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
        _DWORD *a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rax

  wil::details::shared_object<wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 78);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)(a1 + 72));
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)(a1 + 24));
  if ( a1[14] == 1 )
  {
    a1[14] = 2;
    v3 = wil::details::static_lazy<SingleViewExperienceLogging>::get(
           v2,
           (void (__cdecl *)())_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    _tlgWriteActivityAutoStop<35184372088832,5>(v3[1], a1 + 16);
  }
  a1[14] = 3;
  if ( a1[8] )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 2));
}
