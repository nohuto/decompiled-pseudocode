/*
 * XREFs of ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x18001A560
 * Callers:
 *     ?LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ @ 0x18001973C (-LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ.c)
 *     ??$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x180040244 (--$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z.c)
 *     ??R_lambda_fe718337787c493ce2d833414db25eba_@@QEBAJPEBGPEADPEAG_K@Z @ 0x180048738 (--R_lambda_fe718337787c493ce2d833414db25eba_@@QEBAJPEBGPEADPEAG_K@Z.c)
 * Callees:
 *     StringVPrintfWorkerW @ 0x18001A5F8 (StringVPrintfWorkerW.c)
 */

HRESULT __fastcall StringCchVPrintfW(unsigned __int16 *a1, size_t a2, size_t *a3, va_list argList)
{
  HRESULT result; // eax

  if ( a2 - 1 <= 0x7FFFFFFE )
    return StringVPrintfWorkerW(a1, a2, a3, (STRSAFE_LPCWSTR)a3, argList);
  result = -2147024809;
  if ( a2 )
    *a1 = 0;
  return result;
}
