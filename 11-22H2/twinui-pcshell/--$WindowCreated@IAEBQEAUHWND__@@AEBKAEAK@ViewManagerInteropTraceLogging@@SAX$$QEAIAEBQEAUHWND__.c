/*
 * XREFs of ??$WindowCreated@IAEBQEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__@@AEBKAEAK@Z @ 0x18018745C
 * Callers:
 *     _lambda_e1e333736bfc613a027e396b29f06629_::operator() @ 0x1801F8DB0 (_lambda_e1e333736bfc613a027e396b29f06629_--operator().c)
 *     _lambda_1be1e40747901402039ac9a9af83119a_::operator() @ 0x1804E5CE0 (_lambda_1be1e40747901402039ac9a9af83119a_--operator().c)
 * Callees:
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x1800C31C4 (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x180187500 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

__int64 *__fastcall ViewManagerInteropTraceLogging::WindowCreated<unsigned int,HWND__ * const &,unsigned long const &,unsigned long &>(
        int *a1,
        __int64 *a2,
        int *a3,
        int *a4)
{
  __int64 *result; // rax
  int v9; // r8d
  int v10; // r9d
  _DWORD *v11; // rcx
  int v12; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+44h] [rbp-24h] BYREF
  int v14; // [rsp+48h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h] BYREF

  result = wil::details::static_lazy<ViewManagerInteropLogging>::get(
             (__int64)a1,
             _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
  v11 = (_DWORD *)result[1];
  if ( *v11 > 5u )
  {
    v12 = *a4;
    v13 = *a3;
    v15 = *a2;
    v14 = *a1;
    return (__int64 *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                        (_DWORD)v11,
                        (unsigned int)&unk_180859A67,
                        v9,
                        v10,
                        (__int64)&v14,
                        (__int64)&v15,
                        (__int64)&v13,
                        (__int64)&v12);
  }
  return result;
}
