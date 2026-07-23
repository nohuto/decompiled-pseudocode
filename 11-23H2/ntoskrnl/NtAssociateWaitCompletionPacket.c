/*
 * XREFs of NtAssociateWaitCompletionPacket @ 0x140250600
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     ObGetAssociatedWaitObject @ 0x1402509DC (ObGetAssociatedWaitObject.c)
 *     KeRegisterObjectNotification @ 0x140250A70 (KeRegisterObjectNotification.c)
 *     KxAcquireSpinLock @ 0x140251670 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
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
  unsigned __int8 CurrentIrql; // bl
  char v9; // r12
  PVOID v10; // r13
  int v11; // esi
  KSPIN_LOCK *v12; // rdi
  volatile signed __int64 *v13; // r15
  _BYTE *AssociatedWaitObject; // rax
  char v15; // al
  _DWORD *SchedulerAssist; // r9
  int v17; // r8d
  PVOID v18; // r15
  PVOID v19; // rdx
  BOOLEAN v20; // r13
  unsigned __int8 v21; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v23; // r9
  int v24; // eax
  bool v25; // zf
  __int64 v26; // rcx
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  int v30; // eax
  KPROCESSOR_MODE PreviousMode; // [rsp+30h] [rbp-88h]
  PVOID Object; // [rsp+38h] [rbp-80h] BYREF
  int v34; // [rsp+40h] [rbp-78h]
  PVOID v35; // [rsp+48h] [rbp-70h] BYREF
  PVOID v36; // [rsp+50h] [rbp-68h] BYREF
  PVOID v37; // [rsp+58h] [rbp-60h]
  _BYTE *v38; // [rsp+60h] [rbp-58h]
  volatile signed __int64 *v39; // [rsp+68h] [rbp-50h]
  _BYTE *v40; // [rsp+70h] [rbp-48h]

  CurrentIrql = 0;
  v9 = 0;
  v37 = 0LL;
  v10 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(
          WaitCompletionPacketHandle,
          1u,
          IopWaitCompletionPacketObjectType,
          PreviousMode,
          &Object,
          0LL);
  v12 = (KSPIN_LOCK *)Object;
  v38 = Object;
  v13 = (volatile signed __int64 *)Object;
  v39 = (volatile signed __int64 *)Object;
  if ( v11 >= 0 )
  {
    v36 = 0LL;
    v11 = ObReferenceObjectByHandle(IoCompletionHandle, 2u, IoCompletionObjectType, PreviousMode, &v36, 0LL);
    v37 = v36;
    if ( v11 >= 0 )
    {
      v35 = 0LL;
      v11 = ObReferenceObjectByHandle(TargetObjectHandle, 0x100000u, 0LL, PreviousMode, &v35, 0LL);
      v10 = v35;
      v34 = v11;
      if ( v11 >= 0 )
      {
        AssociatedWaitObject = (_BYTE *)ObGetAssociatedWaitObject(v35);
        v40 = AssociatedWaitObject;
        if ( !AssociatedWaitObject || (v15 = *AssociatedWaitObject & 0x7F, v15 == 2) || v15 == 4 )
        {
          v11 = -1073741583;
        }
        else
        {
          v9 = 1;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            v17 = SchedulerAssist[5];
            if ( CurrentIrql == 2 )
              SchedulerAssist[5] = v17 | 4;
            else
              SchedulerAssist[5] = (-1 << (CurrentIrql + 1)) & 4 | v17;
            v38 = Object;
          }
          KxAcquireSpinLock(v12 + 12);
          if ( v38[104] )
          {
            v11 = -1073741585;
          }
          else
          {
            v18 = Object;
            if ( *((_BYTE *)Object + 105) )
            {
              v11 = -1073700861;
              v13 = v39;
            }
            else
            {
              *((_BYTE *)Object + 104) = 1;
              *((_QWORD *)v18 + 6) = KeyContext;
              *((_QWORD *)v18 + 7) = ApcContext;
              *((_DWORD *)v18 + 18) = IoStatus;
              *((_QWORD *)v18 + 8) = IoStatusInformation;
              *((_QWORD *)v18 + 10) = v35;
              v19 = v36;
              *((_QWORD *)v18 + 11) = v36;
              v20 = KeRegisterObjectNotification(v40, v19, v18);
              KxReleaseSpinLock((volatile signed __int64 *)v18 + 12);
              if ( (_DWORD)KiIrqlFlags )
              {
                v21 = KeGetCurrentIrql();
                if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v23 = CurrentPrcb->SchedulerAssist;
                  v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v25 = (v24 & v23[5]) == 0;
                  v23[5] &= v24;
                  if ( v25 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
              __writecr8(CurrentIrql);
              v9 = 0;
              if ( AlreadySignaled )
              {
                if ( PreviousMode )
                {
                  v26 = 0x7FFFFFFF0000LL;
                  if ( (unsigned __int64)AlreadySignaled < 0x7FFFFFFF0000LL )
                    v26 = (__int64)AlreadySignaled;
                  *(_BYTE *)v26 = *(_BYTE *)v26;
                }
                *AlreadySignaled = v20;
              }
              v37 = 0LL;
              v10 = 0LL;
              v13 = 0LL;
            }
          }
        }
      }
    }
  }
  if ( v9 )
  {
    KxReleaseSpinLock(v13 + 12);
    if ( (_DWORD)KiIrqlFlags )
    {
      v27 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
      {
        v28 = KeGetCurrentPrcb();
        v29 = v28->SchedulerAssist;
        v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v25 = (v30 & v29[5]) == 0;
        v29[5] &= v30;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(v28);
      }
    }
    __writecr8(CurrentIrql);
  }
  if ( v37 )
    ObfDereferenceObjectWithTag(v37, 0x746C6644u);
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x746C6644u);
  if ( v13 )
    ObfDereferenceObjectWithTag((PVOID)v13, 0x746C6644u);
  return v11;
}
