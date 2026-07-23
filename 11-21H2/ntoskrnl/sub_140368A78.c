/*
 * XREFs of sub_140368A78 @ 0x140368A78
 * Callers:
 *     sub_1407EC230 @ 0x1407EC230 (sub_1407EC230.c)
 *     sub_1407EC280 @ 0x1407EC280 (sub_1407EC280.c)
 *     sub_1407ED710 @ 0x1407ED710 (sub_1407ED710.c)
 *     sub_14080BBA0 @ 0x14080BBA0 (sub_14080BBA0.c)
 *     sub_140810990 @ 0x140810990 (sub_140810990.c)
 *     sub_1408647A0 @ 0x1408647A0 (sub_1408647A0.c)
 *     sub_140989A30 @ 0x140989A30 (sub_140989A30.c)
 *     sub_140989DA0 @ 0x140989DA0 (sub_140989DA0.c)
 *     sub_1409967E4 @ 0x1409967E4 (sub_1409967E4.c)
 *     sub_140998800 @ 0x140998800 (sub_140998800.c)
 *     sub_14099D0B0 @ 0x14099D0B0 (sub_14099D0B0.c)
 *     sub_140A6BCF0 @ 0x140A6BCF0 (sub_140A6BCF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140368A78(__int64 a1)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
}
