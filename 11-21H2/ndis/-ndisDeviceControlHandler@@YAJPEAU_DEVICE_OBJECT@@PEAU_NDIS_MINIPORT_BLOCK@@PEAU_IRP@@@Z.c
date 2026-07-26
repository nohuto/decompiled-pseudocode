/*
 * XREFs of ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C000F1D0
 * Callers:
 *     ?ndisDeviceControlIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00105B0 (-ndisDeviceControlIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     NdisWdfDeviceControlIrpHandler @ 0x1C005B0F0 (NdisWdfDeviceControlIrpHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     NdisReferenceWithTag @ 0x1C000D240 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000DD50 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     ?ndisConvertNdisStatusToNtStatusForIoctl@@YAJJHE@Z @ 0x1C00105CC (-ndisConvertNdisStatusToNtStatusForIoctl@@YAJJHE@Z.c)
 *     NdisMSleep @ 0x1C0015AB0 (NdisMSleep.c)
 *     NdisFreeRefCount @ 0x1C0016360 (NdisFreeRefCount.c)
 *     ?ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C0028FD8 (-ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     ?ndisGetAdapterHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C0029628 (-ndisGetAdapterHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     memcmp @ 0x1C0035F50 (memcmp.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C0056990 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z @ 0x1C0063430 (-ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z.c)
 *     ?ndisGetHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C0063540 (-ndisGetHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     ?ndisGetPerformanceCounters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C00639DC (-ndisGetPerformanceCounters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     ?ndisGetPowerInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C0063BC4 (-ndisGetPowerInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     ?ndisSetPerfTrackParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C006423C (-ndisSetPerfTrackParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     ?ndisMGetLogData@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C006B944 (-ndisMGetLogData@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisIovIoctlAttach@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0071274 (-ndisIovIoctlAttach@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisIovIoctlInvalidate@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C00712CC (-ndisIovIoctlInvalidate@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisIovIoctlNotification@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C00713D4 (-ndisIovIoctlNotification@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0076298 (-ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00BFCF0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00BFE00 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x1C01033C0 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 *     ?ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0129E50 (-ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisGetRdmaCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C012C0BC (-ndisGetRdmaCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 */

