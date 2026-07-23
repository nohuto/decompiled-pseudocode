/*
 * XREFs of MmLockPreChargedPagedPool @ 0x140808190
 * Callers:
 *     sub_1403989A4 @ 0x1403989A4 (sub_1403989A4.c)
 *     sub_1406F3A44 @ 0x1406F3A44 (sub_1406F3A44.c)
 *     sub_140802068 @ 0x140802068 (sub_140802068.c)
 * Callees:
 *     sub_140312BB0 @ 0x140312BB0 (sub_140312BB0.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 */

__int64 __fastcall MmLockPreChargedPagedPool(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  __int16 v3; // r8

  v1 = sub_140313C70(a1);
  return sub_140312BB0(0LL, v1, v1 + 8 * ((((unsigned __int64)(v3 & 0xFFF) + v2 + 4095) >> 12) - 1), 1);
}
