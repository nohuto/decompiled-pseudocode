/*
 * XREFs of ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800912C4
 * Callers:
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180091370 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 * Callees:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x18008ED90 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1801EAC80 (_alloca_probe.c)
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
  __int64 v8; // [rsp+58h] [rbp-14E0h]
  __int64 v9; // [rsp+68h] [rbp-14D0h]
  _BYTE v10[160]; // [rsp+80h] [rbp-14B8h] BYREF
  _BYTE v11[1024]; // [rsp+120h] [rbp-1418h] BYREF
  WCHAR v12[2048]; // [rsp+520h] [rbp-1018h] BYREF

  wil::details::LogFailure(a1, a2, a3, a4, a5, a6, 2, a7, a8, 0, v12, v8, v11, v9, (unsigned __int64)v10);
}
