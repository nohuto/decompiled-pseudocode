/*
 * XREFs of ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180003B8C
 * Callers:
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180003C68 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 * Callees:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x1800040A0 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180004434 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     __security_check_cookie @ 0x180004F10 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180005C20 (_alloca_probe.c)
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
  __int64 result; // rax
  const struct wil::FailureInfo *v9; // rdx
  char v10; // [rsp+48h] [rbp-1500h]
  _BYTE v11[160]; // [rsp+80h] [rbp-14C8h] BYREF
  _BYTE v12[4096]; // [rsp+520h] [rbp-1028h] BYREF

  v10 = 0;
  result = wil::details::LogFailure(a1, a2, a3, a4, a5, a6, 2, a7, a8, v10, v12);
  if ( (v11[4] & 1) != 0 )
    wil::details::WilFailFast((wil::details *)v11, v9);
  return result;
}
