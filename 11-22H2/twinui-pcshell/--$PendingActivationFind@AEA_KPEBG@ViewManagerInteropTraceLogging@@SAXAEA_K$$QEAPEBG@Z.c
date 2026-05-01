/*
 * XREFs of ??$PendingActivationFind@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x1804BA04C
 * Callers:
 *     ?GetPendingActivationData@WindowEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804C5750 (-GetPendingActivationData@WindowEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundati.c)
 *     ?GetPendingActivationData@UwpWindowEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804D11F0 (-GetPendingActivationData@UwpWindowEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Found.c)
 * Callees:
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x1800C31C4 (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1804BA510 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

__int64 *__fastcall ViewManagerInteropTraceLogging::PendingActivationFind<unsigned __int64 &,unsigned short const *>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *result; // rax
  _DWORD *v5; // rcx
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  result = wil::details::static_lazy<ViewManagerInteropLogging>::get(
             (__int64)a1,
             _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
  v5 = (_DWORD *)result[1];
  if ( *v5 > 5u )
  {
    v6 = *a2;
    v7 = *a1;
    return (__int64 *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
                        (int)v5,
                        (int)&dword_180858AAF,
                        (__int64)&v7,
                        (__int64)&v6);
  }
  return result;
}
