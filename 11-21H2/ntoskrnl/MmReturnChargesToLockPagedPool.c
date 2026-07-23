/*
 * XREFs of MmReturnChargesToLockPagedPool @ 0x14096CA90
 * Callers:
 *     sub_1405AED7C @ 0x1405AED7C (sub_1405AED7C.c)
 *     sub_1406F3A44 @ 0x1406F3A44 (sub_1406F3A44.c)
 *     sub_140818E88 @ 0x140818E88 (sub_140818E88.c)
 *     sub_14090A3F0 @ 0x14090A3F0 (sub_14090A3F0.c)
 * Callees:
 *     sub_140216E18 @ 0x140216E18 (sub_140216E18.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_14027E810 @ 0x14027E810 (sub_14027E810.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 */

unsigned __int64 __fastcall MmReturnChargesToLockPagedPool(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  char *v3; // rax
  unsigned __int64 v4; // r8
  _OWORD v6[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+60h] [rbp-18h]

  v7 = 0LL;
  v2 = ((a1 & 0xFFF) + a2 + 4095) >> 12;
  memset(v6, 0, sizeof(v6));
  sub_140313C70(a1);
  v3 = sub_14026DFC0(2);
  sub_14027E810((__int64)v3, 0LL, v4, v2, 8, v6);
  return sub_140216E18((__int64)&StartContext, v2);
}
