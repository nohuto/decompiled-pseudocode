/*
 * XREFs of CcFlushCache @ 0x1403575D0
 * Callers:
 *     <none>
 * Callees:
 *     CcFlushCachePriv @ 0x14029CFC4 (CcFlushCachePriv.c)
 */

void __stdcall CcFlushCache(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PIO_STATUS_BLOCK IoStatus)
{
  CcFlushCachePriv(SectionObjectPointer, (__int64)FileOffset, Length, 0LL, 0, (__int128 *)&IoStatus->0, 0LL);
}