__int64 __fastcall ndisDeviceControlHandler(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3)
{
  unsigned int v3; // ebx
  struct _IRP *v4; // r14
  struct _NDIS_MINIPORT_BLOCK *v5; // r15
  signed __int32 v7; // eax
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  _FILE_OBJECT *FileObject; // rax
  struct _NDIS_MINIPORT_BLOCK *v10; // rdi
  __int128 *FsContext; // rbx
  KIRQL v12; // al
  struct _NDIS_M_DRIVER_BLOCK *v13; // rsi
  KIRQL v14; // r12
  _REFERENCE_EX *p_Ref; // r13
  KIRQL v16; // bl
  unsigned __int16 ReferenceCount; // cx
  KIRQL v18; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  unsigned int v20; // r14d
  _NDIS_BIND_PATHS *BindPaths; // rdx
  _NDIS_BIND_PATHS *v22; // rcx
  bool v23; // zf
  char v24; // r12
  KIRQL v25; // r13
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  unsigned int v27; // ecx
  struct _NDIS_REFCOUNT_BLOCK *NsiRefCountTracker; // rcx
  unsigned int *p_Number; // rax
  KIRQL v30; // al
  KIRQL v31; // al
  ULONG_PTR v32; // r8
  KIRQL v33; // bl
  int v34; // ecx
  __int64 v35; // r10
  unsigned __int8 v36; // r9
  _BYTE *v37; // rdx
  __int64 v38; // rax
  unsigned int LowPart; // r8d
  int v40; // eax
  KIRQL v41; // r12
  ULONG_PTR v42; // r8
  int v43; // ecx
  __int64 v44; // r10
  unsigned __int8 v45; // r9
  _BYTE *v46; // rdx
  char v47; // al
  struct _KEVENT *NsiRequestsCompletedEvent; // rcx
  char v49; // r12
  KIRQL v50; // al
  ULONG_PTR v51; // r8
  KIRQL v52; // r13
  __int64 v53; // r10
  unsigned __int8 v54; // r9
  unsigned __int8 v55; // al
  _BYTE *v56; // rdx
  char v58; // al
  int AdapterRssInfo; // eax
  char v60; // cl
  int AdapterHardwareInfo; // eax
  ULONG_PTR v62; // rbx
  unsigned int v63; // r9d
  struct _NDIS_M_DRIVER_BLOCK *v64; // r13
  struct _NDIS_M_DRIVER_BLOCK *v65; // rax
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  int v71; // eax
  int HardwareInfo; // eax
  int v73; // eax
  int PerformanceCounters; // eax
  int PowerInfo; // eax
  int RdmaCapabilities; // eax
  int v77; // edx
  int v78; // edx
  unsigned int v79; // edx
  ULONG_PTR v80; // r13
  int v81; // ecx
  unsigned int v82; // edx
  int v83; // ecx
  struct _KEVENT *RemoveReadyEvent; // rcx
  struct _MDL *v85; // [rsp+30h] [rbp-49h]
  int v86; // [rsp+40h] [rbp-39h] BYREF
  KIRQL v87; // [rsp+44h] [rbp-35h]
  int v88; // [rsp+48h] [rbp-31h]
  unsigned int v89; // [rsp+4Ch] [rbp-2Dh] BYREF
  char v90[8]; // [rsp+50h] [rbp-29h]
  struct _NDIS_MINIPORT_BLOCK *v91; // [rsp+58h] [rbp-21h]
  _IO_STACK_LOCATION *v92; // [rsp+60h] [rbp-19h]
  __int128 v93; // [rsp+68h] [rbp-11h] BYREF
  __int128 v94; // [rsp+78h] [rbp-1h]
  _REFERENCE_EX *v95; // [rsp+88h] [rbp+Fh]
  __int128 *v96; // [rsp+90h] [rbp+17h]
  ULONG_PTR v98; // [rsp+F0h] [rbp+77h]
  char v99; // [rsp+F8h] [rbp+7Fh]

  v99 = 1;
  v3 = -1073741823;
  v86 = -1073741823;
  v4 = a3;
  v89 = 0;
  v5 = a2;
  v93 = 0LL;
  v94 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x15u,
      (struct _GUID *)&WPP_31fc045ef7a830d4d2887bbee76fe91d_Traceguids,
      (char)a2,
      a3);
  v7 = _InterlockedIncrement((volatile signed __int32 *)&ndisPkgs);
  if ( !ImageSectionHandle )
  {
    if ( v7 == 1 )
    {
      ImageSectionHandle = MmLockPagableDataSection(AddressWithinSection);
      MmUnlockPagableImageSection(ImageSectionHandle);
    }
    else
    {
      do
        NdisMSleep(0x32u);
      while ( !ImageSectionHandle );
    }
  }
  MmLockPagableSectionByHandle(ImageSectionHandle);
  CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
  v4->IoStatus.Status = 259;
  v4->IoStatus.Information = 0LL;
  v92 = CurrentStackLocation;
  FileObject = CurrentStackLocation->FileObject;
  if ( !FileObject )
  {
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
LABEL_89:
    v4->IoStatus.Status = v3;
    IofCompleteRequest(v4, 2);
    goto LABEL_90;
  }
  if ( v5->Header.Type != 17 )
  {
    v3 = ndisDummyHandler(a1, &v5->Header, v4);
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
    goto LABEL_90;
  }
  v10 = 0LL;
  FsContext = (__int128 *)FileObject->FsContext;
  v96 = FsContext;
  v91 = 0LL;
  v88 = 1;
  if ( v5->BindPaths )
  {
    v12 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v13 = ndisMiniDriverList;
    v14 = v12;
    *(_QWORD *)v90 = ndisMiniDriverList;
    if ( ndisMiniDriverList )
    {
      while ( 1 )
      {
        p_Ref = &v13->Ref;
        v95 = &v13->Ref;
        v16 = KeAcquireSpinLockRaiseToDpc(&v13->Ref.SpinLock);
        if ( v13->Ref.Closing )
          goto LABEL_136;
        ReferenceCount = v13->Ref.ReferenceCount;
        if ( ReferenceCount >= 0xFFEBu )
        {
          ndisRefCountReferenceCountOverflow = 1;
LABEL_136:
          KeReleaseSpinLock(&v13->Ref.SpinLock, v16);
          v13 = v13->NextDriver;
          goto LABEL_43;
        }
        v13->Ref.ReferenceCount = ReferenceCount + 1;
        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v13->Ref.RefCountTracker, 8u);
        KeReleaseSpinLock(&v13->Ref.SpinLock, v16);
        KeReleaseSpinLock(&ndisMiniDriverListLock, v14);
        v18 = KeAcquireSpinLockRaiseToDpc(&v13->Ref.SpinLock);
        MiniportQueue = v13->MiniportQueue;
        v87 = v18;
        if ( !MiniportQueue )
          goto LABEL_32;
        v20 = v88;
        do
        {
          BindPaths = MiniportQueue->BindPaths;
          if ( !BindPaths )
            goto LABEL_30;
          if ( BindPaths->Number < v20 )
            goto LABEL_30;
          v22 = v5->BindPaths;
          if ( v22->Paths[0].Length != BindPaths->Paths[0].Length
            || memcmp(v22->Paths[0].Buffer, BindPaths->Paths[0].Buffer, v22->Paths[0].Length) )
          {
            goto LABEL_30;
          }
          KeAcquireSpinLockAtDpcLevel(&MiniportQueue->Lock);
          v23 = (MiniportQueue->Flags & 0x80200020) == 0;
          MiniportQueue->MiniportThread = KeGetCurrentThread();
          if ( v23
            && (MiniportQueue->PnPFlags & 0x1084110) == 0
            && MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
            && MiniportQueue->CurrentDevicePowerState == PowerDeviceD0 )
          {
            v24 = 1;
            v25 = KeAcquireSpinLockRaiseToDpc(&MiniportQueue->Ref.SpinLock);
            if ( !MiniportQueue->Ref.Closing )
            {
              RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->RefCountTracker;
              if ( RefCountTracker )
                NdisReferenceWithTag(RefCountTracker, 0x57u);
              v27 = MiniportQueue->Ref.ReferenceCount;
              MiniportQueue->Ref.ReferenceCount = v27 + 1;
              if ( v27 != -1 )
                goto LABEL_24;
              MiniportQueue->Ref.ReferenceCount = -1;
            }
            v24 = 0;
LABEL_24:
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v85) = MiniportQueue->Ref.ReferenceCount;
              WPP_RECORDER_SF_qL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0x14u,
                0xCu,
                (struct _GUID *)&WPP_31fc045ef7a830d4d2887bbee76fe91d_Traceguids,
                (char)MiniportQueue,
                v85);
            }
            KeReleaseSpinLock(&MiniportQueue->Ref.SpinLock, v25);
            if ( v24 )
            {
              NsiRefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->NsiRefCountTracker;
              v91 = v10;
              NdisReferenceWithTag(NsiRefCountTracker, 0);
              p_Number = &MiniportQueue->BindPaths->Number;
              v10 = MiniportQueue;
              ++MiniportQueue->NsiOpenReferences;
              v20 = *p_Number;
            }
          }
          MiniportQueue->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&MiniportQueue->Lock);
          if ( v91 )
          {
            ndisDereferenceMiniportForNsi(v91, 0, 0x57u);
            v91 = 0LL;
          }
