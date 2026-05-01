/*
 * XREFs of ??$IncomingWindowReadinessEvent@PEAUHWND__@@@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAX$$QEAPEAUHWND__@@@Z @ 0x18000C540
 * Callers:
 *     _lambda_8e74cd273561b15a8d8b985ad84a422d_::operator() @ 0x18000C1B0 (_lambda_8e74cd273561b15a8d8b985ad84a422d_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18000C69C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 */

__int64 __fastcall SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::IncomingWindowReadinessEvent<HWND__ *>(
        __int64 a1,
        __int64 *a2)
{
  __int64 result; // rax
  int v5; // r9d
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  result = wil::details::static_lazy<SingleViewExperienceLogging>::get(
             a1,
             _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
  v6 = *(_QWORD *)(result + 8);
  if ( *(_DWORD *)v6 > 5u && (*(_QWORD *)(v6 + 16) & 0x200000000000LL) != 0 )
  {
    result = *(_QWORD *)(v6 + 24) & 0x200000000000LL;
    if ( result == *(_QWORD *)(v6 + 24) )
    {
      v7 = *(_QWORD *)(a1 + 48);
      v9 = *a2;
      v8 = 0x1000000LL;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
               v6,
               (unsigned int)&unk_1806CDC23,
               (int)v7 + 8,
               v5,
               (__int64)&v9,
               (__int64)&v8);
    }
  }
  return result;
}
