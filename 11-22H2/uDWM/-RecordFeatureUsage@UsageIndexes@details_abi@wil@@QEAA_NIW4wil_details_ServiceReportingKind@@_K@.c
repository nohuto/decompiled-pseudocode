/*
 * XREFs of ?RecordFeatureUsage@UsageIndexes@details_abi@wil@@QEAA_NIW4wil_details_ServiceReportingKind@@_K@Z @ 0x18005E67C
 * Callers:
 *     ?RecordFeatureUsage@FeatureStateData@details_abi@wil@@QEAA_NIW4wil_details_ServiceReportingKind@@_K@Z @ 0x1800107C0 (-RecordFeatureUsage@FeatureStateData@details_abi@wil@@QEAA_NIW4wil_details_ServiceReportingKind@.c)
 * Callees:
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180010864 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 */

char __fastcall wil::details_abi::UsageIndexes::RecordFeatureUsage(
        wil::details_abi::RawUsageIndex *a1,
        unsigned int a2,
        unsigned int a3)
{
  int v4; // eax

  if ( a3 > 7 || (v4 = 204, !_bittest(&v4, a3)) )
  {
    if ( a3 - 256 > 0x7F )
      return wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,2>::RecordUsage(
               (char *)a1 + 64,
               a3,
               a2);
  }
  wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,0>::RecordUsage(a1, a3, a2);
  return *((_BYTE *)a1 + 56);
}
