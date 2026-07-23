/*
 * XREFs of sub_1406A8E08 @ 0x1406A8E08
 * Callers:
 *     sub_140230C48 @ 0x140230C48 (sub_140230C48.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall sub_1406A8E08(int a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v2; // rsi
  bool v3; // zf

  CurrentThread = KeGetCurrentThread();
  v2 = *(_QWORD *)(*((_QWORD *)CurrentThread + 23) + 1368LL);
  if ( !a1 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C50628, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C50628);
    sub_1402AFC00((ULONG_PTR)&qword_140C50628);
    v3 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v3 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    return 1LL;
  }
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C50628, 0LL);
  if ( (*(_DWORD *)(v2 + 4) & 0x21) == 1 )
    return 1LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C50628, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C50628);
  sub_1402AFC00((ULONG_PTR)&qword_140C50628);
  v3 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v3 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  return 0LL;
}
