/*
 * XREFs of ?TraceWindowInfo@DragDropSimulatorTelemetryProvider@@SAXPEAUHWND__@@@Z @ 0x18056E7B4
 * Callers:
 *     ?GetDropEndPointByTraversingParentChain@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@V?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@2@PEAUHWND__@@@std@@PEAUHWND__@@@Z @ 0x18056D190 (-GetDropEndPointByTraversingParentChain@DragDropSimulatorComponent@implementation@DragDropSimula.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@G@@@Z @ 0x18056BAB8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?get@?$static_lazy@VDragDropSimulatorTraceLogging@@@details@wil@@QEAAPEAVDragDropSimulatorTraceLogging@@P6AXXZ@Z @ 0x18056ED8C (-get@-$static_lazy@VDragDropSimulatorTraceLogging@@@details@wil@@QEAAPEAVDragDropSimulatorTraceL.c)
 */

void __fastcall DragDropSimulatorTelemetryProvider::TraceWindowInfo(__int64 hWnd)
{
  __int64 v2; // rcx
  _DWORD *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // [rsp+40h] [rbp-238h] BYREF
  __int64 v7; // [rsp+48h] [rbp-230h] BYREF
  __int64 v8; // [rsp+50h] [rbp-228h] BYREF
  WCHAR String[256]; // [rsp+60h] [rbp-218h] BYREF

  memset_0(String, 0, sizeof(String));
  GetWindowTextW((HWND)hWnd, String, 256);
  v3 = *(_DWORD **)(wil::details::static_lazy<DragDropSimulatorTraceLogging>::get(
                      v2,
                      _lambda_a3088610fb5396f8b42a9a023b177495_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v3 > 4u )
  {
    v7 = hWnd;
    v6 = (__int64)String;
    v8 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
      (__int64)v3,
      (unsigned __int8 *)dword_1806C7513,
      v4,
      v5,
      (__int64)&v8,
      (__int64)&v7,
      (const WCHAR **)&v6);
  }
}
