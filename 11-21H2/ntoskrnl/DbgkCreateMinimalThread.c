/*
 * XREFs of DbgkCreateMinimalThread @ 0x14092A888
 * Callers:
 *     PspUserThreadStartup @ 0x140702420 (PspUserThreadStartup.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     DbgkpSendApiMessage @ 0x14092A070 (DbgkpSendApiMessage.c)
 */

void *__fastcall DbgkCreateMinimalThread(__int64 a1)
{
  void *result; // rax
  _KPROCESS *v3; // rdi
  _QWORD v4[34]; // [rsp+20h] [rbp-128h] BYREF

  result = memset(&v4[8], 0, 0xD0uLL);
  v3 = *(_KPROCESS **)(a1 + 184);
  if ( v3[1].Affinity.StaticBitmap[29] )
  {
    memset(v4, 0, 0x40uLL);
    v4[7] = *(_QWORD *)(a1 + 1312);
    LODWORD(v4[5]) = 1;
    v4[0] = 0x800400018LL;
    return (void *)DbgkpSendApiMessage(v3, 1, (__int64)v4);
  }
  return result;
}
