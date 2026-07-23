/*
 * XREFs of MI_INTERLOCKED_EXCHANGE_PTE @ 0x1402E5FD0
 * Callers:
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MiTerminateWsle @ 0x140274AE0 (MiTerminateWsle.c)
 *     MmUnmapViewInSystemCache @ 0x1402DA240 (MmUnmapViewInSystemCache.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1402E4C90 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402E5DC0 (MiUnlockNestedPageTableWritePte.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 */

__int64 __fastcall MI_INTERLOCKED_EXCHANGE_PTE(volatile __int64 *a1, __int64 a2)
{
  __int64 v4; // rbx

  if ( (MiFlags & 0x2000000) != 0 )
    _mm_lfence();
  v4 = _InterlockedExchange64(a1, a2);
  if ( MiPteInShadowRange((unsigned __int64)a1) )
    MiWritePteShadow(a1, a2);
  return v4;
}
