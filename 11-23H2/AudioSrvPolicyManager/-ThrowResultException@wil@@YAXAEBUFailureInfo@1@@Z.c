/*
 * XREFs of ?ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z @ 0x18001A468
 * Callers:
 *     ??$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800240EC (--$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailu.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::ThrowResultException(wil *this, const struct wil::FailureInfo *a2)
{
  if ( wil::details::g_pfnThrowResultException )
    wil::details::g_pfnThrowResultException(this);
}
