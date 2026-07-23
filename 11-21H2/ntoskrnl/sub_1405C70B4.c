/*
 * XREFs of sub_1405C70B4 @ 0x1405C70B4
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_1402F374C @ 0x1402F374C (sub_1402F374C.c)
 */

void sub_1405C70B4()
{
  signed __int32 v0[10]; // [rsp+0h] [rbp-28h] BYREF

  sub_140224E90(&qword_140C23EE0);
  byte_140D0488C = 0;
  dword_140CE2048 = 0;
  _InterlockedOr(v0, 0);
  sub_1402F374C(1);
  sub_140224C00((__int64 *)&qword_140C23EE0);
}
