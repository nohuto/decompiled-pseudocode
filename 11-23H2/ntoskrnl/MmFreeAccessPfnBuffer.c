/*
 * XREFs of MmFreeAccessPfnBuffer @ 0x1402F583C
 * Callers:
 *     MiReturnCcAccessLog @ 0x1402F4FC0 (MiReturnCcAccessLog.c)
 *     MiQueuePageAccessLog @ 0x1402F5780 (MiQueuePageAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x1402F5884 (PfpReturnAccessBuffer.c)
 *     PfpFlushBuffers @ 0x14074B200 (PfpFlushBuffers.c)
 *     PfTAccessTracingCleanup @ 0x140A874E0 (PfTAccessTracingCleanup.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8F70 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MmFreeAccessPfnBuffer(_QWORD *P, char a2)
{
  void *v3; // rcx

  if ( !*((_DWORD *)P + 2) )
  {
    v3 = (void *)P[7];
    if ( (unsigned __int64)v3 > 1 )
    {
      if ( a2 )
        ObDereferenceObjectDeferDeleteWithTag(v3, 0x746C6644u);
      else
        ObfDereferenceObject(v3);
    }
  }
  ExFreePoolWithTag(P, 0);
}
