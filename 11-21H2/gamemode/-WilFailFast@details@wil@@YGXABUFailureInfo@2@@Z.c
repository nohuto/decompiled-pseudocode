/*
 * XREFs of ?WilFailFast@details@wil@@YGXABUFailureInfo@2@@Z @ 0x1000326D
 * Callers:
 *     ??$ReportFailure_NoReturn@$02@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOptions@01@@Z @ 0x10004671 (--$ReportFailure_NoReturn@$02@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOp.c)
 * Callees:
 *     ?WilRaiseFailFastException@details@wil@@YGXPAU_EXCEPTION_RECORD@@PAU_CONTEXT@@K@Z @ 0x100027CA (-WilRaiseFailFastException@details@wil@@YGXPAU_EXCEPTION_RECORD@@PAU_CONTEXT@@K@Z.c)
 *     @_guard_check_icall_nop@4 @ 0x100072B0 (@_guard_check_icall_nop@4.c)
 *     _memset @ 0x10007471 (_memset.c)
 */

void __thiscall __noreturn wil::details::WilFailFast(
        _DWORD *ecx0,
        wil::details *this,
        const struct wil::FailureInfo *a3)
{
  int v4; // ecx
  int v5; // eax
  _DWORD v6[20]; // [esp+8h] [ebp-50h] BYREF

  if ( wil::g_pfnWilFailFast )
    wil::g_pfnWilFailFast(wil::g_pfnWilFailFast, ecx0);
  if ( wil::details::g_pfnFailfastWithContextCallback )
    wil::details::g_pfnFailfastWithContextCallback(wil::details::g_pfnFailfastWithContextCallback, ecx0);
  memset(v6, 0, sizeof(v6));
  v4 = ecx0[20];
  v6[0] = -1073740791;
  v6[4] = 1;
  v6[1] = 1;
  v6[5] = 7;
  if ( !v4 )
    wil::details::WilRaiseFailFastException((wil::details *)1);
  v6[6] = ecx0[2];
  v5 = ecx0[10];
  v6[4] = 3;
  v6[7] = v5;
  v6[3] = v4;
  wil::details::WilRaiseFailFastException(0);
}
