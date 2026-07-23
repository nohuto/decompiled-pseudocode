/*
 * XREFs of sub_140386410 @ 0x140386410
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402B2E40 @ 0x1402B2E40 (sub_1402B2E40.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

__int64 sub_140386410()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rdi
  unsigned __int8 v2; // bl
  __int64 v3; // rbp
  bool v4; // zf

  CurrentThread = KeGetCurrentThread();
  v1 = *((_QWORD *)CurrentThread + 23);
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C50628, 0LL);
  v1 += 1664LL;
  v2 = sub_1402CF4F0(v1);
  v3 = sub_1402B2E40(v1, 0x1Du);
  sub_1402B0CE0(v1, v2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C50628, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C50628);
  sub_1402AFC00((ULONG_PTR)&qword_140C50628);
  v4 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v4 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  return v3;
}
