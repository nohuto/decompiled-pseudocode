/*
 * XREFs of sub_1406B96E8 @ 0x1406B96E8
 * Callers:
 *     sub_1406B94DC @ 0x1406B94DC (sub_1406B94DC.c)
 *     sub_140734160 @ 0x140734160 (sub_140734160.c)
 *     sub_1407A3190 @ 0x1407A3190 (sub_1407A3190.c)
 *     sub_140983EF0 @ 0x140983EF0 (sub_140983EF0.c)
 * Callees:
 *     sub_140276A48 @ 0x140276A48 (sub_140276A48.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

void __fastcall sub_1406B96E8(__int64 a1)
{
  int v1; // eax
  __int64 v3; // r14
  __int64 v4; // r15
  char *v5; // rax
  struct _KTHREAD *CurrentThread; // rcx
  char *v7; // rdi
  volatile signed __int64 *v8; // rsi
  int v9; // r13d
  void *v10; // r12
  struct _KTHREAD *v11; // rax
  bool v12; // zf

  v1 = *(_DWORD *)(a1 + 24);
  if ( v1 )
  {
    v3 = (unsigned int)(v1 - 1);
    v4 = *(_QWORD *)(*(_QWORD *)(a1 - 48 - byte_140C25440[*(_BYTE *)(a1 - 48 + 26) & 3]) + 304LL);
    if ( v4 )
    {
      v5 = (char *)sub_140347DB0();
      CurrentThread = KeGetCurrentThread();
      v7 = v5;
      --*((_WORD *)CurrentThread + 243);
      v8 = (volatile signed __int64 *)(v5 + 120);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v5 + 120), 0LL);
      v9 = ~(1 << v3);
      *(_DWORD *)(v4 + 256) &= v9;
      *(_BYTE *)(v3 + v4 + 260) = 0;
      v10 = (void *)sub_140276A48((volatile __int64 *)(v4 + 8 * (v3 + 4)), 0LL);
      if ( v4 == (*(_QWORD *)v7 & 0xFFFFFFFFFFFFFFF0uLL) )
        *((_DWORD *)v7 + 2) &= v9;
      else
        --*(_DWORD *)&v7[4 * v3 + 12];
      if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v8);
      sub_1402AFC00((ULONG_PTR)v8);
      v11 = KeGetCurrentThread();
      v12 = (*((_WORD *)v11 + 243))++ == 0xFFFF;
      if ( v12 && *((struct _KTHREAD **)v11 + 19) != (struct _KTHREAD *)((char *)v11 + 152) )
        KiCheckForKernelApcDelivery();
      if ( v10 )
        ObDereferenceObjectDeferDelete(v10);
    }
    *(_DWORD *)(a1 + 24) = 0;
  }
}
