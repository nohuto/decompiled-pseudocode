/*
 * XREFs of _lambda_056f8fc17ddf877fd0b445b7a631ca98_::_lambda_invoker_cdecl_ @ 0x180084660
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x18006445C (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180084734 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800849F4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

BOOL __fastcall lambda_056f8fc17ddf877fd0b445b7a631ca98_::_lambda_invoker_cdecl_(HANDLE hObject)
{
  _DWORD *v2; // rcx
  int v4; // ecx
  __int64 v5; // r9
  int v6; // [rsp+30h] [rbp-68h] BYREF
  HANDLE v7; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-58h] BYREF
  HANDLE *v9; // [rsp+60h] [rbp-38h]
  __int64 v10; // [rsp+68h] [rbp-30h]
  int *v11; // [rsp+70h] [rbp-28h]
  __int64 v12; // [rsp+78h] [rbp-20h]

  v2 = *(_DWORD **)(wil::details::static_lazy<InputTraceLogging>::get(
                      hObject,
                      _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v2 > 5u && tlgKeywordOn((__int64)v2, 4LL) )
  {
    v6 = 0;
    v11 = &v6;
    v12 = v5;
    v9 = &v7;
    v7 = hObject;
    v10 = 8LL;
    tlgWriteTransfer_EventWriteTransfer(v4, (int)&dword_1801F218A, 0, 0, v5, &v8);
  }
  return CloseHandle(hObject);
}
