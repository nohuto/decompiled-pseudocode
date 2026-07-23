/*
 * XREFs of IopCopyCompleteReadIrp @ 0x14028C660
 * Callers:
 *     <none>
 * Callees:
 *     KeAreAllApcsDisabled @ 0x140215000 (KeAreAllApcsDisabled.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopCopyCompleteReadRequest @ 0x14028C860 (IopCopyCompleteReadRequest.c)
 *     IopDropIrp @ 0x14028D058 (IopDropIrp.c)
 *     IopUnlockAndFreeMdl @ 0x14028D1BC (IopUnlockAndFreeMdl.c)
 *     IopFreeIrpExtension @ 0x1402900A8 (IopFreeIrpExtension.c)
 *     KeAcquireQueuedSpinLock @ 0x1402A09F0 (KeAcquireQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     KeInitializeApc @ 0x1402BE960 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1402CC8D0 (KeInsertQueueApc.c)
 *     KeReleaseQueuedSpinLock @ 0x140302AA0 (KeReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall IopCopyCompleteReadIrp(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  char v4; // di
  unsigned int v5; // r15d
  int v6; // eax
  struct _MDL *v7; // rcx
  char v8; // bl
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // rsi
  unsigned __int64 v12; // r15
  unsigned __int8 v13; // bl
  _DWORD *v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  int v25; // eax
  KIRQL v26; // al
  __int64 v27; // rcx
  KIRQL v28; // r15
  __int64 *v29; // rdx
  __int64 **v30; // rax
  unsigned int v31; // ebp
  unsigned int v32; // r8d
  __int64 v33; // rcx
  char v34; // [rsp+40h] [rbp-58h]
  int v35; // [rsp+44h] [rbp-54h]
  __int64 v37; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v38; // [rsp+B0h] [rbp+18h]
  char v39; // [rsp+B8h] [rbp+20h]

  v38 = a3;
  v37 = a2;
  v3 = *a1;
  v4 = 0;
  v5 = a3;
  v6 = *(_DWORD *)(*a1 + 48);
  v7 = *(struct _MDL **)(*a1 + 8);
  v8 = *(_BYTE *)(v3 + 68);
  v9 = *(unsigned int *)(v3 + 56);
  v10 = *(_QWORD *)(v3 + 152);
  v11 = *(_QWORD *)(v3 + 112);
  v35 = v6;
  v34 = *(_BYTE *)(v3 + 65);
  v39 = v8;
  if ( v7 )
  {
    IopUnlockAndFreeMdl(v7);
    *(_QWORD *)(v3 + 8) = 0LL;
  }
  if ( v10 )
  {
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 1496));
    KxReleaseSpinLock((volatile signed __int64 *)(v10 + 1496));
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v12 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v22 = (v21 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v12);
    v8 = v39;
    v5 = v38;
  }
  if ( (struct _KTHREAD *)v10 != KeGetCurrentThread()
    || KeAreAllApcsDisabled()
    || KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    if ( !v8 )
    {
      KeInitializeApc(
        v3 + 120,
        v10,
        *(char *)(v3 + 70),
        (unsigned int)IopCopyCompleteReadRequest,
        (__int64)IopCopyAbortCopyReadRequest,
        0LL,
        0,
        0LL);
      KeInsertQueueApc(v3 + 120, v37, 0LL, v5);
      goto LABEL_12;
    }
  }
  else if ( !v8 )
  {
    v13 = KeGetCurrentIrql();
    __writecr8(1uLL);
    IopCopyCompleteReadRequest(v3 + 120, 0LL, 0LL, &v37, 0LL);
    if ( (_DWORD)KiIrqlFlags )
    {
      v23 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v23 <= 0xFu && v13 <= 0xFu && v23 >= 2u )
      {
        v24 = KeGetCurrentPrcb();
        v14 = v24->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << (v13 + 1));
        v22 = (v25 & v14[5]) == 0;
        v14[5] &= v25;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(v24);
      }
    }
    __writecr8(v13);
    goto LABEL_12;
  }
  v26 = KeAcquireQueuedSpinLock(0xBuLL);
  v27 = IopDeadIrps;
  v28 = v26;
  if ( (__int64 *)IopDeadIrps != &IopDeadIrps )
  {
    while ( 1 )
    {
      v29 = *(__int64 **)v27;
      if ( v27 - 32 == v3 )
        break;
      v27 = *(_QWORD *)v27;
      if ( v29 == &IopDeadIrps )
        goto LABEL_36;
    }
    v30 = *(__int64 ***)(v27 + 8);
    if ( v29[1] != v27 || *v30 != (__int64 *)v27 )
      __fastfail(3u);
    *v30 = v29;
    v29[1] = (__int64)v30;
    *(_QWORD *)(v27 + 8) = v27;
    *(_QWORD *)v27 = v27;
    ObfDereferenceObjectWithTag((PVOID)v10, 0x746C6644u);
    goto LABEL_41;
  }
LABEL_36:
  if ( !v10 )
  {
LABEL_41:
    KeReleaseQueuedSpinLock(0xBuLL, v28);
    IopDropIrp((PIRP)v3);
    goto LABEL_13;
  }
  KeInitializeApc(
    v3 + 120,
    v10,
    *(char *)(v3 + 70),
    (unsigned int)IopCopyCompleteReadRequest,
    (__int64)IopCopyAbortCopyReadRequest,
    0LL,
    0,
    0LL);
  KeInsertQueueApc(v3 + 120, v37, 0LL, v38);
  KeReleaseQueuedSpinLock(0xBuLL, v28);
LABEL_12:
  v8 = v39;
LABEL_13:
  if ( v35 < 0 || v8 )
  {
    LOBYTE(v14) = 1;
    *(_DWORD *)(*(_QWORD *)(v11 - 40) + 48LL) = v35;
    *(_BYTE *)(*(_QWORD *)(v11 - 40) + 65LL) = v34;
    v33 = *(_QWORD *)(v11 - 40);
    *a1 = v33;
    IopFreeIrpExtension(v33, 9LL, v14);
  }
  else
  {
    v15 = *(_QWORD *)(v11 - 40);
    v16 = *(_QWORD *)(v15 + 184);
    if ( (*(_DWORD *)(*(_QWORD *)(v11 - 24) + 80LL) & 8) != 0 )
    {
      v31 = *(_DWORD *)(v16 - 64);
      v32 = *(unsigned __int16 *)(*(_QWORD *)(v11 - 32) + 304LL);
      if ( !(_WORD)v32 )
        v32 = 4096;
      if ( v32 + v31 - 1 - (v32 + v31 - 1) % v32 < v31 )
        v31 = v32 + v31 - 1 - (v32 + v31 - 1) % v32;
      if ( (unsigned int)v9 < v31 )
        memset((void *)(*(_QWORD *)(v15 + 112) + v9), 0, v31 - (unsigned int)v9);
      *(_DWORD *)(v16 - 64) = v31;
    }
    else
    {
      *(_DWORD *)(v16 - 64) = v9;
    }
    *(_QWORD *)(v11 - 48) = v11 - 40;
    *(_QWORD *)(v11 - 56) = IopQueueCopyWrite;
    *(_QWORD *)(v11 - 72) = 0LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v11 - 72), CriticalWorkQueue);
    return 1;
  }
  return v4;
}