LABEL_30:
          MiniportQueue = MiniportQueue->NextMiniport;
        }
        while ( MiniportQueue );
        p_Ref = v95;
        v13 = *(struct _NDIS_M_DRIVER_BLOCK **)v90;
        v18 = v87;
        v88 = v20;
        v4 = a3;
LABEL_32:
        KeReleaseSpinLock(&p_Ref->SpinLock, v18);
        v30 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        v13 = v13->NextDriver;
        v14 = v30;
        v31 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
        v32 = (ULONG_PTR)p_Ref->RefCountTracker;
        v33 = v31;
        v87 = v31;
        if ( v32 - 2 > 1 )
        {
          if ( v32 < 2 )
            ndisBugCheckEx(0x1EuLL, 3uLL, v32, 0LL);
          if ( *(_BYTE *)(v32 + 2) <= 8u )
            ndisBugCheckEx(0x1EuLL, 2uLL, v32, 8uLL);
          v34 = *(unsigned __int8 *)(v32 + 1);
          if ( *(_BYTE *)(v32 + 1) )
          {
            if ( v34 != 1 )
              goto LABEL_41;
            v62 = v32 + 520;
            v63 = *(_DWORD *)(v32 + 576);
            if ( v63 >> 17 < 0x3FFE && (unsigned __int16)v63 >> 1 == (v63 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v32 + 520));
              *(_DWORD *)(v62 + 56) &= 0x10001u;
              v33 = v87;
              goto LABEL_41;
            }
            if ( (unsigned __int16)v63 >> 1 != 0 || (v63 & 1) != 0 )
            {
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v32 + 520), 0);
              v33 = v87;
              goto LABEL_41;
            }
          }
          else
          {
            v35 = *(_QWORD *)(v32 + 8);
            if ( v35 )
            {
              v36 = *(_BYTE *)(v32 + 3);
              if ( v36 )
              {
                while ( 1 )
                {
                  v37 = (_BYTE *)(v35 + 2LL * (unsigned __int8)v34);
                  if ( *v37 == 8 )
                  {
                    v58 = v37[1];
                    if ( v58 )
                      break;
                  }
                  LOBYTE(v34) = v34 + 1;
                  if ( (unsigned __int8)v34 >= v36 )
                    goto LABEL_40;
                }
                v37[1] = v58 - 1;
                goto LABEL_41;
              }
            }
LABEL_40:
            if ( _bittestandreset((signed __int32 *)(v32 + 16), 8u) )
              goto LABEL_41;
          }
          ndisBugCheckEx(0x1EuLL, 0LL, v32, 8uLL);
        }
