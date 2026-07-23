/*
 * XREFs of ObIsDosDeviceLocallyMapped @ 0x14080F870
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall ObIsDosDeviceLocallyMapped(int a1, bool *a2)
{
  __int64 v2; // rsi
  char *v4; // rax
  struct _KTHREAD *CurrentThread; // rcx
  char *v6; // rbx
  signed __int64 *v7; // rdi
  struct _KTHREAD *v8; // rax

  v2 = (unsigned int)(a1 - 1);
  if ( (unsigned int)v2 > 0x19 )
    return 3221225485LL;
  v4 = (char *)sub_140347DB0();
  CurrentThread = KeGetCurrentThread();
  v6 = v4;
  --*((_WORD *)CurrentThread + 243);
  v7 = (signed __int64 *)(v4 + 120);
  ExAcquirePushLockSharedEx((ULONG_PTR)(v4 + 120), 0LL);
  *a2 = *(_DWORD *)&v6[4 * v2 + 12] != 0;
  if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v7);
  sub_1402AFC00((ULONG_PTR)v7);
  v8 = KeGetCurrentThread();
  if ( (*((_WORD *)v8 + 243))++ == 0xFFFF && *((struct _KTHREAD **)v8 + 19) != (struct _KTHREAD *)((char *)v8 + 152) )
    KiCheckForKernelApcDelivery();
  return 0LL;
}
