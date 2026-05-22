/*
 * XREFs of ?SetForegroundActivatableEntity@ForegroundManagerServer@InputTraceLogging@@SAX_K@Z @ 0x18008BEE4
 * Callers:
 *     ?SetForegroundActivatableEntity@ForegroundManager@@QEAAJ_K@Z @ 0x18008BDE8 (-SetForegroundActivatableEntity@ForegroundManager@@QEAAJ_K@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018310 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

void __fastcall InputTraceLogging::ForegroundManagerServer::SetForegroundActivatableEntity(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  v2 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     a1,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v2 > 4u
    && (*(_DWORD *)(v2 + 16) & 0x8000LL) != 0
    && (*(_QWORD *)(v2 + 24) & 0x8000LL) == *(_QWORD *)(v2 + 24) )
  {
    v7 = 0;
    v5 = &v3;
    v3 = a1;
    v6 = 8;
    tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_1801FF662, 0LL, 0LL, 3u, &v4);
  }
}
