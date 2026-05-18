/*
 * XREFs of sub_18008C164 @ 0x18008C164
 * Callers:
 *     sub_180086BE0 @ 0x180086BE0 (sub_180086BE0.c)
 * Callees:
 *     sub_180085F38 @ 0x180085F38 (sub_180085F38.c)
 */

bool __fastcall sub_18008C164(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = (_QWORD *)(a1 + 144);
  v5 = a2;
  sub_180085F38((__int64 *)(a1 + 144), (__int64)&v4, &v5);
  return v4 != *v2;
}
