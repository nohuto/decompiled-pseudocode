/*
 * XREFs of sub_14080B708 @ 0x14080B708
 * Callers:
 *     sub_1403A0800 @ 0x1403A0800 (sub_1403A0800.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_14080B708(_QWORD *a1)
{
  void *Pool2; // rax
  void *v3; // rbx

  *a1 = 0LL;
  sub_1402D66A8((ULONG_PTR)&qword_140C21D20);
  Pool2 = (void *)ExAllocatePool2(256LL, 4440LL, 1734960208LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, &qword_140C20BC0, 0x1158uLL);
    *a1 = v3;
  }
  sub_1402935D0((ULONG_PTR)&qword_140C21D20);
}
