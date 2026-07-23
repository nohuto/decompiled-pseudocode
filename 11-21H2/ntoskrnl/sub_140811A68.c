/*
 * XREFs of sub_140811A68 @ 0x140811A68
 * Callers:
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 *     sub_14081BA34 @ 0x14081BA34 (sub_14081BA34.c)
 *     sub_140997C84 @ 0x140997C84 (sub_140997C84.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall sub_140811A68(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&xmmword_140C22B70, 0LL);
  *a1 = xmmword_140C22BA0;
  sub_1402935D0((ULONG_PTR)&xmmword_140C22B70);
}