LABEL_41:
        v23 = p_Ref->ReferenceCount-- == 1;
        if ( v23 )
        {
          if ( !p_Ref->ZeroBased )
          {
            NdisFreeRefCount((ULONG_PTR)p_Ref->RefCountTracker);
            p_Ref->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
          }
          KeReleaseSpinLock(&p_Ref->SpinLock, v33);
          v64 = *(struct _NDIS_M_DRIVER_BLOCK **)v90;
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x14u,
              0x17u,
              (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
              *(_QWORD *)v90);
          v65 = ndisMiniDriverList;
          p_NextDriver = &ndisMiniDriverList;
          if ( ndisMiniDriverList )
          {
            while ( v65 != *(struct _NDIS_M_DRIVER_BLOCK **)v90 )
            {
              p_NextDriver = &v65->NextDriver;
              v65 = v65->NextDriver;
              if ( !v65 )
                goto LABEL_126;
            }
            *p_NextDriver = *(struct _NDIS_M_DRIVER_BLOCK **)(*(_QWORD *)v90 + 8LL);
            ObfDereferenceObject(ndisDriverObject);
          }
LABEL_126:
          Buffer = v64->ImageName.Buffer;
          if ( Buffer )
          {
            ExFreePoolWithTag(Buffer, 0);
            v64->ImageName.Buffer = 0LL;
          }
          NdisDriverInfo = v64->NdisDriverInfo;
          if ( NdisDriverInfo )
          {
            ExFreePoolWithTag(NdisDriverInfo, 0);
            v64->NdisDriverInfo = 0LL;
          }
          if ( (v64->Flags & 1) != 0 )
          {
            PendingDeviceList = v64->PendingDeviceList;
            if ( PendingDeviceList )
            {
              do
              {
                Next = PendingDeviceList->Next;
                ExFreePoolWithTag(PendingDeviceList, 0);
                PendingDeviceList = Next;
              }
              while ( Next );
            }
          }
          KeSetEvent(&v64->MiniportsRemovedEvent, 0, 0);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x14u,
              0x18u,
              (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
              v64);
        }
        else
        {
          KeReleaseSpinLock(&p_Ref->SpinLock, v33);
        }
