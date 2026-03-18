/*
 * XREFs of IopMountVolume @ 0x14068E624
 * Callers:
 *     IopCheckVpbMounted @ 0x1402A7910 (IopCheckVpbMounted.c)
 *     IoVerifyVolume @ 0x1409367E0 (IoVerifyVolume.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14020B830 (IopAllocateIrpWithExtension.c)
 *     IopQueryVpbFlagsSafe @ 0x14020C4D4 (IopQueryVpbFlagsSafe.c)
 *     MmIsThisAnNtAsSystem @ 0x14020C520 (MmIsThisAnNtAsSystem.c)
 *     IopMountInitializeVpb @ 0x14020C530 (IopMountInitializeVpb.c)
 *     FsRtlIsTotalDeviceFailure @ 0x14028D390 (FsRtlIsTotalDeviceFailure.c)
 *     IopWaitForLockAlertable @ 0x14029ED34 (IopWaitForLockAlertable.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1402A6E00 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1402A7190 (IopDecrementDeviceObjectRef.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     IoGetActivityIdThread @ 0x1402E0960 (IoGetActivityIdThread.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     McTemplateK0jhzr1_EtwWriteTransfer @ 0x14039AE20 (McTemplateK0jhzr1_EtwWriteTransfer.c)
 *     McTemplateK0jhzr1d_EtwWriteTransfer @ 0x1403A0204 (McTemplateK0jhzr1d_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     IoVolumeDeviceToGuid @ 0x14068B980 (IoVolumeDeviceToGuid.c)
 *     IoVolumeDeviceToDosName @ 0x140710B90 (IoVolumeDeviceToDosName.c)
 *     IopLoadFileSystemDriver @ 0x14080C5C8 (IopLoadFileSystemDriver.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopMountVolume(struct _DEVICE_OBJECT *BugCheckParameter1, char a2, char a3, char a4, ULONG_PTR *a5)
{
  const GUID *v5; // rsi
  char v9; // r12
  BOOLEAN IsThisAnNtAsSystem; // al
  struct _KTHREAD *CurrentThread; // r15
  BOOLEAN v12; // bl
  struct _KTHREAD *v13; // rcx
  signed int v14; // ebx
  char VpbFlagsSafe; // al
  struct _DEVICE_OBJECT *AttachedDevice; // rax
  struct _DEVICE_OBJECT *v17; // r13
  ULONG DeviceType; // eax
  __int64 *v19; // r14
  __int64 **v20; // rsi
  int v21; // ecx
  char v22; // dl
  __int64 *v23; // rax
  bool v24; // zf
  struct _KEVENT *p_DeviceLock; // rsi
  __int64 v26; // rdx
  struct _DEVICE_OBJECT *v28; // rbx
  char v29; // r15
  struct _DEVICE_OBJECT *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 IrpWithExtension; // rax
  IRP *v34; // r15
  __int64 v35; // rcx
  int v36; // eax
  NTSTATUS v37; // eax
  ULONG_PTR v38; // r15
  ULONG_PTR v39; // rax
  char v40; // al
  BOOLEAN v43; // [rsp+43h] [rbp-7Eh]
  char v44; // [rsp+44h] [rbp-7Dh]
  char v45; // [rsp+45h] [rbp-7Ch]
  int v47; // [rsp+48h] [rbp-79h]
  __int64 v48; // [rsp+50h] [rbp-71h]
  UNICODE_STRING DosName; // [rsp+58h] [rbp-69h] BYREF
  int v50; // [rsp+68h] [rbp-59h]
  const GUID *ActivityIdThread; // [rsp+70h] [rbp-51h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-49h]
  NTSTATUS Status[4]; // [rsp+80h] [rbp-41h] BYREF
  __int128 v54; // [rsp+90h] [rbp-31h] BYREF
  ULONG_PTR *v55; // [rsp+A0h] [rbp-21h]
  __int64 *v56; // [rsp+A8h] [rbp-19h]
  struct _KEVENT Event; // [rsp+B0h] [rbp-11h] BYREF
  GUID v58; // [rsp+C8h] [rbp+7h] BYREF

  v55 = a5;
  v5 = 0LL;
  v44 = 0;
  memset(&Event, 0, sizeof(Event));
  ActivityIdThread = 0LL;
  v9 = 0;
  *(_OWORD *)Status = 0LL;
  v54 = 0LL;
  v58 = 0LL;
  DosName = 0LL;
  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  CurrentThread = KeGetCurrentThread();
  v48 = (__int64)CurrentThread;
  v12 = IsThisAnNtAsSystem;
  v43 = IsThisAnNtAsSystem;
  if ( ExAcquireRundownProtection(&IopFilesystemDatabaseShutdownRundown) )
  {
    if ( v12 )
    {
      ActivityIdThread = (const GUID *)IoGetActivityIdThread();
      v5 = ActivityIdThread;
      IoVolumeDeviceToGuid(BugCheckParameter1, &v58);
      IoVolumeDeviceToDosName(BugCheckParameter1, &DosName);
    }
    if ( !a3 )
    {
      v13 = KeGetCurrentThread();
      --v13->KernelApcDisable;
      v14 = IopWaitForLockAlertable(&BugCheckParameter1->DeviceLock, CurrentThread->PreviousMode, a4);
      if ( v14 < 0 )
      {
        KeLeaveCriticalRegion();
        if ( DosName.Buffer )
          ExFreePoolWithTag(DosName.Buffer, 0);
LABEL_38:
        ExReleaseRundownProtection(&IopFilesystemDatabaseShutdownRundown);
        return (unsigned int)v14;
      }
      v12 = v43;
      v9 = 1;
    }
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
    VpbFlagsSafe = IopQueryVpbFlagsSafe((__int64)BugCheckParameter1);
    if ( (VpbFlagsSafe & 9) != 0 )
    {
      v14 = (VpbFlagsSafe & 8) != 0 ? 0xC00000C0 : 0;
    }
    else
    {
      if ( v12 )
      {
        if ( MmIsThisAnNtAsSystem() && (Microsoft_Windows_Kernel_IOEnableBits & 1) != 0 )
          McTemplateK0jhzr1_EtwWriteTransfer(
            DosName.Length >> 1,
            (const EVENT_DESCRIPTOR *)IoMgr_MountBegin,
            v5,
            (__int64)&v58,
            DosName.Length >> 1,
            (__int64)DosName.Buffer);
        v44 = 1;
      }
      KeInitializeEvent(&Event, NotificationEvent, 0);
      BugCheckParameter1->Flags &= ~2u;
      v14 = -1073741823;
      AttachedDevice = BugCheckParameter1->AttachedDevice;
      v17 = BugCheckParameter1;
      while ( AttachedDevice )
      {
        v17 = AttachedDevice;
        AttachedDevice = AttachedDevice->AttachedDevice;
      }
      ObfReferenceObject(v17);
      DeviceType = BugCheckParameter1->DeviceType;
      if ( DeviceType == 7 || DeviceType == 36 )
      {
        v19 = &IopDiskFileSystemQueueHead;
      }
      else
      {
        v19 = &IopCdRomFileSystemQueueHead;
        if ( DeviceType != 2 )
          v19 = &IopTapeFileSystemQueueHead;
      }
      v20 = (__int64 **)*v19;
      v21 = BugCheckParameter1->Vpb->Flags & 0x10;
      v47 = v21;
      if ( (__int64 *)*v19 != v19 )
      {
        v22 = a2;
        while ( 1 )
        {
          if ( v14 >= 0 )
            goto LABEL_26;
          v23 = *v20;
          v24 = *v20 == v19;
          v56 = *v20;
          v45 = v24;
          if ( !v22 && v23 == v19 && v20 != (__int64 **)*v19 )
            goto LABEL_60;
          if ( !v21 || v23 == v19 )
            break;
LABEL_24:
          v20 = (__int64 **)*v20;
          if ( v20 == (__int64 **)v19 )
            goto LABEL_25;
        }
        v28 = (struct _DEVICE_OBJECT *)(v20 - 10);
        v29 = 1;
        v30 = (struct _DEVICE_OBJECT *)*(v20 - 7);
        BugCheckParameter2 = (ULONG_PTR)(v20 - 10);
        while ( v30 )
        {
          v28 = v30;
          ++v29;
          v30 = v30->AttachedDevice;
        }
        KeResetEvent(&Event);
        LOBYTE(v31) = v29 + v17->StackSize;
        IrpWithExtension = IopAllocateIrpWithExtension(v32, v31);
        v34 = (IRP *)IrpWithExtension;
        if ( !IrpWithExtension )
        {
          CurrentThread = (struct _KTHREAD *)v48;
          v14 = -1073741670;
          goto LABEL_60;
        }
        v35 = *(_QWORD *)(IrpWithExtension + 184);
        *(_DWORD *)(IrpWithExtension + 16) = 66;
        *(_BYTE *)(IrpWithExtension + 64) = 0;
        *(_QWORD *)(IrpWithExtension + 80) = &Event;
        *(_QWORD *)(IrpWithExtension + 72) = Status;
        *(_QWORD *)(IrpWithExtension + 152) = v48;
        *(_BYTE *)(v35 - 70) = a2;
        *(_WORD *)(v35 - 72) = 269;
        *(_QWORD *)(v35 - 64) = BugCheckParameter1->Vpb;
        v36 = IopFsRegistrationOps;
        *(_QWORD *)(v35 - 56) = v17;
        v50 = v36;
        ObfReferenceObject(v28);
        IopIncrementDeviceObjectRefCount(BugCheckParameter2, 1);
        _InterlockedIncrement(&IopMountsInProgress);
        ExReleaseResourceLite(&IopDatabaseResource);
        v37 = IofCallDriver(v28, v34);
        if ( v37 == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        }
        else
        {
          *(_QWORD *)&Status[2] = 0LL;
          Status[0] = v37;
        }
        ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
        _InterlockedAdd(&IopMountsInProgress, 0xFFFFFFFF);
        if ( IopMountCompletionWaiters )
          KeSetEvent(&IopMountCompletionEvent, 0, 0);
        ObfDereferenceObject(v28);
        v38 = BugCheckParameter2;
        IopDecrementDeviceObjectRef(BugCheckParameter2, 0);
        v14 = Status[0];
        if ( Status[0] >= 0 )
        {
          v39 = IopMountInitializeVpb((__int64)BugCheckParameter1, (__int64)v17, v47, v45);
          *v55 = v39;
        }
        else
        {
          if ( ((unsigned int)(Status[0] + 1073741662) <= 1
             || (unsigned int)(Status[0] + 1073741806) <= 2
             || Status[0] == -2147483626
             || Status[0] == -1073741643)
            && *(_QWORD *)&Status[2] == 1LL )
          {
LABEL_25:
            CurrentThread = (struct _KTHREAD *)v48;
            if ( v14 < 0 )
              goto LABEL_60;
            goto LABEL_26;
          }
          if ( v50 == IopFsRegistrationOps )
          {
            if ( Status[0] == -1073741412 )
            {
              IopIncrementDeviceObjectRefCount(v38, 1);
              ExReleaseResourceLite(&IopDatabaseResource);
              if ( !a3 )
              {
                KeSetEvent(&BugCheckParameter1->DeviceLock, 0, 0);
                v9 = 0;
              }
              p_DeviceLock = &BugCheckParameter1->DeviceLock;
              KeLeaveCriticalRegionThread(v48);
              IopLoadFileSystemDriver(v38);
              CurrentThread = (struct _KTHREAD *)v48;
              if ( !a3 )
              {
                v14 = IopWaitForLockAlertable(&BugCheckParameter1->DeviceLock, *(_BYTE *)(v48 + 562), a4);
                if ( v14 < 0 )
                {
                  ObfDereferenceObject(v17);
                  KeLeaveCriticalRegion();
                  goto LABEL_27;
                }
                v9 = 1;
              }
              --*(_WORD *)(v48 + 484);
              ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
              v40 = IopQueryVpbFlagsSafe((__int64)BugCheckParameter1);
              if ( (v40 & 8) != 0 )
              {
                v14 = -1073741632;
                goto LABEL_60;
              }
              if ( (v40 & 1) != 0 )
              {
                ObfDereferenceObject(v17);
                v14 = 0;
                goto LABEL_26;
              }
              v20 = (__int64 **)&v54;
              *(_QWORD *)&v54 = *v19;
              v14 = -1073741489;
              goto LABEL_56;
            }
          }
          else
          {
            v20 = (__int64 **)&v54;
            *(_QWORD *)&v54 = *v19;
            v14 = -1073741489;
          }
          if ( v14 != -1073741489 && FsRtlIsTotalDeviceFailure(v14) )
          {
            if ( !a2 || v56 == v19 )
              goto LABEL_25;
            v20 = *(__int64 ***)(v19[1] + 8);
          }
        }
        CurrentThread = (struct _KTHREAD *)v48;
LABEL_56:
        v21 = v47;
        v22 = a2;
        goto LABEL_24;
      }
LABEL_60:
      ObfDereferenceObject(v17);
    }
LABEL_26:
    ExReleaseResourceLite(&IopDatabaseResource);
    p_DeviceLock = &BugCheckParameter1->DeviceLock;
LABEL_27:
    if ( v9 )
    {
      KeSetEvent(p_DeviceLock, 0, 0);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( v43 )
    {
      if ( v44 && MmIsThisAnNtAsSystem() )
      {
        if ( v14 < 0 )
        {
          if ( (Microsoft_Windows_Kernel_IOEnableBits & 2) != 0 )
            McTemplateK0jhzr1d_EtwWriteTransfer(
              DosName.Length >> 1,
              v26,
              ActivityIdThread,
              (__int64)&v58,
              DosName.Length >> 1,
              (__int64)DosName.Buffer,
              v14);
        }
        else if ( (Microsoft_Windows_Kernel_IOEnableBits & 1) != 0 )
        {
          McTemplateK0jhzr1_EtwWriteTransfer(
            DosName.Length >> 1,
            (const EVENT_DESCRIPTOR *)IoMgr_MountSucceeded,
            ActivityIdThread,
            (__int64)&v58,
            DosName.Length >> 1,
            (__int64)DosName.Buffer);
        }
      }
      if ( DosName.Buffer )
        ExFreePoolWithTag(DosName.Buffer, 0);
    }
    if ( v14 < 0 && (BugCheckParameter1->Flags & 0x100) != 0 && (unsigned int)InitializationPhase < 2 )
      KeBugCheckEx(0xEDu, (ULONG_PTR)BugCheckParameter1, v14, 0LL, 0LL);
    goto LABEL_38;
  }
  return 3221225865LL;
}
