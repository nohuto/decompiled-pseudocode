/*
 * XREFs of IopMountVolume @ 0x1407016F8
 * Callers:
 *     IopCheckVpbMounted @ 0x1402AF6D0 (IopCheckVpbMounted.c)
 *     IoVerifyVolume @ 0x1409478B0 (IoVerifyVolume.c)
 * Callees:
 *     IofCallDriver @ 0x14022F000 (IofCallDriver.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D750 (ExAcquireResourceSharedLite.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     IopMountInitializeVpb @ 0x14028FF9C (IopMountInitializeVpb.c)
 *     IopAllocateIrpWithExtension @ 0x140290050 (IopAllocateIrpWithExtension.c)
 *     IopQueryVpbFlagsSafe @ 0x140290B34 (IopQueryVpbFlagsSafe.c)
 *     MmIsThisAnNtAsSystem @ 0x140290B80 (MmIsThisAnNtAsSystem.c)
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x1402B0040 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1402B03B0 (IopIncrementDeviceObjectRefCount.c)
 *     FsRtlIsTotalDeviceFailure @ 0x1402F4CE0 (FsRtlIsTotalDeviceFailure.c)
 *     IopWaitForLockAlertable @ 0x1402FCF64 (IopWaitForLockAlertable.c)
 *     IoGetActivityIdThread @ 0x14031E8E0 (IoGetActivityIdThread.c)
 *     McTemplateK0jhzr1_EtwWriteTransfer @ 0x1403D115C (McTemplateK0jhzr1_EtwWriteTransfer.c)
 *     McTemplateK0jhzr1d_EtwWriteTransfer @ 0x1403D58EC (McTemplateK0jhzr1d_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     IoVolumeDeviceToGuid @ 0x1407020B0 (IoVolumeDeviceToGuid.c)
 *     IoVolumeDeviceToDosName @ 0x14075B180 (IoVolumeDeviceToDosName.c)
 *     IopLoadFileSystemDriver @ 0x140875A70 (IopLoadFileSystemDriver.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopMountVolume(ULONG_PTR BugCheckParameter1, char a2, char a3, char a4, ULONG_PTR *a5)
{
  const GUID *v5; // rdi
  char v6; // r14
  BOOLEAN v10; // bl
  struct _KTHREAD *CurrentThread; // r12
  struct _KTHREAD *v13; // rcx
  signed int v14; // ebx
  char VpbFlagsSafe; // al
  __int64 v16; // rax
  _BYTE *v17; // r13
  int v18; // eax
  __int64 **v19; // rdi
  __int64 *v20; // r15
  int v21; // ecx
  char v22; // dl
  char v23; // r12
  __int64 *v24; // rax
  bool v25; // zf
  struct _DEVICE_OBJECT *v26; // r14
  char v27; // bl
  struct _DEVICE_OBJECT *v28; // rax
  __int64 v29; // rcx
  PSLIST_ENTRY IrpWithExtension; // rax
  IRP *v31; // rbx
  __int64 v32; // rcx
  NTSTATUS v33; // eax
  ULONG_PTR v34; // rax
  ULONG_PTR v35; // rbx
  struct _KEVENT *v36; // rdi
  __int64 v37; // r12
  char v38; // al
  __int64 v39; // rdx
  char v40; // [rsp+40h] [rbp-C0h]
  BOOLEAN IsThisAnNtAsSystem; // [rsp+43h] [rbp-BDh]
  char v44; // [rsp+44h] [rbp-BCh]
  char v45; // [rsp+45h] [rbp-BBh]
  int v47; // [rsp+48h] [rbp-B8h]
  UNICODE_STRING DosName; // [rsp+50h] [rbp-B0h] BYREF
  int v49; // [rsp+60h] [rbp-A0h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h]
  struct _KTHREAD *v51; // [rsp+70h] [rbp-90h]
  const GUID *ActivityIdThread; // [rsp+78h] [rbp-88h]
  __int128 v53; // [rsp+80h] [rbp-80h] BYREF
  __int128 v54; // [rsp+90h] [rbp-70h] BYREF
  ULONG_PTR *v55; // [rsp+A0h] [rbp-60h]
  __int64 *v56; // [rsp+A8h] [rbp-58h]
  struct _KEVENT Event; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v58; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v59[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v60; // [rsp+F8h] [rbp-8h]
  int v61; // [rsp+100h] [rbp+0h]

  v55 = a5;
  v5 = 0LL;
  v6 = 0;
  v44 = 0;
  ActivityIdThread = 0LL;
  memset(&Event, 0, sizeof(Event));
  v40 = 0;
  v53 = 0LL;
  v54 = 0LL;
  v58 = 0LL;
  DosName = 0LL;
  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  v10 = IsThisAnNtAsSystem;
  v60 = 0LL;
  v61 = 0;
  memset(v59, 0, sizeof(v59));
  CurrentThread = KeGetCurrentThread();
  v51 = CurrentThread;
  if ( !ExAcquireRundownProtection_0(&IopFilesystemDatabaseShutdownRundown) )
    return 3221225865LL;
  if ( IsThisAnNtAsSystem )
  {
    ActivityIdThread = (const GUID *)IoGetActivityIdThread();
    v5 = ActivityIdThread;
    IoVolumeDeviceToGuid(BugCheckParameter1, &v58);
    IoVolumeDeviceToDosName((PVOID)BugCheckParameter1, &DosName);
  }
  if ( a3 )
  {
LABEL_11:
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
    VpbFlagsSafe = IopQueryVpbFlagsSafe(BugCheckParameter1);
    if ( (VpbFlagsSafe & 9) != 0 )
    {
      v14 = (VpbFlagsSafe & 8) != 0 ? 0xC00000C0 : 0;
    }
    else
    {
      if ( v10 )
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
      *(_DWORD *)(BugCheckParameter1 + 48) &= ~2u;
      v14 = -1073741823;
      v16 = *(_QWORD *)(BugCheckParameter1 + 24);
      v17 = (_BYTE *)BugCheckParameter1;
      while ( v16 )
      {
        v17 = (_BYTE *)v16;
        v16 = *(_QWORD *)(v16 + 24);
      }
      ObfReferenceObject(v17);
      v18 = *(_DWORD *)(BugCheckParameter1 + 72);
      if ( v18 == 7 || v18 == 36 )
      {
        v19 = (__int64 **)IopDiskFileSystemQueueHead;
        v20 = &IopDiskFileSystemQueueHead;
      }
      else if ( v18 == 2 )
      {
        v19 = (__int64 **)IopCdRomFileSystemQueueHead;
        v20 = &IopCdRomFileSystemQueueHead;
      }
      else
      {
        v19 = (__int64 **)IopTapeFileSystemQueueHead;
        v20 = &IopTapeFileSystemQueueHead;
      }
      v21 = *(_WORD *)(*(_QWORD *)(BugCheckParameter1 + 56) + 4LL) & 0x10;
      v47 = v21;
      if ( v19 != (__int64 **)v20 )
      {
        v22 = a2;
        while ( 1 )
        {
          v23 = v6;
          if ( v14 >= 0 )
            goto LABEL_81;
          v24 = *v19;
          v25 = *v19 == v20;
          v56 = *v19;
          v45 = v25;
          if ( !v22 && v24 == v20 && v19 != (__int64 **)*v20 )
            goto LABEL_79;
          if ( !v21 || v24 == v20 )
            break;
LABEL_62:
          v19 = (__int64 **)*v19;
          if ( v19 == (__int64 **)v20 )
            goto LABEL_63;
        }
        v26 = (struct _DEVICE_OBJECT *)(v19 - 10);
        v27 = 1;
        v28 = (struct _DEVICE_OBJECT *)*(v19 - 7);
        BugCheckParameter2 = (ULONG_PTR)(v19 - 10);
        while ( v28 )
        {
          v26 = v28;
          ++v27;
          v28 = v28->AttachedDevice;
        }
        KeResetEvent(&Event);
        IrpWithExtension = IopAllocateIrpWithExtension(v29, v17[76] + v27, 0);
        v31 = (IRP *)IrpWithExtension;
        if ( !IrpWithExtension )
        {
          v14 = -1073741670;
          goto LABEL_79;
        }
        v25 = FeatureDeveloperVolume == 0;
        v32 = *((_QWORD *)&IrpWithExtension[11].Next + 1);
        LODWORD(IrpWithExtension[1].Next) = 66;
        LOBYTE(IrpWithExtension[4].Next) = 0;
        IrpWithExtension[5].Next = (_SLIST_ENTRY *)&Event;
        *((_QWORD *)&IrpWithExtension[4].Next + 1) = &v53;
        *((_QWORD *)&IrpWithExtension[9].Next + 1) = v51;
        *(_BYTE *)(v32 - 70) = a2;
        *(_WORD *)(v32 - 72) = 269;
        *(_QWORD *)(v32 - 64) = *(_QWORD *)(BugCheckParameter1 + 56);
        *(_QWORD *)(v32 - 56) = v17;
        if ( !v25 )
        {
          *((_QWORD *)&IrpWithExtension[1].Next + 1) = v59;
          *(_DWORD *)(v32 - 48) = 44;
        }
        v49 = IopFsRegistrationOps;
        ObfReferenceObject(v26);
        IopIncrementDeviceObjectRefCount(BugCheckParameter2, 1);
        _InterlockedIncrement(&IopMountsInProgress);
        ExReleaseResourceLite(&IopDatabaseResource);
        v33 = IofCallDriver(v26, v31);
        if ( v33 == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        }
        else
        {
          *((_QWORD *)&v53 + 1) = 0LL;
          LODWORD(v53) = v33;
        }
        ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
        _InterlockedAdd(&IopMountsInProgress, 0xFFFFFFFF);
        if ( IopMountCompletionWaiters )
          KeSetEvent(&IopMountCompletionEvent, 0, 0);
        ObfDereferenceObject(v26);
        IopDecrementDeviceObjectRef(BugCheckParameter2, 0);
        v14 = v53;
        if ( (int)v53 >= 0 )
        {
          v34 = IopMountInitializeVpb(BugCheckParameter1, (__int64)v17, v47, v45);
          v6 = v40;
          *v55 = v34;
LABEL_61:
          v21 = v47;
          v22 = a2;
          goto LABEL_62;
        }
        if ( ((unsigned int)(v53 + 1073741662) <= 1
           || (_DWORD)v53 == -1073741643
           || (unsigned int)(v53 + 1073741805) <= 1
           || (_DWORD)v53 == -2147483626
           || (_DWORD)v53 == -1073741806)
          && *((_QWORD *)&v53 + 1) == 1LL )
        {
LABEL_63:
          if ( v14 >= 0 )
            goto LABEL_81;
          goto LABEL_79;
        }
        if ( v49 == IopFsRegistrationOps )
        {
          if ( (_DWORD)v53 == -1073741412 )
          {
            v35 = BugCheckParameter2;
            IopIncrementDeviceObjectRefCount(BugCheckParameter2, 1);
            ExReleaseResourceLite(&IopDatabaseResource);
            v36 = (struct _KEVENT *)(BugCheckParameter1 + 280);
            if ( a3 )
            {
              v6 = v40;
            }
            else
            {
              KeSetEvent((PRKEVENT)(BugCheckParameter1 + 280), 0, 0);
              v6 = 0;
              v40 = 0;
            }
            v37 = (__int64)v51;
            KeLeaveCriticalRegionThread((__int64)v51);
            IopLoadFileSystemDriver(v35);
            if ( !a3 )
            {
              v14 = IopWaitForLockAlertable((PVOID)(BugCheckParameter1 + 280), *(_BYTE *)(v37 + 562), a4);
              if ( v14 < 0 )
              {
                ObfDereferenceObject(v17);
                KeLeaveCriticalRegion();
                goto LABEL_82;
              }
              v6 = 1;
              v40 = 1;
            }
            --*(_WORD *)(v37 + 484);
            ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
            v38 = IopQueryVpbFlagsSafe(BugCheckParameter1);
            if ( (v38 & 8) != 0 )
            {
              v14 = -1073741632;
              goto LABEL_79;
            }
            if ( (v38 & 1) != 0 )
            {
              ObfDereferenceObject(v17);
              v14 = 0;
              goto LABEL_81;
            }
            v19 = (__int64 **)&v54;
            *(_QWORD *)&v54 = *v20;
            v14 = -1073741489;
            goto LABEL_61;
          }
        }
        else
        {
          v19 = (__int64 **)&v54;
          *(_QWORD *)&v54 = *v20;
          v14 = -1073741489;
        }
        v40 = v23;
        if ( v14 != -1073741489 )
        {
          v40 = v23;
          if ( FsRtlIsTotalDeviceFailure(v14) )
          {
            v40 = v23;
            if ( !a2 )
              goto LABEL_63;
            v40 = v23;
            if ( v56 == v20 )
              goto LABEL_63;
            v40 = v23;
            v19 = *(__int64 ***)(v20[1] + 8);
          }
        }
        v6 = v23;
        goto LABEL_61;
      }
LABEL_79:
      ObfDereferenceObject(v17);
    }
LABEL_81:
    ExReleaseResourceLite(&IopDatabaseResource);
    v37 = (__int64)v51;
    v36 = (struct _KEVENT *)(BugCheckParameter1 + 280);
LABEL_82:
    if ( v40 )
    {
      KeSetEvent(v36, 0, 0);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegionThread(v37);
    if ( IsThisAnNtAsSystem )
    {
      if ( v44 && MmIsThisAnNtAsSystem() )
      {
        if ( v14 < 0 )
        {
          if ( (Microsoft_Windows_Kernel_IOEnableBits & 2) != 0 )
            McTemplateK0jhzr1d_EtwWriteTransfer(
              DosName.Length >> 1,
              v39,
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
    if ( v14 < 0 && (*(_DWORD *)(BugCheckParameter1 + 48) & 0x100) != 0 && (unsigned int)InitializationPhase < 2 )
      KeBugCheckEx(0xEDu, BugCheckParameter1, v14, 0LL, 0LL);
    goto LABEL_9;
  }
  v13 = KeGetCurrentThread();
  --v13->KernelApcDisable;
  v14 = IopWaitForLockAlertable((PVOID)(BugCheckParameter1 + 280), CurrentThread->PreviousMode, a4);
  if ( v14 >= 0 )
  {
    v10 = IsThisAnNtAsSystem;
    v6 = 1;
    v40 = 1;
    goto LABEL_11;
  }
  KeLeaveCriticalRegion();
  if ( DosName.Buffer )
    ExFreePoolWithTag(DosName.Buffer, 0);
LABEL_9:
  ExReleaseRundownProtection_0(&IopFilesystemDatabaseShutdownRundown);
  return (unsigned int)v14;
}
