/*
 * XREFs of sub_140AB4464 @ 0x140AB4464
 * Callers:
 *     sub_1406D407C @ 0x1406D407C (sub_1406D407C.c)
 *     sub_14071B640 @ 0x14071B640 (sub_14071B640.c)
 *     sub_1407C3850 @ 0x1407C3850 (sub_1407C3850.c)
 *     sub_14090C1BC @ 0x14090C1BC (sub_14090C1BC.c)
 *     sub_14090CFF8 @ 0x14090CFF8 (sub_14090CFF8.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall sub_140AB4464(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 + 1784, 0LL);
}
