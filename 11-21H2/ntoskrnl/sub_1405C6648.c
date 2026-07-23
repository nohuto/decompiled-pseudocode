/*
 * XREFs of sub_1405C6648 @ 0x1405C6648
 * Callers:
 *     sub_1409884F4 @ 0x1409884F4 (sub_1409884F4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405C6648(__int64 a1, __int32 a2)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 88), a2);
}
