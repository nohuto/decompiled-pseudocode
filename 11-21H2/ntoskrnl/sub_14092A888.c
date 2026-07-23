/*
 * XREFs of sub_14092A888 @ 0x14092A888
 * Callers:
 *     sub_140702420 @ 0x140702420 (sub_140702420.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14092A070 @ 0x14092A070 (sub_14092A070.c)
 */

void *__fastcall sub_14092A888(__int64 a1)
{
  void *result; // rax
  _QWORD *v3; // rdi
  _QWORD v4[34]; // [rsp+20h] [rbp-128h] BYREF

  result = memset(&v4[8], 0, 0xD0uLL);
  v3 = *(_QWORD **)(a1 + 184);
  if ( v3[175] )
  {
    memset(v4, 0, 0x40uLL);
    v4[7] = *(_QWORD *)(a1 + 1312);
    LODWORD(v4[5]) = 1;
    v4[0] = 0x800400018LL;
    return (void *)sub_14092A070(v3, 1, (__int64)v4);
  }
  return result;
}
