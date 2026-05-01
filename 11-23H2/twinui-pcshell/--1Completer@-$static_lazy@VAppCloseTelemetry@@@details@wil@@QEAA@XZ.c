/*
 * XREFs of ??1Completer@?$static_lazy@VAppCloseTelemetry@@@details@wil@@QEAA@XZ @ 0x180396DEC
 * Callers:
 *     ?IsEnabled@AppCloseTelemetry@@SA_NE_K@Z @ 0x18039D458 (-IsEnabled@AppCloseTelemetry@@SA_NE_K@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?get@?$static_lazy@VAppCloselogging@@@details@wil@@QEAAPEAVAppCloselogging@@P6AXXZ@Z @ 0x1803A46F8 (-get@-$static_lazy@VAppCloselogging@@@details@wil@@QEAAPEAVAppCloselogging@@P6AXXZ@Z.c)
 */

BOOL __fastcall wil::details::static_lazy<AppCloseTelemetry>::Completer::~Completer(__int64 a1)
{
  LPINIT_ONCE v2; // rbx
  union _RTL_RUN_ONCE v3; // rdx
  union _RTL_RUN_ONCE v4; // rax

  if ( !*(_DWORD *)(a1 + 8) )
  {
    v2 = *(LPINIT_ONCE *)a1;
    v3.Ptr = *(PVOID *)(wil::details::static_lazy<AppCloselogging>::get(
                          a1,
                          _lambda_3e26dcec44775d43d9dfc79dea49f939_::_lambda_invoker_cdecl_)
                      + 8);
    v4.Ptr = v2[1].Ptr;
    v2[2].Ptr = v3.Ptr;
    LOBYTE(v2[3].Ptr) = 0;
    HIDWORD(v2[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v4.Ptr + 1))(v2 + 1);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, *(_DWORD *)(a1 + 8), (LPVOID)(*(_QWORD *)a1 + 8LL));
}