LABEL_43:
        *(_QWORD *)v90 = v13;
        if ( !v13 )
        {
          FsContext = v96;
          break;
        }
      }
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v14);
    CurrentStackLocation = v92;
    if ( v10 )
    {
      *(_DWORD *)((char *)&v94 + 9) = 0;
      v5 = v10;
      *(_WORD *)((char *)&v94 + 13) = 0;
      HIBYTE(v94) = 0;
      *((_QWORD *)&v93 + 1) = v10;
      *(_QWORD *)&v94 = v10->OidList;
      BYTE8(v94) = *((_BYTE *)FsContext + 24);
      v38 = *(_QWORD *)FsContext;
      FsContext = &v93;
      *(_QWORD *)&v93 = v38;
    }
  }
  if ( (v5->PnPFlags & 0x4010) != 0 )
  {
    v3 = -1073741436;
    goto LABEL_54;
  }
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart == 1507484 )
  {
LABEL_49:
    v40 = ndisMiniportOidIoctl(
            v5,
            (struct _NDIS_USER_OPEN_CONTEXT *)FsContext,
            LowPart,
            CurrentStackLocation->Parameters.Create.Options,
            CurrentStackLocation->Parameters.Read.Length,
            (unsigned __int8 *)v4->AssociatedIrp.MasterIrp,
            v4->MdlAddress,
            &v89);
    v3 = v40;
    if ( !v40 || v40 == -2147483643 )
      v4->IoStatus.Information = v89;
    v99 = 1;
  }
  else
  {
    if ( LowPart > 0x226044 )
    {
      if ( LowPart == 2252872 || LowPart == 2252876 || LowPart == 2252880 )
      {
        RdmaCapabilities = ndisIovIoctlAttach(v5, v4);
      }
      else
      {
        if ( LowPart != 2252884 )
        {
LABEL_168:
          v3 = -1073741822;
          goto LABEL_54;
        }
        RdmaCapabilities = ndisIovIoctlInvalidate(v5, v4);
      }
    }
    else
    {
      if ( LowPart != 2252868 )
      {
        switch ( LowPart )
        {
          case 0x170002u:
          case 0x170006u:
          case 0x17000Eu:
          case 0x170028u:
          case 0x17002Cu:
          case 0x170030u:
          case 0x17003Eu:
            goto LABEL_49;
          case 0x17001Eu:
            if ( !v4->MdlAddress )
            {
              v3 = -1073741811;
              goto LABEL_54;
            }
            v71 = ndisMGetLogData(v5, v4);
            v3 = v71;
            if ( v71 != 259 )
              v3 = ndisConvertNdisStatusToNtStatusForIoctl(v71, v71, 0);
            break;
          case 0x170068u:
            v86 = 0;
            v73 = ndisSetPerfTrackParameters(v5, v4, &v86);
            v3 = ndisConvertNdisStatusToNtStatusForIoctl(v73, v86, 0);
            goto LABEL_52;
          case 0x17006Cu:
            v86 = 0;
            PerformanceCounters = ndisGetPerformanceCounters(v5, v4, &v86);
            v3 = ndisConvertNdisStatusToNtStatusForIoctl(PerformanceCounters, v86, 0);
            goto LABEL_52;
          case 0x170070u:
            v86 = 0;
            HardwareInfo = ndisGetHardwareInfo(v5, v4, &v86);
            v3 = ndisConvertNdisStatusToNtStatusForIoctl(HardwareInfo, v86, 0);
            goto LABEL_52;
          case 0x170078u:
            v86 = 0;
            PowerInfo = ndisGetPowerInfo(v5, v4, &v86);
            v3 = ndisConvertNdisStatusToNtStatusForIoctl(PowerInfo, v86, 0);
            goto LABEL_52;
          case 0x170090u:
            RdmaCapabilities = ndisGetRdmaCapabilities(v5, v4);
            goto LABEL_152;
          case 0x170094u:
            v86 = 0;
            AdapterHardwareInfo = ndisGetAdapterHardwareInfo(v5, v4, &v86);
            v3 = ndisConvertNdisStatusToNtStatusForIoctl(AdapterHardwareInfo, v86, 0);
            goto LABEL_52;
          case 0x170098u:
            v86 = 0;
            AdapterRssInfo = ndisGetAdapterRssInfo(v5, v4, &v86);
            v3 = ndisConvertNdisStatusToNtStatusForIoctl(AdapterRssInfo, v86, 0);
            goto LABEL_52;
          case 0x1700A8u:
            if ( *((_BYTE *)FsContext + 24) )
            {
              ndisMiniportFatalError(v5, NdisMEventErr_Min);
              v78 = 0;
            }
            else
            {
              v78 = -1073741790;
            }
            v3 = ndisConvertNdisStatusToNtStatusForIoctl(v78, v78, 0);
            goto LABEL_52;
          case 0x1700B0u:
            RdmaCapabilities = ndisGetPdInfo(v5, v4);
LABEL_152:
            v77 = RdmaCapabilities;
            v86 = RdmaCapabilities;
            goto LABEL_154;
          default:
            goto LABEL_168;
        }
        goto LABEL_52;
      }
      RdmaCapabilities = ndisIovIoctlNotification(v5, v4);
    }
    v3 = RdmaCapabilities;
    if ( RdmaCapabilities == 259 )
    {
      v99 = 0;
    }
    else
    {
      v77 = RdmaCapabilities;
LABEL_154:
      v3 = ndisConvertNdisStatusToNtStatusForIoctl(RdmaCapabilities, v77, 0);
    }
  }
