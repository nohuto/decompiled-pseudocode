/*
 * XREFs of sub_1800211EC @ 0x1800211EC
 * Callers:
 *     sub_180021300 @ 0x180021300 (sub_180021300.c)
 *     sub_180025598 @ 0x180025598 (sub_180025598.c)
 *     sub_180027E8C @ 0x180027E8C (sub_180027E8C.c)
 *     sub_1800422EC @ 0x1800422EC (sub_1800422EC.c)
 *     sub_18006F004 @ 0x18006F004 (sub_18006F004.c)
 * Callees:
 *     sub_18001C7FC @ 0x18001C7FC (sub_18001C7FC.c)
 */

__int64 __fastcall sub_1800211EC(__int64 a1)
{
  return (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)sub_18001C7FC(a1), 1u);
}
