/*
 * XREFs of MiUpdateSystemPdes @ 0x140619A80
 * Callers:
 *     MiSyncSystemPdes @ 0x140292938 (MiSyncSystemPdes.c)
 *     KiInSwapProcesses @ 0x14034D22C (KiInSwapProcesses.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14021ACA0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021AE84 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiCopyTopLevelMappings @ 0x140292AD8 (MiCopyTopLevelMappings.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 */

__int64 __fastcall MiUpdateSystemPdes(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned __int64 v4; // r14
  int v5; // esi
  __int64 *v6; // rdi
  __int64 v7; // r8
  bool v8; // zf
  unsigned __int8 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0;
  v2 = *(_QWORD *)(a1 + 40) >> 12;
  v3 = MEMORY[0xFFFFF6FB7DBEDF68] ^ (MEMORY[0xFFFFF6FB7DBEDF68] ^ (v2 << 12)) & 0xFFFFFFFFFF000LL;
  v4 = MiMapPageInHyperSpaceWorker(v2, &v10, 0x80000000);
  MiCopyTopLevelMappings(a1, v4);
  v5 = 0;
  v6 = (__int64 *)(v4 + 3944);
  if ( MiPteInShadowRange(v4 + 3944) )
  {
    if ( MiPteHasShadow() )
    {
      v5 = 1;
      if ( HIBYTE(word_140C66CFC) )
        goto LABEL_9;
      v8 = (v3 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v8 = (v3 & 1) == 0;
    }
    if ( !v8 )
      v3 |= 0x8000000000000000uLL;
  }
LABEL_9:
  *v6 = v3;
  if ( v5 )
    MiWritePteShadow((__int64)v6, v3, v7);
  return MiUnmapPageInHyperSpaceWorker(v4, v10);
}
