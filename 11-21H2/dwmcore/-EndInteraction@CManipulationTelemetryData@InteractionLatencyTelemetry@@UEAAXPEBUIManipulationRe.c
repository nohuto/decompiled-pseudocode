/*
 * XREFs of ?EndInteraction@CManipulationTelemetryData@InteractionLatencyTelemetry@@UEAAXPEBUIManipulationResource@@@Z @ 0x1802751E0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180025194 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall InteractionLatencyTelemetry::CManipulationTelemetryData::EndInteraction(
        InteractionLatencyTelemetry::CManipulationTelemetryData *this,
        const struct IManipulationResource *a2)
{
  __int64 v4; // rcx
  const struct IManipulationResource *v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  const struct IManipulationResource **v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1803D0EB8 > 5 && tlgKeywordOn((__int64)&dword_1803D0EB8, 2LL) )
  {
    v9 = 0;
    v7 = &v5;
    v5 = a2;
    v8 = 8;
    tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_180373144, 0LL, 0LL, 3u, &v6);
  }
  (*(void (__fastcall **)(_QWORD, const struct IManipulationResource *))(**(_QWORD **)(*((_QWORD *)this + 34) + 656LL)
                                                                       + 24LL))(
    *(_QWORD *)(*((_QWORD *)this + 34) + 656LL),
    a2);
}
