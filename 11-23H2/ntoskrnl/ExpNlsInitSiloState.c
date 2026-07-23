/*
 * XREFs of ExpNlsInitSiloState @ 0x1409FB7EC
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409AD2A0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     PsDetachSiloFromCurrentThread @ 0x14031CF20 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14031CF40 (PsAttachSiloToCurrentThread.c)
 *     ExInitializeNls @ 0x140821B84 (ExInitializeNls.c)
 */

__int64 __fastcall ExpNlsInitSiloState(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *v1; // rdi
  NTSTATUS v2; // ebx

  v1 = PsAttachSiloToCurrentThread(a1);
  v2 = ExInitializeNls();
  if ( v2 >= 0 )
    *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 132) + 8LL) = 1LL;
  PsDetachSiloFromCurrentThread(v1);
  return (unsigned int)v2;
}
