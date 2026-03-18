/*
 * XREFs of MiInitializeScrubPacket @ 0x1409839C0
 * Callers:
 *     MiScrubMemoryWorker @ 0x140983B10 (MiScrubMemoryWorker.c)
 *     MiScrubProcesses @ 0x140983B80 (MiScrubProcesses.c)
 * Callees:
 *     MiReferencePageRuns @ 0x14023FF18 (MiReferencePageRuns.c)
 *     MiCreatePteCopyList @ 0x14024B428 (MiCreatePteCopyList.c)
 *     MiCreateUltraThreadContext @ 0x14026A574 (MiCreateUltraThreadContext.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiGetNextPageColor @ 0x1402EB3DC (MiGetNextPageColor.c)
 *     MiInitializePageColorBase @ 0x140339C20 (MiInitializePageColorBase.c)
 *     MiReleaseScrubPacket @ 0x140983AC0 (MiReleaseScrubPacket.c)
 */

__int64 __fastcall MiInitializeScrubPacket(__int64 *a1)
{
  unsigned int v2; // edi
  unsigned int NextPageColor; // eax
  __int64 v5; // rsi
  PVOID Pool; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v7 = 0LL;
  MiInitializePageColorBase(
    (__int64)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26],
    0,
    (__int64)&v7);
  NextPageColor = MiGetNextPageColor((__int64)&v7);
  if ( !(unsigned int)MiCreateUltraThreadContext((__int64)(a1 + 6), NextPageColor, 8) )
    return 3221225626LL;
  MiCreatePteCopyList(2uLL, 256, (__int64)(a1 + 22));
  if ( *((_DWORD *)a1 + 45)
    && (v5 = *a1,
        a1[25] = 0LL,
        a1[27] = 0LL,
        a1[26] = 0LL,
        Pool = MiAllocatePool(64, 0x1000uLL, 0x6363454Du),
        (a1[25] = (__int64)Pool) != 0) )
  {
    if ( *((_DWORD *)a1 + 2) != -1 )
      a1[27] = MiReferencePageRuns(*(_QWORD *)(v5 + 48), 1u);
  }
  else
  {
    MiReleaseScrubPacket(a1);
    return (unsigned int)-1073741670;
  }
  return v2;
}
