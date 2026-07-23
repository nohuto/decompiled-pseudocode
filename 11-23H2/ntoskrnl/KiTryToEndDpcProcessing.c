/*
 * XREFs of KiTryToEndDpcProcessing @ 0x14057D064
 * Callers:
 *     KiExecuteDpc @ 0x14039ABF0 (KiExecuteDpc.c)
 * Callees:
 *     <none>
 */

char __fastcall KiTryToEndDpcProcessing(volatile signed __int16 *a1, __int64 a2)
{
  if ( _InterlockedCompareExchange16(a1, 0, 1) != 1 )
    return 0;
  *(_QWORD *)(a2 + 32) = 0LL;
  return 1;
}
