/*
 * XREFs of sub_1407619FC @ 0x1407619FC
 * Callers:
 *     sub_140762AA4 @ 0x140762AA4 (sub_140762AA4.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BD860 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD040 (ExfAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F820 (KiCheckForKernelApcDelivery.c)
 *     sub_1407638C0 @ 0x1407638C0 (sub_1407638C0.c)
 *     WbFreeMemoryBlockRegion @ 0x14076456C (WbFreeMemoryBlockRegion.c)
 */

__int64 __fastcall sub_1407619FC(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v3; // rbx
  int v5; // esi
  unsigned __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rsi
  int v9; // edi
  struct _KTHREAD *v10; // rax
  bool v11; // zf
  char v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = (signed __int64 *)(a1 + 224);
  v5 = a1;
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire(a1 + 224, 0LL);
  if ( _InterlockedCompareExchange64(v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, 0LL, v6, (__int64)v3);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  v14 = 0LL;
  v7 = sub_1407638C0(v5 + 184, a2, 8, (unsigned int)&v14, (__int64)&v13);
  v8 = 0LL;
  v9 = v7;
  if ( v7 >= 0 )
    v8 = v14;
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  v10 = KeGetCurrentThread();
  v11 = v10->SpecialApcDisable++ == -1;
  if ( v11 && ($C71981A45BEB2B45F82C232A7085991E *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    KiCheckForKernelApcDelivery();
  if ( v9 >= 0 )
    return (unsigned int)WbFreeMemoryBlockRegion(v8, a2);
  return (unsigned int)v9;
}
