/*
 * XREFs of HalpTimerMarkWake @ 0x14050954C
 * Callers:
 *     HalpPostSleepMP @ 0x140A96E18 (HalpPostSleepMP.c)
 * Callees:
 *     <none>
 */

int HalpTimerMarkWake()
{
  unsigned __int64 v0; // rax

  LODWORD(v0) = KeGetPcr()->Prcb.Number;
  if ( !(_DWORD)v0 )
  {
    v0 = __rdtsc();
    HalpTscOnWake = v0;
  }
  return v0;
}
