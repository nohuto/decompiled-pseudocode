/*
 * XREFs of sub_18008B320 @ 0x18008B320
 * Callers:
 *     sub_18004FECC @ 0x18004FECC (sub_18004FECC.c)
 * Callees:
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 */

__int64 __fastcall sub_18008B320(__int64 a1, __int64 a2)
{
  void **v3; // rax
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = (void **)sub_180017648(v5, a2);
  return sub_180029824(a1, v3);
}
