/*
 * XREFs of _lambda_5943cd26b3388b3d76ca98b9665004c9_::operator() @ 0x1C005FA0C
 * Callers:
 *     _lambda_5943cd26b3388b3d76ca98b9665004c9_::_lambda_invoker_cdecl_ @ 0x1C005F530 (_lambda_5943cd26b3388b3d76ca98b9665004c9_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C0020A90 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01061E8 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C010808C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C0108A08 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C010BC4C (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C012ED38 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall lambda_5943cd26b3388b3d76ca98b9665004c9_::operator()(__int64 a1, struct NDIS_BIND_FILTER_LINK *a2)
{
  Ndis::BindEngine *p_BindEngine; // rbx
  int v4; // edx
  char v5[160]; // [rsp+40h] [rbp-B8h] BYREF

  p_BindEngine = &a2->BindState.Miniport->BindEngine;
  Ndis::BindEngine::BeginPolicyUpdates(p_BindEngine);
  if ( Ndis::BindState::SetBinding(
         &a2->BindState,
         BindingEnabled,
         Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed) )
  {
    memset(v5, 0, sizeof(v5));
    if ( (unsigned __int8)byte_1C00EC66B >= 4u )
    {
      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v5);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v4,
          0x1Cu,
          0x73u,
          (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
          *(unsigned __int16 **)&v5[8],
          *(_QWORD *)v5);
    }
  }
  Ndis::BindEngine::EndPolicyUpdates(p_BindEngine);
  Ndis::BindEngine::ApplyBindChanges(p_BindEngine, RunAsynchronous, 0);
}
