/*
 * XREFs of sub_140750EC4 @ 0x140750EC4
 * Callers:
 *     sub_14024E2C8 @ 0x14024E2C8 (sub_14024E2C8.c)
 *     sub_1403699FC @ 0x1403699FC (sub_1403699FC.c)
 *     sub_140397424 @ 0x140397424 (sub_140397424.c)
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_1407ED930 @ 0x1407ED930 (sub_1407ED930.c)
 *     sub_1408071C4 @ 0x1408071C4 (sub_1408071C4.c)
 *     sub_14081B500 @ 0x14081B500 (sub_14081B500.c)
 *     sub_14081CC60 @ 0x14081CC60 (sub_14081CC60.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall sub_140750EC4(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&xmmword_140C22B70, 0LL);
  *a1 = xmmword_140C22B80;
  a1[1] = xmmword_140C22B90;
  sub_1402935D0((ULONG_PTR)&xmmword_140C22B70);
}
