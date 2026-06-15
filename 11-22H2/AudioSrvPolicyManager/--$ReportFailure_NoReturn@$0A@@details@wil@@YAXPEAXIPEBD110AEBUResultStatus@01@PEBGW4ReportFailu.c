/*
 * XREFs of ??$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800242DC
 * Callers:
 *     ??$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800240A0 (--$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailu.c)
 * Callees:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x18000D670 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 *     ?ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z @ 0x18001A658 (-ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18001A9C8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     _alloca_probe @ 0x180048AB0 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_NoReturn<0>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  bool v7; // bl
  const struct wil::FailureInfo *v8; // rdx
  const struct wil::FailureInfo *v9; // rdx
  __int64 v10; // [rsp+48h] [rbp-14E0h]
  __int64 v11; // [rsp+58h] [rbp-14D0h]
  __int64 v12; // [rsp+68h] [rbp-14C0h]
  _BYTE v13[160]; // [rsp+80h] [rbp-14A8h] BYREF
  _BYTE v14[1024]; // [rsp+120h] [rbp-1408h] BYREF
  _BYTE v15[4104]; // [rsp+520h] [rbp-1008h] BYREF

  v7 = g_pfnThrowPlatformException != 0;
  wil::details::LogFailure(
    a1,
    4365,
    (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
    0LL,
    0LL,
    a6,
    0,
    a7,
    0LL,
    v10,
    (wil *)v15,
    v11,
    v14,
    v12,
    (unsigned __int64)v13);
  if ( (v13[4] & 1) != 0 )
    wil::details::WilFailFast((wil::details *)v13, v8);
  if ( v7 )
    ((void (__fastcall *)(_BYTE *, _BYTE *))g_pfnThrowPlatformException)(v13, v15);
  wil::ThrowResultException((wil *)v13, v8);
  wil::details::WilFailFast((wil::details *)v13, v9);
}
