/*
 * XREFs of CarDeleteTelemetryData @ 0x1405D4054
 * Callers:
 *     CarCreateTelemetryData @ 0x1405D3FAC (CarCreateTelemetryData.c)
 *     CarDeregisterRuleClassConfiguration @ 0x1405D40F0 (CarDeregisterRuleClassConfiguration.c)
 *     CarDeregisterRuleOverride @ 0x1405D4190 (CarDeregisterRuleOverride.c)
 *     CarReportRuleViolationForTriage @ 0x1405D4930 (CarReportRuleViolationForTriage.c)
 *     CarLiveDump @ 0x1405D6000 (CarLiveDump.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall CarDeleteTelemetryData(void **a1)
{
  void *v2; // rcx

  if ( a1 )
  {
    v2 = *a1;
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x4E726143u);
      *a1 = 0LL;
    }
  }
}
