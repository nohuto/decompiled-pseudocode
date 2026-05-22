/*
 * XREFs of ?ProcessShutDown@InputProcessManager@InputTraceLogging@@SAXK@Z @ 0x180196258
 * Callers:
 *     ?ISMShutDownStatic@InputProcessManager@@SAJPEAXK0@Z @ 0x180195E70 (-ISMShutDownStatic@InputProcessManager@@SAJPEAXK0@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018310 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

void __fastcall InputTraceLogging::InputProcessManager::ProcessShutDown(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  v1 = (unsigned int)a1;
  v2 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     a1,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v2 > 4u
    && (*(_DWORD *)(v2 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v2 + 24) & 0x200LL) == *(_QWORD *)(v2 + 24) )
  {
    v7 = 0;
    v5 = &v3;
    v3 = v1;
    v6 = 8;
    tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_18020639D, 0LL, 0LL, 3u, &v4);
  }
}
