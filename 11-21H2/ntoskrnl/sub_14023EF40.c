/*
 * XREFs of sub_14023EF40 @ 0x14023EF40
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402F09D8 @ 0x1402F09D8 (sub_1402F09D8.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall sub_14023EF40(void *a1)
{
  NTSTATUS result; // eax
  int v2; // ebx
  PVOID v3; // rsi
  KSPIN_LOCK *v4; // r14
  KIRQL v5; // al
  KSPIN_LOCK *v6; // r15
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r10
  __int64 v17; // r9
  int v18; // eax
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  __int64 v21; // r9
  int v22; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  PVOID Object; // [rsp+90h] [rbp+40h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 1u, ObjectType, *((_BYTE *)KeGetCurrentThread() + 562), &Object, 0LL);
  v2 = result;
  if ( result < 0 )
    return result;
  v3 = Object;
  v4 = (KSPIN_LOCK *)((char *)Object + 96);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 12);
  v6 = (KSPIN_LOCK *)*((_QWORD *)v3 + 11);
  v7 = v5;
  if ( v6 )
    ObfReferenceObjectWithTag(*((PVOID *)v3 + 11), 0x746C6644u);
  KeReleaseSpinLockFromDpcLevel(v4);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = *((_QWORD *)CurrentPrcb + 4375);
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= v13;
        if ( v14 )
          sub_140418E4C(CurrentPrcb);
        v3 = Object;
      }
    }
  }
  __writecr8(v7);
  if ( !v6 )
    return -1073741536;
  KeAcquireInStackQueuedSpinLock(v6 + 8, &LockHandle);
  v8 = KeAcquireSpinLockRaiseToDpc(v4);
  if ( !*((_BYTE *)v3 + 104) )
  {
    v2 = -1073741536;
LABEL_13:
    KeReleaseSpinLockFromDpcLevel(v4);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v15 = KeGetCurrentIrql();
        if ( v15 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v15 >= 2u )
        {
          v16 = KeGetCurrentPrcb();
          v17 = *((_QWORD *)v16 + 4375);
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v14 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
          *(_DWORD *)(v17 + 20) &= v18;
          if ( v14 )
            sub_140418E4C(v16);
        }
      }
    }
    __writecr8(v8);
    goto LABEL_8;
  }
  if ( !(unsigned __int8)sub_1402F09D8(Object) )
  {
    if ( *((_BYTE *)v3 + 104) )
      v2 = 259;
    goto LABEL_13;
  }
LABEL_8:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && LockHandle.OldIrql <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = *((_QWORD *)v20 + 4375);
        v22 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v14 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
        *(_DWORD *)(v21 + 20) &= v22;
        if ( v14 )
          sub_140418E4C(v20);
      }
    }
  }
  __writecr8(OldIrql);
  ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return v2;
}
