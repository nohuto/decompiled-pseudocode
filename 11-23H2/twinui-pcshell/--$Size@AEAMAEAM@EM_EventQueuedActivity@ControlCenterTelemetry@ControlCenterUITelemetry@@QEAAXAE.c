/*
 * XREFs of ??$Size@AEAMAEAM@EM_EventQueuedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXAEAM0@Z @ 0x18041C6EC
 * Callers:
 *     ?OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180420650 (-OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1801127B4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?get@?$static_lazy@VControlCenterLogging@@@details@wil@@QEAAPEAVControlCenterLogging@@P6AXXZ@Z @ 0x180144240 (-get@-$static_lazy@VControlCenterLogging@@@details@wil@@QEAAPEAVControlCenterLogging@@P6AXXZ@Z.c)
 */

int __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::EM_EventQueuedActivity::Size<float &,float &>(
        __int64 a1,
        int *a2,
        int *a3)
{
  __int64 *v6; // rax
  __int64 v7; // r9
  _DWORD *v8; // rcx
  int v9; // xmm1_4
  const GUID *v10; // r8
  int v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+58h] [rbp+20h] BYREF

  v6 = wil::details::static_lazy<ControlCenterLogging>::get(
         a1,
         (void (__cdecl *)())_lambda_7497dc87b220aaed4d14ef0ec7d62e5e_::_lambda_invoker_cdecl_);
  v8 = (_DWORD *)v6[1];
  if ( *v8 > 5u )
  {
    v9 = *a2;
    v10 = (const GUID *)(*(_QWORD *)(a1 + 48) + 8LL);
    v12 = *a3;
    v13 = v9;
    LODWORD(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    (__int64)v8,
                    byte_180848BBC,
                    v10,
                    v7,
                    (__int64)&v13,
                    (__int64)&v12);
  }
  return (int)v6;
}
