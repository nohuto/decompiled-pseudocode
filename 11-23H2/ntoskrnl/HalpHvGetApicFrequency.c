/*
 * XREFs of HalpHvGetApicFrequency @ 0x14050B970
 * Callers:
 *     <none>
 * Callees:
 *     HalpHvIsFrequencyAvailable @ 0x1403798FC (HalpHvIsFrequencyAvailable.c)
 */

unsigned __int64 __fastcall HalpHvGetApicFrequency(__int64 a1, __int64 a2)
{
  __int64 v2; // r10

  if ( HalpHvIsFrequencyAvailable(a1, a2) )
    return __readmsr(0x40000023u);
  return v2;
}
