/*
 * XREFs of sub_1407FF3EC @ 0x1407FF3EC
 * Callers:
 *     sub_1407FE8C0 @ 0x1407FE8C0 (sub_1407FE8C0.c)
 *     sub_1407FF3B4 @ 0x1407FF3B4 (sub_1407FF3B4.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 */

char sub_1407FF3EC()
{
  struct _KTHREAD *CurrentThread; // rax
  char v1; // bl

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C1F620, 0LL);
  v1 = byte_140D069A6;
  sub_1402935D0((ULONG_PTR)&qword_140C1F620);
  return v1;
}
