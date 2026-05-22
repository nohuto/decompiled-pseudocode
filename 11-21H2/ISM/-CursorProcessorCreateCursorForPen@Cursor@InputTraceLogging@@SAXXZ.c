/*
 * XREFs of ?CursorProcessorCreateCursorForPen@Cursor@InputTraceLogging@@SAXXZ @ 0x180138C2C
 * Callers:
 *     ?EnsureCursorForPen@CursorProcessor@@AEAAXXZ @ 0x180138E84 (-EnsureCursorForPen@CursorProcessor@@AEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018310 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

void __fastcall InputTraceLogging::Cursor::CursorProcessorCreateCursorForPen(__int64 a1)
{
  __int64 v1; // rcx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  v1 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     a1,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v1 > 4u && (*(_BYTE *)(v1 + 16) & 8) != 0 && (*(_QWORD *)(v1 + 24) & 8LL) == *(_QWORD *)(v1 + 24) )
    tlgWriteTransfer_EventWriteTransfer(v1, (unsigned __int8 *)dword_180204623, 0LL, 0LL, 2u, &v2);
}
