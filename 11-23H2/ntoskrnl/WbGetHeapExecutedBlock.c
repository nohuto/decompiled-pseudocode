/*
 * XREFs of WbGetHeapExecutedBlock @ 0x140762B08
 * Callers:
 *     WbHeapExecuteCall @ 0x140762E00 (WbHeapExecuteCall.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1407619C0 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbAddHeapExecutedBlockToCache @ 0x140761D00 (WbAddHeapExecutedBlockToCache.c)
 *     sub_140762330 @ 0x140762330 (sub_140762330.c)
 *     sub_140762C94 @ 0x140762C94 (sub_140762C94.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x140762CFC (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     sub_140763340 @ 0x140763340 (sub_140763340.c)
 */

__int64 __fastcall WbGetHeapExecutedBlock(__int64 a1, __int64 a2, __int64 *a3)
{
  int v5; // edx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v8; // rdi
  int v9; // edi
  struct _KTHREAD *v10; // rax
  bool v11; // zf
  __int64 v12; // rbx
  int v14; // eax
  __int64 v15; // r14
  __int64 v16; // [rsp+70h] [rbp+40h] BYREF
  __int64 v17; // [rsp+88h] [rbp+58h] BYREF

  v5 = *(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 56);
  v16 = 0LL;
  v17 = 0LL;
  WbReleaseLeastRecentlyUsedHeapExecutedBlocks((unsigned __int64 *)a1, v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire(a1 + 48, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 48), 0LL, v8, a1 + 48);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  v9 = sub_140763340(a1, *(_QWORD *)(a2 + 272), &v16, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 48));
  KeAbPostRelease(a1 + 48);
  v10 = KeGetCurrentThread();
  v11 = v10->SpecialApcDisable++ == -1;
  if ( v11 && ($C71981A45BEB2B45F82C232A7085991E *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    KiCheckForKernelApcDelivery();
  if ( v9 == -1073741198 )
  {
    v14 = sub_140762330(a1, a2, (void **)&v16);
    v12 = v16;
    v9 = v14;
    if ( v14 < 0 )
      goto LABEL_14;
    v9 = WbAddHeapExecutedBlockToCache(a1, v16, &v17);
    if ( v9 < 0 )
      goto LABEL_14;
    v15 = v17;
    if ( v17 )
    {
      sub_140762C94(a1, v12);
      v12 = v15;
      v17 = 0LL;
    }
  }
  else
  {
    v12 = v16;
    if ( v9 < 0 )
      goto LABEL_14;
  }
  WbMoveHeapExecutedBlockToBackOfLRU(a1, v12);
  if ( a3 )
  {
    *a3 = v12;
    v12 = 0LL;
  }
LABEL_14:
  sub_140762C94(a1, v12);
  sub_140762C94(a1, v17);
  return (unsigned int)v9;
}
