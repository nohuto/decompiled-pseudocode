/*
 * XREFs of ?OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z @ 0x1803B8B04
 * Callers:
 *     ??$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z @ 0x1803B5F00 (--$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180066424 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x1800C4C94 (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     ?get@?$static_lazy@VPenWorkspaceBrokerLogging@@@details@wil@@QEAAPEAVPenWorkspaceBrokerLogging@@P6AXXZ@Z @ 0x1803B952C (-get@-$static_lazy@VPenWorkspaceBrokerLogging@@@details@wil@@QEAAPEAVPenWorkspaceBrokerLogging@@.c)
 */

void __fastcall PenWorkspaceBrokerTelemetry::OemAppLoaded_(
        PenWorkspaceBrokerTelemetry *this,
        const unsigned __int16 *a2)
{
  __int64 v3; // rax
  _DWORD *v4; // rbx
  const unsigned __int16 *v5; // rdx
  __int64 v6; // r9
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = (__int64)this;
  v3 = wil::details::static_lazy<PenWorkspaceBrokerLogging>::get(
         this,
         _lambda_70bc263229c7881e4aa0a680059fb776_::_lambda_invoker_cdecl_);
  v4 = *(_DWORD **)(v3 + 8);
  if ( *v4 > 5u )
  {
    if ( tlgKeywordOn(*(_QWORD *)(v3 + 8), 0x400000000000LL) )
    {
      v7 = (__int64)SQM::CensorAppID(a2, v5);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        (int)v4,
        (int)&dword_1806AFB7B,
        0,
        v6,
        (const WCHAR **)&v7);
    }
  }
}
