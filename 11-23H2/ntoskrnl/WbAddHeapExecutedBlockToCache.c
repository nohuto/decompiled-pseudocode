/*
 * XREFs of WbAddHeapExecutedBlockToCache @ 0x140761B10
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x140762918 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F820 (KiCheckForKernelApcDelivery.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x140761C3C (WbAddHeapExecutedBlockToLRU.c)
 *     sub_140763028 @ 0x140763028 (sub_140763028.c)
 *     sub_140763150 @ 0x140763150 (sub_140763150.c)
 *     sub_140763D04 @ 0x140763D04 (sub_140763D04.c)
 */

__int64 __fastcall WbAddHeapExecutedBlockToCache(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v4; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  int v11; // r8d
  int v12; // ebx
  char v13; // bp
  struct _KTHREAD *v14; // rax
  bool v15; // zf
  int v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = (unsigned __int64 *)(a1 + 48);
  v17 = 0;
  v18 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire(a1 + 48, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v8, (__int64)v4);
  if ( v9 )
    *(_BYTE *)(v9 + 18) = 1;
  v10 = sub_140763150(a1, *(_QWORD *)(a2 + 48), &v18, &v17);
  v12 = v10;
  if ( v10 >= 0 )
  {
    if ( a3 )
      *a3 = v18;
  }
  else if ( v10 == -1073741198 )
  {
    v12 = sub_140763D04((int)a1 + 8, a2, v11, *(_QWORD *)(a2 + 48), 8, v17);
    if ( v12 >= 0 )
    {
      v12 = sub_140763028(a2);
      if ( v12 >= 0 )
      {
        if ( a3 )
          *a3 = 0LL;
        v12 = WbAddHeapExecutedBlockToLRU(a1, a2);
      }
    }
  }
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  v14 = KeGetCurrentThread();
  v15 = v14->SpecialApcDisable++ == -1;
  if ( v15 && ($C71981A45BEB2B45F82C232A7085991E *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
    KiCheckForKernelApcDelivery();
  return (unsigned int)v12;
}
