/*
 * XREFs of sub_14040BD74 @ 0x14040BD74
 * Callers:
 *     sub_1404010DC @ 0x1404010DC (sub_1404010DC.c)
 *     sub_14040BDF0 @ 0x14040BDF0 (sub_14040BDF0.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     sub_1403FDDE8 @ 0x1403FDDE8 (sub_1403FDDE8.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

void __fastcall sub_14040BD74(__int64 a1, const void *a2, __int64 a3)
{
  memmove((void *)(a3 + 32), a2, (unsigned int)(*(_DWORD *)(a1 + 4) << 6));
  sub_1403FDDE8(
    a3 + 32 + 4LL * (unsigned int)(16 * *(_DWORD *)(a1 + 4)),
    (unsigned int)((*(_DWORD *)(a3 + 4) - *(_DWORD *)(a1 + 4)) << 6));
  _misaligned_access();
}
