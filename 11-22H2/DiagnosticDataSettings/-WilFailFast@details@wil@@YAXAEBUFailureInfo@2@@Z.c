/*
 * XREFs of ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180004434
 * Callers:
 *     ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180003B8C (--$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800044F8 (--$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 * Callees:
 *     ?WilRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z @ 0x1800043FC (-WilRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z.c)
 *     memset_0 @ 0x1800059BA (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180005CA0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall __noreturn wil::details::WilFailFast(wil::details *this, const struct wil::FailureInfo *a2)
{
  struct _EXCEPTION_RECORD *v3; // rdx
  void *v4; // rcx
  ULONG_PTR v5; // rax
  struct _EXCEPTION_RECORD v6; // [rsp+20h] [rbp-A8h] BYREF

  if ( wil::g_pfnWilFailFast )
    wil::g_pfnWilFailFast(this, a2);
  if ( wil::details::g_pfnFailfastWithContextCallback )
    wil::details::g_pfnFailfastWithContextCallback(this, a2);
  memset_0(&v6, 0, sizeof(v6));
  v4 = (void *)*((_QWORD *)this + 17);
  v6.NumberParameters = 1;
  v6.ExceptionCode = -1073740791;
  v6.ExceptionFlags = 1;
  v6.ExceptionInformation[0] = 7LL;
  if ( !v4 )
    wil::details::WilRaiseFailFastException(&v6, v3, (struct _CONTEXT *)1);
  v6.ExceptionInformation[1] = *((int *)this + 2);
  v5 = *((unsigned int *)this + 16);
  v6.ExceptionAddress = v4;
  v6.ExceptionInformation[2] = v5;
  v6.NumberParameters = 3;
  wil::details::WilRaiseFailFastException(&v6, v3, 0LL);
}
