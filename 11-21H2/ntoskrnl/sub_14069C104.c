/*
 * XREFs of sub_14069C104 @ 0x14069C104
 * Callers:
 *     sub_1407E0F30 @ 0x1407E0F30 (sub_1407E0F30.c)
 *     sub_140847028 @ 0x140847028 (sub_140847028.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14069C9C0 @ 0x14069C9C0 (sub_14069C9C0.c)
 */

void __fastcall sub_14069C104(__int64 a1)
{
  __int64 ProcessServerSilo; // rax
  char *v3; // rax
  struct _KTHREAD *CurrentThread; // rdx
  volatile signed __int64 *v5; // rdi
  __int64 v6; // rbx
  char v7; // bp
  struct _KTHREAD *v8; // rax
  bool v9; // zf

  if ( *(_QWORD *)(a1 + 1416) )
  {
    ProcessServerSilo = PsGetProcessServerSilo(a1);
    v3 = (char *)sub_140204738(ProcessServerSilo);
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 243);
    v5 = (volatile signed __int64 *)(v3 + 120);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v3 + 120), 0LL);
    v6 = _InterlockedExchange64((volatile __int64 *)(a1 + 1416), 0LL);
    v7 = _InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
      ExfTryToWakePushLock(v5);
    sub_1402AFC00((ULONG_PTR)v5);
    v8 = KeGetCurrentThread();
    v9 = (*((_WORD *)v8 + 243))++ == 0xFFFF;
    if ( v9 && *((struct _KTHREAD **)v8 + 19) != (struct _KTHREAD *)((char *)v8 + 152) )
      KiCheckForKernelApcDelivery();
    if ( v6 )
      sub_14069C9C0((PVOID)(v6 & 0xFFFFFFFFFFFFFFF0uLL));
  }
}
