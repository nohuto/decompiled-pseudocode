/*
 * XREFs of IoSetDiskIoAttributionFromThread @ 0x1402A7EC0
 * Callers:
 *     IoSynchronousPageWriteEx @ 0x140251040 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x1402A6AA0 (IoPageReadEx.c)
 *     IoAsynchronousPageWrite @ 0x140369BAC (IoAsynchronousPageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140371D90 (IopBuildAsynchronousFsdRequest.c)
 *     IoSetIoAttributionIrp @ 0x1405577B0 (IoSetIoAttributionIrp.c)
 *     IopSynchronousServiceTail @ 0x1406E3EC0 (IopSynchronousServiceTail.c)
 * Callees:
 *     IopSetDiskIoAttributionFromProcess @ 0x140290584 (IopSetDiskIoAttributionFromProcess.c)
 *     IopSetDiskIoAttributionExtension @ 0x1402905E0 (IopSetDiskIoAttributionExtension.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7E90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8F70 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockShared @ 0x1403148B0 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IoSetDiskIoAttributionFromThread(__int64 a1, struct _KTHREAD *a2)
{
  _QWORD *Object; // rsi
  unsigned int v3; // edi
  int v5; // ebp
  __int64 Process; // rdx
  _KPROCESS *v8; // rbx
  __int64 v9; // r12
  KIRQL v11; // al
  unsigned __int64 v12; // rbx
  KIRQL v13; // r9
  int v14; // eax
  KIRQL v15; // al
  unsigned __int64 v16; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  unsigned __int8 v22; // cl
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r8
  int v25; // eax
  KIRQL v26; // [rsp+58h] [rbp+10h]

  Object = a2[1].WaitBlock[1].Object;
  v3 = 0;
  v5 = 0;
  if ( !Object )
    goto LABEL_12;
  if ( a2 == KeGetCurrentThread() )
    goto LABEL_11;
  v15 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
  Object = a2[1].WaitBlock[1].Object;
  v16 = v15;
  if ( Object )
  {
    ObfReferenceObjectWithTag(a2[1].WaitBlock[1].Object, 0x746C6644u);
    v5 = 1;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&PspThreadWorkOnBehalfLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v16 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
      v21 = (v20 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v20;
      if ( v21 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v16);
  if ( Object )
  {
LABEL_11:
    v8 = (_KPROCESS *)Object[68];
  }
  else
  {
LABEL_12:
    if ( a2 == KeGetCurrentThread() )
    {
      Process = (__int64)a2->ApcState.Process;
      if ( (_KPROCESS *)Process != a2->Process && (int)IopSetDiskIoAttributionFromProcess(a1, Process) >= 0 )
        goto LABEL_7;
    }
    v8 = a2->Process;
  }
  v9 = 0LL;
  if ( !v8[2].Affinity.StaticBitmap[18] )
  {
    v3 = -1073741275;
    goto LABEL_7;
  }
  v11 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
  v12 = v8[2].Affinity.StaticBitmap[18];
  v26 = v11;
  if ( v12 )
    v9 = *(_QWORD *)(v12 + 24);
  ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
  if ( !(_DWORD)KiIrqlFlags )
    goto LABEL_17;
  v22 = KeGetCurrentIrql();
  if ( ((unsigned __int8)KiIrqlFlags & 1) == 0 || v22 > 0xFu )
    goto LABEL_17;
  v13 = v26;
  if ( v26 <= 0xFu && v22 >= 2u )
  {
    v23 = KeGetCurrentPrcb();
    v24 = v23->SchedulerAssist;
    v25 = ~(unsigned __int16)(-1LL << (v26 + 1));
    v21 = (v25 & v24[5]) == 0;
    v24[5] &= v25;
    if ( v21 )
    {
      KiRemoveSystemWorkPriorityKick(v23);
LABEL_17:
      v13 = v26;
    }
  }
  __writecr8(v13);
  if ( v12 )
  {
    v14 = IopSetDiskIoAttributionExtension(a1, v9, (__int64)KeGetCurrentThread(), 0);
    if ( v14 < 0 )
      v3 = v14;
  }
  else
  {
    v3 = -1073741275;
  }
LABEL_7:
  if ( v5 )
    ObDereferenceObjectDeferDeleteWithTag(Object, 0x746C6644u);
  return v3;
}
