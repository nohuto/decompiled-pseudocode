/*
 * XREFs of ??$IncomingWindowReadinessEvent@PEAUHWND__@@@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAX$$QEAPEAUHWND__@@@Z @ 0x1800E9F98
 * Callers:
 *     _lambda_71ae74f74888d637c85562ef224bc48a_::operator() @ 0x180285B78 (_lambda_71ae74f74888d637c85562ef224bc48a_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180038F60 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800B980C (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 */

char __fastcall SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::IncomingWindowReadinessEvent<HWND__ *>(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v4; // rax
  _DWORD *v5; // rcx
  int v6; // ecx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = wil::details::static_lazy<SingleViewExperienceLogging>::get(
         a1,
         (void (__cdecl *)())_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
  v5 = (_DWORD *)v4[1];
  if ( *v5 > 5u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v5, 0x200000000000LL);
    if ( (_BYTE)v4 )
    {
      v8 = *(_QWORD *)(a1 + 48);
      v11 = *a2;
      v10 = 0x1000000LL;
      LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                     v6,
                     (int)&unk_18087CAE3,
                     (int)v8 + 8,
                     v7,
                     (__int64)&v11,
                     (__int64)&v10);
    }
  }
  return (char)v4;
}
