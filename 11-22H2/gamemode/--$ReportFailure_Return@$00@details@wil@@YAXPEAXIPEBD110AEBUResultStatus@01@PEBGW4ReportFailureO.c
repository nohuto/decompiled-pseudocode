/*
 * XREFs of ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180006B34
 * Callers:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180006A80 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 * Callees:
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800025EC (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x1800063E8 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 *     __security_check_cookie @ 0x180007300 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180007C40 (_alloca_probe.c)
 */

void __fastcall wil::details::ReportFailure_Return<1>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int *a7)
{
  const struct wil::FailureInfo *v7; // rdx
  __int64 v8; // [rsp+20h] [rbp-1518h]
  __int64 v9; // [rsp+30h] [rbp-1508h]
  __int64 v10; // [rsp+40h] [rbp-14F8h]
  __int64 v11; // [rsp+48h] [rbp-14F0h]
  __int64 v12; // [rsp+58h] [rbp-14E0h]
  __int64 v13; // [rsp+68h] [rbp-14D0h]
  _BYTE v14[160]; // [rsp+80h] [rbp-14B8h] BYREF
  _BYTE v15[1024]; // [rsp+120h] [rbp-1418h] BYREF
  _BYTE v16[4096]; // [rsp+520h] [rbp-1018h] BYREF

  wil::details::LogFailure(a1, a2, a3, a4, v8, a6, v9, a7, v10, v11, (wil *)v16, v12, v15, v13, (unsigned __int64)v14);
  if ( (v14[4] & 1) != 0 )
    wil::details::WilFailFast((wil::details *)v14, v7);
}
