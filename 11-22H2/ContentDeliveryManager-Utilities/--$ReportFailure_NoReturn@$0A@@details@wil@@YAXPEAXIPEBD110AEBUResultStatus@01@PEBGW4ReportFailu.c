/*
 * XREFs of ??$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18002870C
 * Callers:
 *     ??$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180027EC0 (--$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailu.c)
 * Callees:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x180038B7C (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 *     ?ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z @ 0x1800410E8 (-ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180042388 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 *     _alloca_probe @ 0x1800D4380 (_alloca_probe.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_NoReturn<0>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  bool v8; // bl
  const struct wil::FailureInfo *v9; // rdx
  const struct wil::FailureInfo *v10; // rdx
  _BYTE v11[160]; // [rsp+80h] [rbp-14A8h] BYREF
  _BYTE v12[4104]; // [rsp+520h] [rbp-1008h] BYREF

  v8 = g_pfnThrowPlatformException != 0;
  wil::details::LogFailure(a1, a2, a3, 0LL, 0LL, a6, 0, a7, a8);
  if ( (v11[4] & 1) != 0 )
    wil::details::WilFailFast((wil::details *)v11, v9);
  if ( v8 )
    ((void (__fastcall *)(_BYTE *, _BYTE *))g_pfnThrowPlatformException)(v11, v12);
  wil::ThrowResultException((wil *)v11, v9);
  wil::details::WilFailFast((wil::details *)v11, v10);
}
