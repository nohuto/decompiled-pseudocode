/*
 * XREFs of ??$reset@UTOUCH_TELEMETRY_UPDATE_INFO@@@?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAAXPEAUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x180274F5C
 * Callers:
 *     ?UpdateInteraction@CManipulationTelemetryData@InteractionLatencyTelemetry@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K@Z @ 0x180275E10 (-UpdateInteraction@CManipulationTelemetryData@InteractionLatencyTelemetry@@UEAAJPEBUIManipulatio.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000E7B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>::reset<TOUCH_TELEMETRY_UPDATE_INFO>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  std::_Ref_count_base *v6; // rcx

  v4 = operator new(0x18uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = a2;
    *((_DWORD *)v4 + 2) = 1;
    *((_DWORD *)v4 + 3) = 1;
    *v4 = &std::_Ref_count<TOUCH_TELEMETRY_UPDATE_INFO>::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  operator delete(0LL);
  v6 = (std::_Ref_count_base *)a1[1];
  *a1 = a2;
  a1[1] = v5;
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
}
