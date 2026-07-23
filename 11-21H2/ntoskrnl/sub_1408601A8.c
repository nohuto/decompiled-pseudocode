/*
 * XREFs of sub_1408601A8 @ 0x1408601A8
 * Callers:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 * Callees:
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140550458 @ 0x140550458 (sub_140550458.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1408601A8(__int64 a1)
{
  unsigned __int64 v1; // rax
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR v3; // r14
  __int64 v4; // rdi
  volatile signed __int64 *v5; // rbp
  __int64 v6; // rcx
  void *v7; // rdi
  bool v8; // zf
  __int64 v9; // rax

  if ( *(_QWORD *)(a1 + 112) )
  {
    v1 = sub_140287970(*(_QWORD *)(a1 + 112));
    CurrentThread = KeGetCurrentThread();
    v3 = v1;
    v4 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 32LL);
    --*((_WORD *)CurrentThread + 243);
    v5 = (volatile signed __int64 *)(v4 + 24);
    ExAcquirePushLockExclusiveEx(v4 + 24, 0LL);
    v6 = *(_QWORD *)(v4 + 88);
    v7 = *(void **)(v6 + 16);
    *(_QWORD *)(v6 + 16) = 0LL;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5);
    sub_1402AFC00((ULONG_PTR)v5);
    v8 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v8 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    if ( (dword_140D06880 & 0x8000) != 0 )
      sub_140550458(*(_QWORD *)(*(_QWORD *)(v3 + 96) + 56LL));
    sub_140336B30(v3, qword_140C4F428, 0x10u, 0xFFFFFFFF);
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 320);
    v7 = *(void **)(v9 + 16);
    *(_QWORD *)(v9 + 16) = 0LL;
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
}
