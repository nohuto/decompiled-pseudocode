/*
 * XREFs of MI_INTERLOCKED_EXCHANGE_PTE @ 0x1402E5D40
 * Callers:
 *     MiCopyOnWrite @ 0x14026FDA0 (MiCopyOnWrite.c)
 *     MiTerminateWsle @ 0x140274850 (MiTerminateWsle.c)
 *     MmUnmapViewInSystemCache @ 0x1402D9FB0 (MmUnmapViewInSystemCache.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1402E4A00 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402E5B30 (MiUnlockNestedPageTableWritePte.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140271360 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14035734C (MiWritePteShadow.c)
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
