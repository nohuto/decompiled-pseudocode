/*
 * XREFs of WbGetWarbirdThread @ 0x140763394
 * Callers:
 *     sub_140762A5C @ 0x140762A5C (sub_140762A5C.c)
 *     WbHeapExecuteCall @ 0x140762E00 (WbHeapExecuteCall.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     sub_1407635D4 @ 0x1407635D4 (sub_1407635D4.c)
 *     sub_140763AB0 @ 0x140763AB0 (sub_140763AB0.c)
 *     sub_140763EF4 @ 0x140763EF4 (sub_140763EF4.c)
 *     sub_1407E9B8C @ 0x1407E9B8C (sub_1407E9B8C.c)
 */

__int64 __fastcall WbGetWarbirdThread(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r14
  signed __int64 *v4; // rdi
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rsi
  int v9; // esi
  _QWORD *v10; // rcx
  struct _KTHREAD *v11; // rax
  bool v12; // zf
  struct _KTHREAD *v14; // rax
  __int64 v15; // rax
  int v16; // r8d
  __int64 v17; // rsi
  _QWORD *v18; // r14
  char v19; // bp
  struct _KTHREAD *v20; // rax
  __int64 v21; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v22; // [rsp+78h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = (signed __int64 *)(a1 + 128);
  v7 = 0LL;
  v22 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire(a1 + 128, 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0LL, v8, (__int64)v4);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  v21 = 0LL;
  v9 = sub_140763AB0((int)a1 + 88, (_DWORD)CurrentThread, 8, (unsigned int)&v21, 0LL);
  if ( v9 >= 0 )
  {
    v10 = (_QWORD *)v21;
    if ( v21 )
    {
      _InterlockedAdd64((volatile signed __int64 *)(v21 + 8), 1uLL);
      v10 = (_QWORD *)v21;
    }
    v22 = v10;
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  v11 = KeGetCurrentThread();
  v12 = v11->SpecialApcDisable++ == -1;
  if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
    KiCheckForKernelApcDelivery();
  if ( v9 == -1073741198 )
  {
    v9 = sub_1407E9B8C(a1, CurrentThread, &v22);
    if ( v9 < 0 )
    {
LABEL_32:
      v7 = v22;
      goto LABEL_18;
    }
    v14 = KeGetCurrentThread();
    --v14->SpecialApcDisable;
    v15 = KeAbPreAcquire((__int64)v4, 0LL);
    v17 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v4, v15, (__int64)v4);
    if ( v17 )
      *(_BYTE *)(v17 + 18) = 1;
    v18 = v22;
    v9 = sub_140763EF4((int)a1 + 88, (_DWORD)v22, v16, *v22, 8, -1);
    if ( v9 >= 0 )
      _InterlockedAdd64(v18 + 1, 1uLL);
    v19 = _InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v19 & 2) != 0 && (v19 & 4) == 0 )
      ExfTryToWakePushLock(v4);
    KeAbPostRelease((ULONG_PTR)v4);
    v20 = KeGetCurrentThread();
    v12 = v20->SpecialApcDisable++ == -1;
    if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v9 < 0 || !a3 )
    goto LABEL_32;
  *a3 = v22;
LABEL_18:
  sub_1407635D4(a1, v7);
  return (unsigned int)v9;
}