LABEL_52:
  if ( (v3 & 0xC0230000) == 0xC0230000 )
    v3 = (unsigned __int16)v3 | 0xC0010000;
LABEL_54:
  if ( !v10 )
    goto LABEL_87;
  v41 = KeAcquireSpinLockRaiseToDpc(&v10->Lock);
  v42 = (ULONG_PTR)v10->NsiRefCountTracker;
  v10->MiniportThread = KeGetCurrentThread();
  if ( v42 - 2 > 1 )
  {
    if ( v42 < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v42, 0LL);
    if ( !*(_BYTE *)(v42 + 2) )
      ndisBugCheckEx(0x1EuLL, 2uLL, v42, 0LL);
    v43 = *(unsigned __int8 *)(v42 + 1);
    if ( *(_BYTE *)(v42 + 1) )
    {
      if ( v43 != 1 )
        goto LABEL_65;
      v79 = *(_DWORD *)(v42 + 64);
      v80 = v42 + 8;
      v81 = (unsigned __int16)v79 >> 1;
      if ( v79 >> 17 < 0x3FFE && v81 == (v79 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v42 + 8));
        *(_DWORD *)(v80 + 56) &= 0x10001u;
        goto LABEL_65;
      }
      if ( v81 != 0 || (v79 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v42 + 8), 0);
        goto LABEL_65;
      }
    }
    else
    {
      v44 = *(_QWORD *)(v42 + 8);
      if ( v44 )
      {
        v45 = *(_BYTE *)(v42 + 3);
        if ( v45 )
        {
          while ( 1 )
          {
            v46 = (_BYTE *)(v44 + 2LL * (unsigned __int8)v43);
            if ( !*v46 )
            {
              v47 = v46[1];
              if ( v47 )
                break;
            }
            LOBYTE(v43) = v43 + 1;
            if ( (unsigned __int8)v43 >= v45 )
              goto LABEL_64;
          }
          v46[1] = v47 - 1;
          goto LABEL_65;
        }
      }
LABEL_64:
      if ( _bittestandreset((signed __int32 *)(v42 + 16), 0) )
        goto LABEL_65;
    }
    ndisBugCheckEx(0x1EuLL, 0LL, v42, 0LL);
  }
