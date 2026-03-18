/*
 * XREFs of ?AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@AEBUInputDeliveryContext@2@PEA_K@Z @ 0x1C01F9394
 * Callers:
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C003BCDC (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CMouseProcessor::BufferedMouseInputList::AddInputToList(
        CMouseProcessor::BufferedMouseInputList *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        struct CInputDest *a3,
        const struct CMouseProcessor::InputDeliveryContext *a4,
        unsigned __int64 *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  CMouseProcessor::BufferedMouseInputList *v14; // rbx
  __int64 v15; // r8
  bool result; // al
  CMouseProcessor::BufferedMouseInputList **v17; // rcx

  if ( !CInputThreadBase::IsInputThread(gpInputThread) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
  if ( !*(_DWORD *)a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
  v14 = (CMouseProcessor::BufferedMouseInputList *)(*(__int64 (__fastcall **)(const struct CMouseProcessor::CMouseEvent *, _QWORD, struct CInputDest *, const struct CMouseProcessor::InputDeliveryContext *))(*(_QWORD *)a2 + 24LL))(
                                                     a2,
                                                     *(_QWORD *)this,
                                                     a3,
                                                     a4);
  if ( *(_DWORD *)a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v15);
  if ( !v14 )
    return 0;
  v17 = (CMouseProcessor::BufferedMouseInputList **)*((_QWORD *)this + 2);
  if ( *v17 != (CMouseProcessor::BufferedMouseInputList *)((char *)this + 8) )
    __fastfail(3u);
  *(_QWORD *)v14 = (char *)this + 8;
  *((_QWORD *)v14 + 1) = v17;
  *v17 = v14;
  *((_QWORD *)this + 2) = v14;
  *a5 = *(_QWORD *)this;
  result = 1;
  ++*(_QWORD *)this;
  return result;
}
