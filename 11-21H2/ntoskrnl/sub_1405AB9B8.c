/*
 * XREFs of sub_1405AB9B8 @ 0x1405AB9B8
 * Callers:
 *     sub_1405AAA4C @ 0x1405AAA4C (sub_1405AAA4C.c)
 *     sub_1405B99AC @ 0x1405B99AC (sub_1405B99AC.c)
 *     MmSetGraphicsPtes @ 0x14096B560 (MmSetGraphicsPtes.c)
 *     sub_14097C814 @ 0x14097C814 (sub_14097C814.c)
 *     sub_14097CC1C @ 0x14097CC1C (sub_14097CC1C.c)
 *     sub_14097D5F0 @ 0x14097D5F0 (sub_14097D5F0.c)
 *     sub_14097D7F8 @ 0x14097D7F8 (sub_14097D7F8.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402A3C30 (ExAcquireAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall sub_1405AB9B8(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 1680LL);
  --*(_WORD *)(a1 + 486);
  return ExAcquireAutoExpandPushLockExclusive(v2 + 392, 0LL);
}
