/*
 * XREFs of sub_1405B3370 @ 0x1405B3370
 * Callers:
 *     sub_1406F89A4 @ 0x1406F89A4 (sub_1406F89A4.c)
 *     sub_1407BE280 @ 0x1407BE280 (sub_1407BE280.c)
 *     sub_14097BD88 @ 0x14097BD88 (sub_14097BD88.c)
 *     sub_14097D9E0 @ 0x14097D9E0 (sub_14097D9E0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1405B3370(__int64 a1, __int64 a2)
{
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1608), -a2);
}
