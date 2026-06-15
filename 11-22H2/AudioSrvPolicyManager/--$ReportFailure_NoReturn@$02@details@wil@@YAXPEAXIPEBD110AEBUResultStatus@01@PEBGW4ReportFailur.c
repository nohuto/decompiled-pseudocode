/*
 * XREFs of ??$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180018554
 * Callers:
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180018398 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 * Callees:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x18000D670 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18001A9C8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     _alloca_probe @ 0x180048AB0 (_alloca_probe.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_NoReturn<3>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _WORD *a8)
{
  const struct wil::FailureInfo *v8; // rdx
  __int64 v9; // [rsp+48h] [rbp-14E0h]
  __int64 v10; // [rsp+58h] [rbp-14D0h]
  __int64 v11; // [rsp+68h] [rbp-14C0h]
  _BYTE v12[160]; // [rsp+80h] [rbp-14A8h] BYREF
  _BYTE v13[1024]; // [rsp+120h] [rbp-1408h] BYREF
  _BYTE v14[4104]; // [rsp+520h] [rbp-1008h] BYREF

  wil::details::LogFailure(a1, a2, a3, 0LL, 0LL, a6, 3, a7, a8, v9, (wil *)v14, v10, v13, v11, (unsigned __int64)v12);
  wil::details::WilFailFast((wil::details *)v12, v8);
}
