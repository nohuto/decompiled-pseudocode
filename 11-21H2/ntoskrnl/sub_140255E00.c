/*
 * XREFs of sub_140255E00 @ 0x140255E00
 * Callers:
 *     sub_1403CB9F0 @ 0x1403CB9F0 (sub_1403CB9F0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140255E00(volatile signed __int16 *a1, __int64 a2)
{
  if ( _InterlockedCompareExchange16(a1, 0, 1) != 1 )
    return 0;
  *(_QWORD *)(a2 + 32) = 0LL;
  return 1;
}
