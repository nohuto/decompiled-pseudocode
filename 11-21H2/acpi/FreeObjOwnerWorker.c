/*
 * XREFs of FreeObjOwnerWorker @ 0x1C0066590
 * Callers:
 *     <none>
 * Callees:
 *     AMLIRestartContext @ 0x1C00648F4 (AMLIRestartContext.c)
 *     FreeObjOwner @ 0x1C00663E4 (FreeObjOwner.c)
 */

void __fastcall FreeObjOwnerWorker(struct _EX_RUNDOWN_REF *StartContext)
{
  __int64 Count; // rbx

  Count = StartContext[7].Count;
  FreeObjOwner(0LL, StartContext);
  AMLIRestartContext(Count);
}
