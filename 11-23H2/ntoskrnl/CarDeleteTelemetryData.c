/*
 * XREFs of CarDeleteTelemetryData @ 0x1405D3AE4
 * Callers:
 *     CarCreateTelemetryData @ 0x1405D3A3C (CarCreateTelemetryData.c)
 *     CarDeregisterRuleClassConfiguration @ 0x1405D3B80 (CarDeregisterRuleClassConfiguration.c)
 *     CarDeregisterRuleOverride @ 0x1405D3C20 (CarDeregisterRuleOverride.c)
 *     CarReportRuleViolationForTriage @ 0x1405D43C0 (CarReportRuleViolationForTriage.c)
 *     CarLiveDump @ 0x1405D5A90 (CarLiveDump.c)
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
