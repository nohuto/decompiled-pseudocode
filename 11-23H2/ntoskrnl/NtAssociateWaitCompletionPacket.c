/*
 * XREFs of NtAssociateWaitCompletionPacket @ 0x140250530
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x140250500 (KxReleaseSpinLock.c)
 *     ObGetAssociatedWaitObject @ 0x14025091C (ObGetAssociatedWaitObject.c)
 *     KeRegisterObjectNotification @ 0x1402509B0 (KeRegisterObjectNotification.c)
 *     KxAcquireSpinLock @ 0x1402515B0 (KxAcquireSpinLock.c)
 *     Feature_1940347194__private_IsEnabledDeviceUsage @ 0x14040FEC0 (Feature_1940347194__private_IsEnabledDeviceUsage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     ObReferenceObjectByHandle @ 0x1406E62C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtAssociateWaitCompletionPacket(
        void *a1,
        void *a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        _BYTE *a8)
{
  unsigned __int8 CurrentIrql; // bl
  char v9; // r12
  PVOID v10; // r13
  NTSTATUS v11; // r14d
  KSPIN_LOCK *v12; // rdi
  volatile signed __int64 *v13; // rsi
  _BYTE *AssociatedWaitObject; // rax
  char v15; // al
  _DWORD *SchedulerAssist; // r9
  int v17; // r8d
  int IsEnabledDeviceUsage; // eax
  PVOID v19; // rsi
  PVOID v20; // rdx
  char v21; // r13
  unsigned __int8 v22; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v24; // r9
  int v25; // eax
  bool v26; // zf
  __int64 v27; // rcx
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax
  KPROCESSOR_MODE PreviousMode; // [rsp+30h] [rbp-88h]
  PVOID Object; // [rsp+38h] [rbp-80h] BYREF
  NTSTATUS v35; // [rsp+40h] [rbp-78h]
  PVOID v36; // [rsp+48h] [rbp-70h] BYREF
  PVOID v37; // [rsp+50h] [rbp-68h] BYREF
  PVOID v38; // [rsp+58h] [rbp-60h]
  _BYTE *v39; // [rsp+60h] [rbp-58h]
  volatile signed __int64 *v40; // [rsp+68h] [rbp-50h]
  _BYTE *v41; // [rsp+70h] [rbp-48h]

  CurrentIrql = 0;
  v9 = 0;
  v38 = 0LL;
  v10 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(a1, 1u, IopWaitCompletionPacketObjectType, PreviousMode, &Object, 0LL);
  v12 = (KSPIN_LOCK *)Object;
  v39 = Object;
  v13 = (volatile signed __int64 *)Object;
  v40 = (volatile signed __int64 *)Object;
  if ( v11 >= 0 )
  {
    v37 = 0LL;
    v11 = ObReferenceObjectByHandle(a2, 2u, IoCompletionObjectType, PreviousMode, &v37, 0LL);
    v38 = v37;
    if ( v11 >= 0 )
    {
      v36 = 0LL;
      v11 = ObReferenceObjectByHandle(a3, 0x100000u, 0LL, PreviousMode, &v36, 0LL);
      v10 = v36;
      v35 = v11;
      if ( v11 >= 0 )
      {
        AssociatedWaitObject = (_BYTE *)ObGetAssociatedWaitObject(v36);
        v41 = AssociatedWaitObject;
        if ( !AssociatedWaitObject || (v15 = *AssociatedWaitObject & 0x7F, v15 == 2) || v15 == 4 )
        {
          v11 = -1073741583;
        }
        else
        {
          v9 = 1;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            v17 = SchedulerAssist[5];
            if ( CurrentIrql == 2 )
              SchedulerAssist[5] = v17 | 4;
            else
              SchedulerAssist[5] = (-1 << (CurrentIrql + 1)) & 4 | v17;
            v39 = Object;
          }
          KxAcquireSpinLock(v12 + 12);
          if ( v39[104] )
          {
            v11 = -1073741585;
          }
          else
          {
            IsEnabledDeviceUsage = Feature_1940347194__private_IsEnabledDeviceUsage();
            v19 = Object;
            if ( IsEnabledDeviceUsage && *((_BYTE *)Object + 105) )
            {
              v11 = -1073700861;
              v13 = v40;
            }
            else
            {
              *((_BYTE *)Object + 104) = 1;
              *((_QWORD *)v19 + 6) = a4;
              *((_QWORD *)v19 + 7) = a5;
              *((_DWORD *)v19 + 18) = a6;
              *((_QWORD *)v19 + 8) = a7;
              *((_QWORD *)v19 + 10) = v36;
              v20 = v37;
              *((_QWORD *)v19 + 11) = v37;
              v21 = KeRegisterObjectNotification(v41, v20, v19);
              KxReleaseSpinLock((volatile signed __int64 *)v19 + 12);
              if ( KiIrqlFlags )
              {
                v22 = KeGetCurrentIrql();
                if ( (KiIrqlFlags & 1) != 0 && v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v24 = CurrentPrcb->SchedulerAssist;
                  v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v26 = (v25 & v24[5]) == 0;
                  v24[5] &= v25;
                  if ( v26 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
              __writecr8(CurrentIrql);
              v9 = 0;
              if ( a8 )
              {
                if ( PreviousMode )
                {
                  v27 = 0x7FFFFFFF0000LL;
                  if ( (unsigned __int64)a8 < 0x7FFFFFFF0000LL )
                    v27 = (__int64)a8;
                  *(_BYTE *)v27 = *(_BYTE *)v27;
                }
                *a8 = v21;
              }
              v38 = 0LL;
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
    if ( KiIrqlFlags )
    {
      v28 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = v29->SchedulerAssist;
        v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v26 = (v31 & v30[5]) == 0;
        v30[5] &= v31;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick(v29);
      }
    }
    __writecr8(CurrentIrql);
  }
  if ( v38 )
    ObfDereferenceObjectWithTag(v38, 0x746C6644u);
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x746C6644u);
  if ( v13 )
    ObfDereferenceObjectWithTag((PVOID)v13, 0x746C6644u);
  return (unsigned int)v11;
}
