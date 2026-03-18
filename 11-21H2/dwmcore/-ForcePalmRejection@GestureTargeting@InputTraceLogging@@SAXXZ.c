/*
 * XREFs of ?ForcePalmRejection@GestureTargeting@InputTraceLogging@@SAXXZ @ 0x18018FB14
 * Callers:
 *     ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B314 (-PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180025194 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18002B43C (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::ForcePalmRejection(__int64 a1)
{
  _DWORD *v1; // rcx
  __int64 v2; // rcx
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF

  v1 = (_DWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                   a1,
                   _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
  if ( *v1 > 4u )
  {
    if ( tlgKeywordOn((__int64)v1, 2048LL) )
      tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_18036AE73, 0LL, 0LL, 2u, &v3);
  }
}
