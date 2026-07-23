/*
 * XREFs of MiTransformValidPteInPlace @ 0x1403C335C
 * Callers:
 *     MiShadowTopLevelPxes @ 0x140292C4C (MiShadowTopLevelPxes.c)
 *     MiInitializeSystemPageTable @ 0x1402E4838 (MiInitializeSystemPageTable.c)
 *     MiReplicatePteChangeToProcess @ 0x140368684 (MiReplicatePteChangeToProcess.c)
 *     MiReplacePfnWithGapMapping @ 0x14038F6D8 (MiReplacePfnWithGapMapping.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038F884 (MiDemoteValidLargePageOneLevel.c)
 *     MiMakeLargePageTable @ 0x140637554 (MiMakeLargePageTable.c)
 *     MiInitializeDynamicBitmap @ 0x14081CA74 (MiInitializeDynamicBitmap.c)
 * Callees:
 *     MiFlushValidPteFromTb @ 0x14038CA94 (MiFlushValidPteFromTb.c)
 *     MiWritePteHighLevel @ 0x14064E80C (MiWritePteHighLevel.c)
 */

void __fastcall MiTransformValidPteInPlace(volatile signed __int64 *a1, unsigned __int64 a2, signed __int64 a3, int a4)
{
  signed __int64 v8; // rax
  unsigned int v9; // ebx
  int v10; // ebp
  signed __int64 v11; // rtt
  unsigned __int64 v12; // rdi
  signed __int64 v13; // rtt

  if ( (MiFlags & 0x2000000) != 0 )
    _mm_lfence();
  v8 = *a1;
  if ( *a1 != a3 )
  {
    v9 = ((unsigned int)MiFlags >> 26) & 3;
    while ( 1 )
    {
      v10 = 0;
      if ( v9 <= 1 && (!v9 || a2 >= 0xFFFFF6FB40000000uLL && a2 <= 0xFFFFF6FB7FFFFFFFuLL && (v8 & 0x80u) == 0LL) )
      {
        v10 = 1;
        if ( KeGetCurrentPrcb()->Number < (unsigned int)KeNumberProcessors_0 )
        {
          MiWritePteHighLevel(a1, a2, a3);
          return;
        }
      }
      while ( (v8 & 0x20) != 0 && !v10 )
      {
        v12 = v8 & 0xFFFFFFFFFFFFFFDFuLL;
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        v13 = v8;
        v8 = _InterlockedCompareExchange64(a1, v12, v8);
        if ( v13 == v8 )
        {
          MiFlushValidPteFromTb(a2, v8, a4);
          v8 = v12;
          break;
        }
        if ( v9 == 1 && a2 >= 0xFFFFF6FB40000000uLL && a2 <= 0xFFFFF6FB7FFFFFFFuLL && (v8 & 0x80u) == 0LL )
          v10 = 1;
      }
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      v11 = v8;
      v8 = _InterlockedCompareExchange64(a1, a3, v8);
      if ( v11 == v8 )
        break;
      if ( v8 == a3 )
        return;
    }
    if ( v10 )
      LOBYTE(v8) = v8 | 0x20;
    if ( (v8 & 0x20) != 0 )
      MiFlushValidPteFromTb(a2, v8, a4);
  }
}
