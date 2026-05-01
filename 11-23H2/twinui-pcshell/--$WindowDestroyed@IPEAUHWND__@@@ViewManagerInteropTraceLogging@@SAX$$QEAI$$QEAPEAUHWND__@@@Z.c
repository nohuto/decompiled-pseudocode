/*
 * XREFs of ??$WindowDestroyed@IPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEAPEAUHWND__@@@Z @ 0x1804E57F0
 * Callers:
 *     ?WindowRemoved@WindowWrapperBase@@UEAAJXZ @ 0x1804EDAC0 (-WindowRemoved@WindowWrapperBase@@UEAAJXZ.c)
 *     ?WindowRemoved@UwpWindowWrapperBase@@UEAAJXZ @ 0x1804F2310 (-WindowRemoved@UwpWindowWrapperBase@@UEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x1800C31C4 (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180110D88 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

int __fastcall ViewManagerInteropTraceLogging::WindowDestroyed<unsigned int,HWND__ *>(int *a1, __int64 *a2)
{
  __int64 *v4; // rax
  __int64 v5; // r9
  _DWORD *v6; // rcx
  int v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v4 = wil::details::static_lazy<ViewManagerInteropLogging>::get(
         (__int64)a1,
         _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
  v6 = (_DWORD *)v4[1];
  if ( *v6 > 5u )
  {
    v9 = *a2;
    v8 = *a1;
    LODWORD(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                    (__int64)v6,
                    byte_180859A30,
                    0LL,
                    v5,
                    (__int64)&v8,
                    (__int64)&v9);
  }
  return (int)v4;
}
