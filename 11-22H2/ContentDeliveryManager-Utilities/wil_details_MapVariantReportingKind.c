/*
 * XREFs of wil_details_MapVariantReportingKind @ 0x180046090
 * Callers:
 *     ?ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HEIW4wil_VariantReportingKind@@_K@Z @ 0x18003EDD0 (-ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_MapVariantReportingKind(int a1, int a2, unsigned __int8 a3)
{
  int v3; // ecx
  int v5; // eax

  v3 = a1 - 1;
  if ( v3 )
  {
    if ( v3 != 1 )
      return 255LL;
    v5 = a2 != 0 ? 320 : 256;
  }
  else
  {
    v5 = a2 != 0 ? 448 : 384;
  }
  return (unsigned int)a3 + v5;
}
