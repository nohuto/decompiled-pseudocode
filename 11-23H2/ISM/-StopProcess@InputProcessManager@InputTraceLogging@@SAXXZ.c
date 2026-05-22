/*
 * XREFs of ?StopProcess@InputProcessManager@InputTraceLogging@@SAXXZ @ 0x1801B4B64
 * Callers:
 *     ?StopProcess@InputProcessManager@@QEAAJXZ @ 0x1801B4AC4 (-StopProcess@InputProcessManager@@QEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18001F2F0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AC18 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::InputProcessManager::StopProcess(__int64 a1)
{
  __int64 v1; // rcx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  v1 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     a1,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v1 > 4u
    && (*(_DWORD *)(v1 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v1 + 24) & 0x200LL) == *(_QWORD *)(v1 + 24) )
  {
    tlgWriteTransfer_EventWriteTransfer(v1, (unsigned __int8 *)dword_18022883D, 0LL, 0LL, 2u, &v2);
  }
}
