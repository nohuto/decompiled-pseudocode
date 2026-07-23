/*
 * XREFs of sub_1402D3E44 @ 0x1402D3E44
 * Callers:
 *     sub_1402D3310 @ 0x1402D3310 (sub_1402D3310.c)
 *     sub_14074F4B0 @ 0x14074F4B0 (sub_14074F4B0.c)
 * Callees:
 *     sub_140232968 @ 0x140232968 (sub_140232968.c)
 *     IoSetIoCompletionEx3 @ 0x140257EE0 (IoSetIoCompletionEx3.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeCancelTimer2 @ 0x1402D3FB0 (KeCancelTimer2.c)
 *     sub_1402D56F4 @ 0x1402D56F4 (sub_1402D56F4.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402D3E44(char *Object)
{
  KSPIN_LOCK *v2; // rcx
  PVOID *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax
  char v6; // si
  unsigned __int64 OldIrql; // rbp
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)*((_QWORD *)Object + 2);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  v3 = (PVOID *)(Object + 72);
  v4 = 4LL;
  *((_DWORD *)Object + 102) = *((_DWORD *)Object + 102) & 0xFFFFFFF8 | 4;
  do
  {
    if ( *v3 )
    {
      ObfDereferenceObjectWithTag(*v3, 0x746C6644u);
      *v3 = 0LL;
    }
    ++v3;
    --v4;
  }
  while ( v4 );
  if ( (*((_DWORD *)Object + 102) & 0x200) != 0 )
    sub_1402D56F4(Object);
  if ( *((char **)Object + 74) == Object + 424
    && sub_140232968((volatile signed __int32 *)Object + 106, (__int64 *)Object + 70) )
  {
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  }
  *(_BYTE *)(*((_QWORD *)Object + 2) + 33LL) = 1;
  v5 = *((_QWORD *)Object + 2);
  *((_DWORD *)Object + 95) = 0;
  *((_DWORD *)Object + 94) = 0;
  if ( !*(_DWORD *)(v5 + 28) || *(_BYTE *)(v5 + 32) )
  {
    v6 = 0;
  }
  else
  {
    *(_BYTE *)(v5 + 32) = 1;
    v6 = 1;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v12;
        if ( v13 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  result = KeCancelTimer2(Object + 424, 0LL);
  if ( v6 )
    return IoSetIoCompletionEx3(
             *(_QWORD *)(*((_QWORD *)Object + 2) + 8LL),
             0LL,
             0LL,
             0LL,
             0LL,
             0,
             *(_QWORD *)(*((_QWORD *)Object + 2) + 16LL),
             0,
             0);
  return result;
}
