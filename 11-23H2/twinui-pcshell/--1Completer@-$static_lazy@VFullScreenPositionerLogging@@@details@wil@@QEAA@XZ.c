/*
 * XREFs of ??1Completer@?$static_lazy@VFullScreenPositionerLogging@@@details@wil@@QEAA@XZ @ 0x1803EC49C
 * Callers:
 *     ?TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ @ 0x1803EE630 (-TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?get@?$static_lazy@VFullScreenPositionerTraceLogging@@@details@wil@@QEAAPEAVFullScreenPositionerTraceLogging@@P6AXXZ@Z @ 0x1803EE7F8 (-get@-$static_lazy@VFullScreenPositionerTraceLogging@@@details@wil@@QEAAPEAVFullScreenPositioner.c)
 */

BOOL __fastcall wil::details::static_lazy<FullScreenPositionerLogging>::Completer::~Completer(__int64 a1)
{
  LPINIT_ONCE v2; // rbx
  union _RTL_RUN_ONCE v3; // rdx
  union _RTL_RUN_ONCE v4; // rax

  if ( !*(_DWORD *)(a1 + 8) )
  {
    v2 = *(LPINIT_ONCE *)a1;
    v3.Ptr = *(PVOID *)(wil::details::static_lazy<FullScreenPositionerTraceLogging>::get(
                          a1,
                          _lambda_750a1ab3be31a0fa85906147a224df52_::_lambda_invoker_cdecl_)
                      + 8);
    v4.Ptr = v2[1].Ptr;
    v2[2].Ptr = v3.Ptr;
    LOBYTE(v2[3].Ptr) = 0;
    HIDWORD(v2[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v4.Ptr + 1))(v2 + 1);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, *(_DWORD *)(a1 + 8), (LPVOID)(*(_QWORD *)a1 + 8LL));
}
