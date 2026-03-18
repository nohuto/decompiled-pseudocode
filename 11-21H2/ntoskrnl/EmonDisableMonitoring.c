/*
 * XREFs of EmonDisableMonitoring @ 0x140520270
 * Callers:
 *     <none>
 * Callees:
 *     EmonConfigureCounter @ 0x140399A14 (EmonConfigureCounter.c)
 *     EmonFreeCounter @ 0x1403BEC24 (EmonFreeCounter.c)
 */

__int64 __fastcall EmonDisableMonitoring(int a1, unsigned int *a2)
{
  unsigned int Number; // r8d
  __int64 result; // rax
  unsigned int i; // ebx

  Number = KeGetPcr()->Prcb.Number;
  result = HalpCounterStatus;
  if ( HalpProfileInterface != &DefaultProfileInterface )
    result = HalpCounterStatus + 8LL * Number * HalpNumberOfCounters;
  if ( a2 )
  {
    i = *a2;
    if ( (*a2 & 0x40000000) != 0 )
      i = EmonNumberArchCounters + (i & 0xBFFFFFFF);
LABEL_11:
    EmonConfigureCounter(i, 0, 0LL, 0, 0);
    EmonFreeCounter(i);
    return (unsigned int)_InterlockedExchangeAdd(
                           (volatile signed __int32 *)&KeGetCurrentPrcb()->HalReserved[2],
                           0xFFFFFFFE);
  }
  for ( i = 0; i < EmonNumberCounters; result += 8LL )
  {
    if ( !*(_DWORD *)(*(_QWORD *)result + 24LL) && *(_DWORD *)(*(_QWORD *)result + 32LL) == a1 )
      break;
    ++i;
  }
  if ( i != EmonNumberCounters )
    goto LABEL_11;
  return result;
}
