/*
 * XREFs of sub_1407E1B90 @ 0x1407E1B90
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x1407E3260 (WbGetHeapExecutedBlock.c)
 *     sub_1407E3B7C @ 0x1407E3B7C (sub_1407E3B7C.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x14029F350 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     WbFreeMemoryBlockRegion @ 0x1407E1CA4 (WbFreeMemoryBlockRegion.c)
 *     sub_1407E3440 @ 0x1407E3440 (sub_1407E3440.c)
 */

__int64 __fastcall sub_1407E1B90(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // esi
  signed __int64 *v5; // rbx
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rsi
  int v9; // edi
  struct _KTHREAD *v10; // rax
  bool v11; // zf
  char v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  --CurrentThread->SpecialApcDisable;
  v5 = (signed __int64 *)(a1 + 224);
  v6 = KeAbPreAcquire(a1 + 224, 0LL);
  if ( _InterlockedCompareExchange64(v5, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5, 0, v6, (__int64)v5);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  v14 = 0LL;
  v7 = sub_1407E3440(v4 + 184, a2, 8, (unsigned int)&v14, (__int64)&v13);
  v8 = 0LL;
  v9 = v7;
  if ( v7 >= 0 )
    v8 = v14;
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  v10 = KeGetCurrentThread();
  v11 = v10->SpecialApcDisable++ == -1;
  if ( v11 && ($CEA84C04E3712D858E5667A507841A2A *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    KiCheckForKernelApcDelivery();
  if ( v9 >= 0 )
    return (unsigned int)WbFreeMemoryBlockRegion(v8, a2);
  return (unsigned int)v9;
}
