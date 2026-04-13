/*
 * XREFs of ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18000316C
 * Callers:
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180003230 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 * Callees:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x18000366C (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 *     __security_check_cookie @ 0x180004360 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180004FD0 (_alloca_probe.c)
 */

__int64 __fastcall wil::details::ReportFailure_Return<2>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  char v9; // [rsp+48h] [rbp-1500h]
  _BYTE v10[4096]; // [rsp+520h] [rbp-1028h] BYREF

  v9 = 0;
  return wil::details::LogFailure(a1, a2, a3, a4, a5, a6, 2, a7, a8, v9, v10);
}
