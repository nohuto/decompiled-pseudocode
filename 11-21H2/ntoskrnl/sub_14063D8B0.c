/*
 * XREFs of sub_14063D8B0 @ 0x14063D8B0
 * Callers:
 *     sub_1402206C0 @ 0x1402206C0 (sub_1402206C0.c)
 *     ExReleaseSpinLockExclusive @ 0x140229990 (ExReleaseSpinLockExclusive.c)
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 *     sub_140287660 @ 0x140287660 (sub_140287660.c)
 *     ExDeleteResourceLite @ 0x14028A7C0 (ExDeleteResourceLite.c)
 *     sub_1402B1E40 @ 0x1402B1E40 (sub_1402B1E40.c)
 *     sub_1402BBEE0 @ 0x1402BBEE0 (sub_1402BBEE0.c)
 *     sub_1402BEEA0 @ 0x1402BEEA0 (sub_1402BEEA0.c)
 *     sub_1402C41D0 @ 0x1402C41D0 (sub_1402C41D0.c)
 *     sub_1402C4E50 @ 0x1402C4E50 (sub_1402C4E50.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402C8740 @ 0x1402C8740 (sub_1402C8740.c)
 *     sub_1402CA5E0 @ 0x1402CA5E0 (sub_1402CA5E0.c)
 *     sub_14030C870 @ 0x14030C870 (sub_14030C870.c)
 *     sub_14030E390 @ 0x14030E390 (sub_14030E390.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_140311CC0 @ 0x140311CC0 (sub_140311CC0.c)
 *     sub_1403122F0 @ 0x1403122F0 (sub_1403122F0.c)
 *     sub_140332110 @ 0x140332110 (sub_140332110.c)
 *     sub_140333040 @ 0x140333040 (sub_140333040.c)
 *     sub_14034F230 @ 0x14034F230 (sub_14034F230.c)
 *     sub_14034F7F0 @ 0x14034F7F0 (sub_14034F7F0.c)
 * Callees:
 *     sub_140632CBC @ 0x140632CBC (sub_140632CBC.c)
 */

void __fastcall sub_14063D8B0(_DWORD *a1, __int64 a2)
{
  *a1 = 0;
  sub_140632CBC((__int64)a1, a2, __rdtsc());
}
