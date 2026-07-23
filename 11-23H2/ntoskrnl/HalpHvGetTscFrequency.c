/*
 * XREFs of HalpHvGetTscFrequency @ 0x14050B9A0
 * Callers:
 *     <none>
 * Callees:
 *     HalpHvIsFrequencyAvailable @ 0x1403798FC (HalpHvIsFrequencyAvailable.c)
 */

unsigned __int64 __fastcall HalpHvGetTscFrequency(__int64 a1, __int64 a2)
{
  __int64 v2; // r10

  if ( HalpHvIsFrequencyAvailable(a1, a2) )
    return __readmsr(0x40000022u);
  return v2;
}
