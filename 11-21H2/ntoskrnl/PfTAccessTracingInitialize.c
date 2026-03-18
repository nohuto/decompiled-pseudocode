/*
 * XREFs of PfTAccessTracingInitialize @ 0x140A485D4
 * Callers:
 *     PfTInitialize @ 0x14084F9EC (PfTInitialize.c)
 *     PfTAccessTracingCleanup @ 0x140A483FC (PfTAccessTracingCleanup.c)
 * Callees:
 *     InitializeSListHead @ 0x1402A05A0 (InitializeSListHead.c)
 *     ExInitializePushLock @ 0x1402A0840 (ExInitializePushLock.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 */

void __fastcall PfTAccessTracingInitialize(__int64 a1, __int64 a2, int a3)
{
  struct _EX_RUNDOWN_REF *v4; // rcx

  if ( !a3 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 12) = 3;
  }
  *(_DWORD *)(a2 + 40) = 0;
  v4 = (struct _EX_RUNDOWN_REF *)(a2 + 8);
  if ( a3 )
  {
    _InterlockedExchange64((volatile __int64 *)v4, 0LL);
  }
  else
  {
    ExInitializePushLock(v4);
    InitializeSListHead((PSLIST_HEADER)(a2 + 64));
    KeInitializeEvent((PRKEVENT)(a2 + 16), NotificationEvent, 0);
  }
}
