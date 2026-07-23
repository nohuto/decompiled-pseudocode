/*
 * XREFs of EtwInitializeSiloState @ 0x1409E20B8
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409AD2A0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140297924 (PsGetServerSiloGlobals.c)
 *     EtwpGetCurrentSiloMaxLoggers @ 0x1403B419C (EtwpGetCurrentSiloMaxLoggers.c)
 *     EtwpInitializeSiloState @ 0x14083B664 (EtwpInitializeSiloState.c)
 *     EtwpPreInitializeSiloState @ 0x14084604C (EtwpPreInitializeSiloState.c)
 *     EtwpCleanupSiloState @ 0x1409E3560 (EtwpCleanupSiloState.c)
 */

__int64 __fastcall EtwInitializeSiloState(struct _LIST_ENTRY *a1)
{
  unsigned int CurrentSiloMaxLoggers; // eax
  int v3; // ebx
  PVOID *ServerSiloGlobals; // rax

  CurrentSiloMaxLoggers = EtwpGetCurrentSiloMaxLoggers();
  v3 = EtwpPreInitializeSiloState((__int64)a1, CurrentSiloMaxLoggers);
  if ( v3 < 0 || (v3 = EtwpInitializeSiloState(a1, 0LL), v3 < 0) )
  {
    ServerSiloGlobals = (PVOID *)PsGetServerSiloGlobals((__int64)a1);
    EtwpCleanupSiloState(ServerSiloGlobals[108]);
  }
  return (unsigned int)v3;
}
