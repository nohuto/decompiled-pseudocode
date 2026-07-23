/*
 * XREFs of sub_14041B4C0 @ 0x14041B4C0
 * Callers:
 *     sub_140390D20 @ 0x140390D20 (sub_140390D20.c)
 * Callees:
 *     KeSweepLocalCaches @ 0x140389F70 (KeSweepLocalCaches.c)
 */

unsigned __int64 __fastcall sub_14041B4C0(volatile signed __int32 *a1)
{
  unsigned __int64 result; // rax

  KeSweepLocalCaches();
  _InterlockedIncrement(a1);
  do
    _mm_pause();
  while ( *a1 );
  result = __readcr2();
  __writecr2(result);
  return result;
}
