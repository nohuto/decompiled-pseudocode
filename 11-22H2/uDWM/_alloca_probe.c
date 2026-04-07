/*
 * XREFs of _alloca_probe @ 0x1800662E0
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180010324 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 *     ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x180099298 (--$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 *     ??$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800996CC (--$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800999B4 (--$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180099CC4 (--$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ?what@ResultException@wil@@UEBAPEBDXZ @ 0x18009E760 (-what@ResultException@wil@@UEBAPEBDXZ.c)
 *     ?wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV?$heap_vector@Uwil_details_FeatureUsageSRUM@@@details_abi@wil@@@Z @ 0x18009E83C (-wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV-$heap_vector@Uwil_details_FeatureUsageSRUM@@@detai.c)
 *     ??$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x1800CAE34 (--$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z.c)
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800E7024 (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 *     ??$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800ECBFC (--$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailu.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall alloca_probe()
{
  unsigned __int64 result; // rax
  char *v1; // r10
  char *StackLimit; // r11
  char v3; // [rsp+18h] [rbp+8h] BYREF

  v1 = &v3 - result;
  if ( (unsigned __int64)&v3 < result )
    v1 = 0LL;
  StackLimit = (char *)NtCurrentTeb()->NtTib.StackLimit;
  if ( v1 < StackLimit )
  {
    LOWORD(v1) = (unsigned __int16)v1 & 0xF000;
    do
    {
      StackLimit -= 4096;
      *StackLimit = 0;
    }
    while ( v1 != StackLimit );
  }
  return result;
}
