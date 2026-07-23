/*
 * XREFs of PnpGetProcessCommandLine @ 0x140964548
 * Callers:
 *     PnpLogVetoInformation @ 0x1409645E0 (PnpLogVetoInformation.c)
 * Callees:
 *     PsQueryProcessCommandLine @ 0x140354890 (PsQueryProcessCommandLine.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void *__fastcall PnpGetProcessCommandLine(ULONG_PTR BugCheckParameter1)
{
  void *Pool2; // rbx
  int ProcessCommandLine; // eax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v5) = 0;
  Pool2 = 0LL;
  ProcessCommandLine = PsQueryProcessCommandLine(BugCheckParameter1, 0LL, 0, 0, (unsigned int *)&v5);
  if ( ProcessCommandLine == -1073741820 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v5, 1332768336LL);
    if ( !Pool2 )
      return Pool2;
    ProcessCommandLine = PsQueryProcessCommandLine(BugCheckParameter1, (__int64)Pool2, v5, 0, (unsigned int *)&v5);
  }
  if ( ProcessCommandLine < 0 && Pool2 )
  {
    ExFreePoolWithTag(Pool2, 0x4F706E50u);
    return 0LL;
  }
  return Pool2;
}
