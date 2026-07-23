/*
 * XREFs of sub_1406A633C @ 0x1406A633C
 * Callers:
 *     sub_1406A62C8 @ 0x1406A62C8 (sub_1406A62C8.c)
 *     sub_1406A6C04 @ 0x1406A6C04 (sub_1406A6C04.c)
 *     sub_1409F9244 @ 0x1409F9244 (sub_1409F9244.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406A6F00 @ 0x1406A6F00 (sub_1406A6F00.c)
 */

void *__fastcall sub_1406A633C(__int64 a1, size_t a2)
{
  void *v3; // rax
  void *v4; // rbx

  v3 = (void *)sub_1406A6F00();
  v4 = v3;
  if ( v3 )
    memset(v3, 0, a2);
  return v4;
}
