/*
 * XREFs of NtAssociateWaitCompletionPacket @ 0x140250510
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     ObGetAssociatedWaitObject @ 0x1402507FC (ObGetAssociatedWaitObject.c)
 *     KeRegisterObjectNotification @ 0x140250890 (KeRegisterObjectNotification.c)
 *     KxAcquireSpinLock @ 0x140251490 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtAssociateWaitCompletionPacket(
        HANDLE WaitCompletionPacketHandle,
        HANDLE IoCompletionHandle,
        HANDLE TargetObjectHandle,
        PVOID KeyContext,
        PVOID ApcContext,
        NTSTATUS IoStatus,
        ULONG_PTR IoStatusInformation,
        PBOOLEAN AlreadySignaled)
{
  unsigned __int8 CurrentIrql; // r13
  char v9; // di
  PVOID v10; // r15
  PVOID v11; // r14
  int v12; // esi
  volatile signed __int64 *v13; // r12
  _BYTE *AssociatedWaitObject; // rax
  _BYTE *v15; // r12
  char v16; // al
  KSPIN_LOCK *v17; // rdx
  PVOID v18; // rdi
  PVOID v19; // rdx
  BOOLEAN v20; // r14
  _DWORD *SchedulerAssist; // r9
  __int64 v23; // r10
  __int64 v24; // rdx
  unsigned __int8 v25; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v27; // r9
  int v28; // eax
  bool v29; // zf
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r9
  _DWORD *v32; // r8
  int v33; // eax
  KPROCESSOR_MODE PreviousMode; // [rsp+30h] [rbp-78h]
  PVOID Object; // [rsp+38h] [rbp-70h] BYREF
  int v36; // [rsp+40h] [rbp-68h]
  KSPIN_LOCK *v37; // [rsp+48h] [rbp-60h]
  PVOID v38; // [rsp+50h] [rbp-58h] BYREF
  PVOID v39; // [rsp+58h] [rbp-50h] BYREF
  volatile signed __int64 *v40; // [rsp+60h] [rbp-48h]

  CurrentIrql = 0;
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(
          WaitCompletionPacketHandle,
          1u,
          IopWaitCompletionPacketObjectType,
          PreviousMode,
          &Object,
          0LL);
  v37 = (KSPIN_LOCK *)Object;
  v13 = (volatile signed __int64 *)Object;
  v40 = (volatile signed __int64 *)Object;
  if ( v12 < 0 )
    goto LABEL_12;
  v39 = 0LL;
  v12 = ObReferenceObjectByHandle(IoCompletionHandle, 2u, IoCompletionObjectType, PreviousMode, &v39, 0LL);
  v10 = v39;
  if ( v12 < 0 )
    goto LABEL_12;
  v38 = 0LL;
  v12 = ObReferenceObjectByHandle(TargetObjectHandle, 0x100000u, 0LL, PreviousMode, &v38, 0LL);
  v11 = v38;
  v36 = v12;
  if ( v12 < 0 )
    goto LABEL_12;
  AssociatedWaitObject = (_BYTE *)ObGetAssociatedWaitObject(v38);
  v15 = AssociatedWaitObject;
  if ( !AssociatedWaitObject || (v16 = *AssociatedWaitObject & 0x7F, v16 == 2) || v16 == 4 )
  {
    v12 = -1073741583;
    goto LABEL_39;
  }
  v9 = 1;
  v17 = v37;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v23) = 4;
    else
      v23 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v23;
    v37 = (KSPIN_LOCK *)Object;
  }
  KxAcquireSpinLock(v17 + 12);
  if ( *((_BYTE *)v37 + 104) )
  {
    v12 = -1073741585;
LABEL_39:
    v13 = v40;
    goto LABEL_12;
  }
  v18 = Object;
  *((_BYTE *)Object + 104) = 1;
  *((_QWORD *)v18 + 6) = KeyContext;
  *((_QWORD *)v18 + 7) = ApcContext;
  *((_DWORD *)v18 + 18) = IoStatus;
  *((_QWORD *)v18 + 8) = IoStatusInformation;
  *((_QWORD *)v18 + 10) = v38;
  v19 = v39;
  *((_QWORD *)v18 + 11) = v39;
  v20 = KeRegisterObjectNotification(v15, v19, v18);
  KxReleaseSpinLock((volatile signed __int64 *)v18 + 12);
  if ( (_DWORD)KiIrqlFlags )
  {
    v25 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v27 = CurrentPrcb->SchedulerAssist;
      v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v29 = (v28 & v27[5]) == 0;
      v27[5] &= v28;
      if ( v29 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  v9 = 0;
  if ( AlreadySignaled )
  {
    if ( PreviousMode )
    {
      v24 = (__int64)AlreadySignaled;
      if ( (unsigned __int64)AlreadySignaled >= 0x7FFFFFFF0000LL )
        v24 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v24 = *(_BYTE *)v24;
    }
    *AlreadySignaled = v20;
  }
  v10 = 0LL;
  v11 = 0LL;
  v13 = 0LL;
LABEL_12:
  if ( v9 )
  {
    KxReleaseSpinLock(v13 + 12);
    if ( (_DWORD)KiIrqlFlags )
    {
      v30 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v30 <= 0xFu && CurrentIrql <= 0xFu && v30 >= 2u )
      {
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v29 = (v33 & v32[5]) == 0;
        v32[5] &= v33;
        if ( v29 )
          KiRemoveSystemWorkPriorityKick(v31);
      }
    }
    __writecr8(CurrentIrql);
  }
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x746C6644u);
  if ( v11 )
    ObfDereferenceObjectWithTag(v11, 0x746C6644u);
  if ( v13 )
    ObfDereferenceObjectWithTag((PVOID)v13, 0x746C6644u);
  return v12;
}
