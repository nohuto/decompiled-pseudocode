/*
 * XREFs of ?TraceFoundInputSiteWindow@DragDropSimulatorTelemetryProvider@@SAXPEAUHWND__@@0_N@Z @ 0x18062C684
 * Callers:
 *     ?TryToGetInputSiteWindow@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAAPEAUHWND__@@PEAU8@@Z @ 0x18062C978 (-TryToGetInputSiteWindow@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Inter.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@G@@U1@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@G@@34AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180629B80 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@G@@U1@U2@U-$_tlgWrapperByVal@$00@@@-$_tlgWrit.c)
 *     ?get@?$static_lazy@VDragDropSimulatorTraceLogging@@@details@wil@@QEAAPEAVDragDropSimulatorTraceLogging@@P6AXXZ@Z @ 0x18062CF54 (-get@-$static_lazy@VDragDropSimulatorTraceLogging@@@details@wil@@QEAAPEAVDragDropSimulatorTraceL.c)
 */

void __fastcall DragDropSimulatorTelemetryProvider::TraceFoundInputSiteWindow(__int64 hWnd, __int64 a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v9; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v10; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v11; // [rsp+68h] [rbp-98h] BYREF
  __int64 v12; // [rsp+70h] [rbp-90h] BYREF
  __int64 v13; // [rsp+78h] [rbp-88h] BYREF
  WCHAR v14[264]; // [rsp+80h] [rbp-80h] BYREF
  WCHAR ClassName[264]; // [rsp+290h] [rbp+190h] BYREF

  memset_0(ClassName, 0, 0x20AuLL);
  GetClassNameW((HWND)hWnd, ClassName, 260);
  ClassName[260] = 0;
  memset_0(v14, 0, 0x20AuLL);
  GetClassNameW((HWND)a2, v14, 260);
  v14[260] = 0;
  v5 = *(_DWORD **)(wil::details::static_lazy<DragDropSimulatorTraceLogging>::get(
                      v4,
                      _lambda_a3088610fb5396f8b42a9a023b177495_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v5 > 4u )
  {
    LOBYTE(v8) = 0;
    v9 = (__int64)v14;
    v10 = a2;
    v11 = (__int64)ClassName;
    v12 = hWnd;
    v13 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
      (__int64)v5,
      (unsigned __int8 *)dword_18086FB50,
      v6,
      v7,
      (__int64)&v13,
      (__int64)&v12,
      (const WCHAR **)&v11,
      (__int64)&v10,
      (const WCHAR **)&v9,
      (__int64)&v8);
  }
}
