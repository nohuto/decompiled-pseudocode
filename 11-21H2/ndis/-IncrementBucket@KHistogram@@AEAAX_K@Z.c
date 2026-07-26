/*
 * XREFs of ?IncrementBucket@KHistogram@@AEAAX_K@Z @ 0x1C006F154
 * Callers:
 *     ndisDmaAllocationHistogramAddEntry @ 0x1C0122DAC (ndisDmaAllocationHistogramAddEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall KHistogram::IncrementBucket(KHistogram *this, __int64 a2)
{
  if ( (unsigned __int16)_InterlockedIncrement16((volatile signed __int16 *)this + a2 + 10) > 0xFF00u )
    _InterlockedDecrement16((volatile signed __int16 *)this + a2 + 10);
}
