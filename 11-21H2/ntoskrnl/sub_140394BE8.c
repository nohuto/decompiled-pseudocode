/*
 * XREFs of sub_140394BE8 @ 0x140394BE8
 * Callers:
 *     sub_14027AEA0 @ 0x14027AEA0 (sub_14027AEA0.c)
 *     sub_1405803C8 @ 0x1405803C8 (sub_1405803C8.c)
 *     sub_1406F4E78 @ 0x1406F4E78 (sub_1406F4E78.c)
 * Callees:
 *     sub_14037D59C @ 0x14037D59C (sub_14037D59C.c)
 *     sub_140393778 @ 0x140393778 (sub_140393778.c)
 */

__int64 __fastcall sub_140394BE8(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rcx
  __int64 *v4; // r10
  __int64 v5; // r11
  int v7[6]; // [rsp+30h] [rbp-18h] BYREF

  v7[0] = 0;
  sub_14037D59C(a1, v7);
  return sub_140393778(v3, v7, a2, v5, v4);
}
