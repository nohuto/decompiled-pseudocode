/*
 * XREFs of sub_140A97FF4 @ 0x140A97FF4
 * Callers:
 *     sub_140A8CA78 @ 0x140A8CA78 (sub_140A8CA78.c)
 * Callees:
 *     sub_140601864 @ 0x140601864 (sub_140601864.c)
 *     sub_1406018DC @ 0x1406018DC (sub_1406018DC.c)
 *     sub_140A994C4 @ 0x140A994C4 (sub_140A994C4.c)
 *     sub_140A994FC @ 0x140A994FC (sub_140A994FC.c)
 *     sub_140A9A000 @ 0x140A9A000 (sub_140A9A000.c)
 */

void __fastcall sub_140A97FF4(int a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 v2; // di
  __int64 v3; // rax

  if ( a1 && dword_140D5751C && (unsigned int)dword_140D06884 <= 4 )
  {
    CurrentThread = KeGetCurrentThread();
    v2 = sub_1406018DC();
    sub_140A994C4(0LL);
    v3 = sub_140A9A000(CurrentThread);
    if ( v3 )
      _InterlockedDecrement((volatile signed __int32 *)(v3 + 44));
    sub_140A994FC(0LL);
    sub_140601864(v2);
  }
}
