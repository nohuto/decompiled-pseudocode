/*
 * XREFs of ??$WindowEventDispatcher_RecoveringViews@AEAIPEBGPEBG@ViewManagerInteropTraceLogging@@SAXAEAI$$QEAPEBG1@Z @ 0x1800A2154
 * Callers:
 *     ?RecoverViews@UwpWindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x1800A21E0 (-RecoverViews@UwpWindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z.c)
 *     ?RecoverViews@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x1804C80C0 (-RecoverViews@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@4@Z @ 0x1800A1C44 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x1800C31C4 (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 */

__int64 __fastcall ViewManagerInteropTraceLogging::WindowEventDispatcher_RecoveringViews<unsigned int &,unsigned short const *,unsigned short const *>(
        _DWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rcx
  __int64 v10; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+48h] [rbp-10h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  result = wil::details::static_lazy<ViewManagerInteropLogging>::get(
             a1,
             _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
  v9 = *(_DWORD **)(result + 8);
  if ( *v9 > 5u )
  {
    v10 = *a3;
    v11 = *a2;
    LODWORD(v12) = *a1;
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
             (int)v9,
             (int)&dword_180858AF7,
             v7,
             v8,
             (__int64)&v12,
             (const WCHAR **)&v11,
             (const WCHAR **)&v10);
  }
  return result;
}
