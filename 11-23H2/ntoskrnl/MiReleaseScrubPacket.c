/*
 * XREFs of MiReleaseScrubPacket @ 0x140A465E4
 * Callers:
 *     MiInitializeScrubPacket @ 0x140A462DC (MiInitializeScrubPacket.c)
 *     MiScrubMemoryWorker @ 0x140A468B0 (MiScrubMemoryWorker.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x1402E9534 (MiDeleteUltraThreadContext.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseScrubPacket(__int64 a1)
{
  void *v2; // rcx

  MiDeleteUltraThreadContext(a1 + 48);
  v2 = *(void **)(a1 + 176);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
