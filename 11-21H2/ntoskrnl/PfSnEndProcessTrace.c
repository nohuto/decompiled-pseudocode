/*
 * XREFs of PfSnEndProcessTrace @ 0x1407D936C
 * Callers:
 *     PfSnOperationProcess @ 0x1407D8338 (PfSnOperationProcess.c)
 *     PspExitProcess @ 0x1407DB734 (PspExitProcess.c)
 *     PfSnFailProcessTrace @ 0x1407F8C9C (PfSnFailProcessTrace.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     PfSnReferenceProcessTrace @ 0x1402CD7F0 (PfSnReferenceProcessTrace.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 */

__int64 __fastcall PfSnEndProcessTrace(__int64 a1, signed __int32 a2, const void *a3)
{
  struct _EX_RUNDOWN_REF *v5; // rax
  unsigned int v6; // ebx
  struct _EX_RUNDOWN_REF *v7; // rdi

  v5 = PfSnReferenceProcessTrace(a1);
  v6 = 0;
  v7 = v5;
  if ( v5 )
  {
    if ( !a3 || !memcmp(a3, &v5[3], 0x40uLL) )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)&v7[50], a2, 0) )
        v6 = -1073741431;
      else
        ExQueueWorkItem((PWORK_QUEUE_ITEM)&v7[46], DelayedWorkQueue);
    }
    else
    {
      v6 = -1073741198;
    }
    ExReleaseRundownProtection(v7 + 45);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v6;
}
