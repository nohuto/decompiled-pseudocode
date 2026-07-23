/*
 * XREFs of WbHeapExecutionUnloadModule @ 0x1407E0988
 * Callers:
 *     WbProcessModuleUnload @ 0x1407E078C (WbProcessModuleUnload.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     sub_140761B68 @ 0x140761B68 (sub_140761B68.c)
 *     sub_140762C94 @ 0x140762C94 (sub_140762C94.c)
 */

__int64 __fastcall WbHeapExecutionUnloadModule(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rbx
  int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int i; // edi
  __int64 v10; // r14
  char v11; // si
  struct _KTHREAD *v12; // rax
  bool v13; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64 *)(a1 + 48);
  --CurrentThread->SpecialApcDisable;
  v6 = 0;
  v7 = KeAbPreAcquire(a1 + 48, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v7, (__int64)v3);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  for ( i = 0; i < *(_DWORD *)(a1 + 12); ++i )
  {
    v10 = *(_QWORD *)(*(_DWORD *)(a1 + 8) * i + *(_QWORD *)(a1 + 24));
    if ( v10 )
    {
      if ( *(_QWORD *)(v10 + 64) == a2 )
      {
        v6 = sub_140761B68(a1 + 8, 0, 0, i, 0LL);
        if ( v6 >= 0 )
        {
          sub_140762C94(a1, v10);
          --i;
        }
      }
    }
  }
  v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  v12 = KeGetCurrentThread();
  v13 = v12->SpecialApcDisable++ == -1;
  if ( v13 && ($C71981A45BEB2B45F82C232A7085991E *)v12->ApcState.ApcListHead[0].Flink != &v12->152 )
    KiCheckForKernelApcDelivery();
  return (unsigned int)v6;
}
