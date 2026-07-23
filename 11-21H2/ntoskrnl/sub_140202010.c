/*
 * XREFs of sub_140202010 @ 0x140202010
 * Callers:
 *     sub_140281620 @ 0x140281620 (sub_140281620.c)
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_1406F7D78 @ 0x1406F7D78 (sub_1406F7D78.c)
 *     sub_1406F8C0C @ 0x1406F8C0C (sub_1406F8C0C.c)
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 * Callees:
 *     sub_140217454 @ 0x140217454 (sub_140217454.c)
 *     sub_140281C44 @ 0x140281C44 (sub_140281C44.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_14030BA20 @ 0x14030BA20 (sub_14030BA20.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall sub_140202010(__int64 a1)
{
  void *result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD v4[10]; // [rsp+20h] [rbp-50h] BYREF

  result = memset(v4, 0, 0x48uLL);
  if ( *(_QWORD *)(a1 + 16) != -1LL )
  {
    CurrentThread = KeGetCurrentThread();
    HIDWORD(v4[1]) = 0;
    v4[3] = &v4[2];
    LODWORD(v4[8]) = 1;
    v4[2] = &v4[2];
    LOWORD(v4[1]) = 263;
    BYTE2(v4[1]) = 6;
    sub_14030BA20(a1, v4);
    sub_140281C44(CurrentThread, a1);
    sub_140217454(&v4[1], 18LL);
    --*((_WORD *)CurrentThread + 243);
    result = (void *)ExAcquirePushLockExclusiveEx(a1 + 40, 0LL);
    *((_BYTE *)CurrentThread + 1384) |= 0x80u;
  }
  return result;
}
