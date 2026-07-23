/*
 * XREFs of sub_140761FC0 @ 0x140761FC0
 * Callers:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_1406FC148 @ 0x1406FC148 (sub_1406FC148.c)
 *     sub_140761A2C @ 0x140761A2C (sub_140761A2C.c)
 * Callees:
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_14076200C @ 0x14076200C (sub_14076200C.c)
 */

__int64 __fastcall sub_140761FC0(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned __int64 v4; // r8
  int v5; // eax

  v2 = a2 >> 12;
  v3 = sub_140313C70(a1);
  v5 = sub_14027B080(v4);
  return sub_14076200C(v5 == 1, v3, (unsigned int)v2);
}
