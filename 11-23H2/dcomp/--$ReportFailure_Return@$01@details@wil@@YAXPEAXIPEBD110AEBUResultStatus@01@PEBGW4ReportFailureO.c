/*
 * XREFs of ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800E36FC
 * Callers:
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800E31BC (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 * Callees:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x18000BA7C (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800A80C0 (_alloca_probe.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800E53E8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

void __fastcall wil::details::ReportFailure_Return<2>(
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
  __int64 v9; // [rsp+48h] [rbp-1500h]
  _BYTE v10[160]; // [rsp+80h] [rbp-14C8h] BYREF
  _BYTE v11[1024]; // [rsp+120h] [rbp-1428h] BYREF
  _BYTE v12[4096]; // [rsp+520h] [rbp-1028h] BYREF

  LOBYTE(v9) = 0;
  wil::details::LogFailure(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    2,
    a7,
    a8,
    v9,
    (wil *)v12,
    2048LL,
    v11,
    1024LL,
    (unsigned __int64)v10);
  if ( (v10[4] & 1) != 0 )
    wil::details::WilFailFast((wil::details *)v10, v8);
}
