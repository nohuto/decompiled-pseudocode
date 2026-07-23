/*
 * XREFs of MmUnlockPreChargedPagedPool @ 0x140800560
 * Callers:
 *     sub_14038D400 @ 0x14038D400 (sub_14038D400.c)
 *     sub_1405AED7C @ 0x1405AED7C (sub_1405AED7C.c)
 *     sub_140800338 @ 0x140800338 (sub_140800338.c)
 * Callees:
 *     sub_140256158 @ 0x140256158 (sub_140256158.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 */

__int64 __fastcall MmUnlockPreChargedPagedPool(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  __int16 v3; // r8

  v1 = sub_140313C70(a1);
  return sub_140256158(v1, v1 + 8 * ((((unsigned __int64)(v3 & 0xFFF) + v2 + 4095) >> 12) - 1), 0);
}