LABEL_65:
  v23 = v10->NsiOpenReferences-- == 1;
  if ( v23 )
  {
    NsiRequestsCompletedEvent = v10->NsiRequestsCompletedEvent;
    if ( NsiRequestsCompletedEvent )
      KeSetEvent(NsiRequestsCompletedEvent, 0, 0);
  }
  v10->MiniportThread = 0LL;
  KeReleaseSpinLock(&v10->Lock, v41);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0x19u,
      (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
      v10);
  v49 = 0;
  v50 = KeAcquireSpinLockRaiseToDpc(&v10->Ref.SpinLock);
  v51 = (ULONG_PTR)v10->RefCountTracker;
  v52 = v50;
  if ( !v51 || v51 - 2 <= 1 )
    goto LABEL_80;
  if ( v51 == 1 )
    ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
  if ( *(_BYTE *)(v51 + 2) <= 0x57u )
    ndisBugCheckEx(0x1EuLL, 2uLL, v51, 0x57uLL);
  if ( *(_BYTE *)(v51 + 1) )
  {
    if ( *(_BYTE *)(v51 + 1) != 1 )
      goto LABEL_80;
    v82 = *(_DWORD *)(v51 + 5632);
    v83 = (unsigned __int16)v82 >> 1;
    v98 = v51 + 5576;
    if ( v82 >> 17 < 0x3FFE && v83 == (v82 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v51 + 5576));
      *(_DWORD *)(v98 + 56) &= 0x10001u;
      goto LABEL_80;
    }
    if ( v83 != 0 || (v82 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v51 + 5576), 0);
      goto LABEL_80;
    }
LABEL_189:
    ndisBugCheckEx(0x1EuLL, 0LL, v51, 0x57uLL);
  }
  v53 = *(_QWORD *)(v51 + 8);
  if ( v53 )
  {
    v54 = *(_BYTE *)(v51 + 3);
    v55 = 0;
    if ( v54 )
    {
      while ( 1 )
      {
        v56 = (_BYTE *)(v53 + 2LL * v55);
        if ( *v56 == 87 )
        {
          v60 = v56[1];
          if ( v60 )
            break;
        }
        if ( ++v55 >= v54 )
          goto LABEL_79;
      }
      v56[1] = v60 - 1;
      goto LABEL_80;
    }
  }
LABEL_79:
  if ( !_bittestandreset((signed __int32 *)(v51 + 24), 0x17u) )
    goto LABEL_189;
LABEL_80:
  v23 = v10->Ref.ReferenceCount-- == 1;
  if ( v23 )
    v49 = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v85) = v10->Ref.ReferenceCount;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0xEu,
      (struct _GUID *)&WPP_31fc045ef7a830d4d2887bbee76fe91d_Traceguids,
      (char)v10,
      v85);
  }
  KeReleaseSpinLock(&v10->Ref.SpinLock, v52);
  if ( v49 )
  {
    RemoveReadyEvent = v10->RemoveReadyEvent;
    if ( RemoveReadyEvent )
      KeSetEvent(RemoveReadyEvent, 0, 0);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0x1Au,
      (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
      v10);
LABEL_87:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( v99 && v3 != 259 )
    goto LABEL_89;
LABEL_90:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x16u,
      (struct _GUID *)&WPP_31fc045ef7a830d4d2887bbee76fe91d_Traceguids,
      (char)v5,
      v4);
  return v3;
}
