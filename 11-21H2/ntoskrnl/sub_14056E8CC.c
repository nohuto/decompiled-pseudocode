/*
 * XREFs of sub_14056E8CC @ 0x14056E8CC
 * Callers:
 *     sub_140211BD0 @ 0x140211BD0 (sub_140211BD0.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KdPollBreakIn @ 0x1402223B0 (KdPollBreakIn.c)
 *     PsGetThreadProperty @ 0x140223C50 (PsGetThreadProperty.c)
 *     sub_140294110 @ 0x140294110 (sub_140294110.c)
 *     sub_1402A7370 @ 0x1402A7370 (sub_1402A7370.c)
 *     sub_1402A9790 @ 0x1402A9790 (sub_1402A9790.c)
 *     sub_1402AE1B0 @ 0x1402AE1B0 (sub_1402AE1B0.c)
 *     KeReleaseSpinLock @ 0x1402B1CB0 (KeReleaseSpinLock.c)
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     sub_1402E33D0 @ 0x1402E33D0 (sub_1402E33D0.c)
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 *     sub_1403072A0 @ 0x1403072A0 (sub_1403072A0.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     sub_1403489B0 @ 0x1403489B0 (sub_1403489B0.c)
 *     sub_140356F50 @ 0x140356F50 (sub_140356F50.c)
 *     sub_140A9E300 @ 0x140A9E300 (sub_140A9E300.c)
 * Callees:
 *     sub_140632CBC @ 0x140632CBC (sub_140632CBC.c)
 */

__int64 __fastcall sub_14056E8CC(volatile signed __int64 *a1, __int64 a2)
{
  _InterlockedAnd64(a1, 0LL);
  return sub_140632CBC(a1, a2, __rdtsc());
}
