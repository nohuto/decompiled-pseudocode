/*
 * XREFs of MiReleaseScrubPacket @ 0x140983AC0
 * Callers:
 *     MiInitializeScrubPacket @ 0x1409839C0 (MiInitializeScrubPacket.c)
 *     MiScrubMemoryWorker @ 0x140983B10 (MiScrubMemoryWorker.c)
 *     MiScrubProcesses @ 0x140983B80 (MiScrubProcesses.c)
 * Callees:
 *     MiDereferencePageRuns @ 0x14023FCF0 (MiDereferencePageRuns.c)
 *     MiReleasePteCopyList @ 0x140250BDC (MiReleasePteCopyList.c)
 *     MiDeleteUltraThreadContext @ 0x140268284 (MiDeleteUltraThreadContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseScrubPacket(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rcx

  MiDeleteUltraThreadContext(a1 + 48);
  MiReleasePteCopyList(a1 + 176);
  v2 = *(void **)(a1 + 200);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = *(_QWORD *)(a1 + 216);
  if ( v3 )
    MiDereferencePageRuns(v3);
}
