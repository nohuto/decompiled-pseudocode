/*
 * XREFs of sub_14063D8E0 @ 0x14063D8E0
 * Callers:
 *     sub_140214C50 @ 0x140214C50 (sub_140214C50.c)
 *     ExReleaseSpinLockShared @ 0x140222080 (ExReleaseSpinLockShared.c)
 *     sub_14026AB70 @ 0x14026AB70 (sub_14026AB70.c)
 *     sub_1402AD610 @ 0x1402AD610 (sub_1402AD610.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_14030C260 @ 0x14030C260 (sub_14030C260.c)
 *     sub_14030EC70 @ 0x14030EC70 (sub_14030EC70.c)
 *     sub_1403122F0 @ 0x1403122F0 (sub_1403122F0.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_1403171A0 @ 0x1403171A0 (sub_1403171A0.c)
 *     sub_14031CD90 @ 0x14031CD90 (sub_14031CD90.c)
 *     sub_1403234A0 @ 0x1403234A0 (sub_1403234A0.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_140330080 @ 0x140330080 (sub_140330080.c)
 *     sub_140331CC0 @ 0x140331CC0 (sub_140331CC0.c)
 *     sub_140338D00 @ 0x140338D00 (sub_140338D00.c)
 *     sub_14033DFC0 @ 0x14033DFC0 (sub_14033DFC0.c)
 * Callees:
 *     sub_140632CBC @ 0x140632CBC (sub_140632CBC.c)
 */

void __fastcall sub_14063D8E0(volatile signed __int32 *a1, __int64 a2)
{
  _InterlockedAnd(a1, 0xBFFFFFFF);
  _InterlockedDecrement(a1);
  sub_140632CBC((__int64)a1, a2, __rdtsc());
}
