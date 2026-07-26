/*
 * XREFs of ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0031880
 * Callers:
 *     NdisMRegisterMiniportDriver @ 0x1C0031860 (NdisMRegisterMiniportDriver.c)
 *     NdisLWMRegisterMiniportDriver @ 0x1C0059970 (NdisLWMRegisterMiniportDriver.c)
 *     NdisWdfRegisterMiniportDriver @ 0x1C005B750 (NdisWdfRegisterMiniportDriver.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006130 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x1C001DD6C (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z @ 0x1C002AC24 (-ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z.c)
 *     ?ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z @ 0x1C002AD90 (-ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisGetServiceNameFromRegPath@@YAXPEAU_UNICODE_STRING@@0@Z @ 0x1C0031CA8 (-ndisGetServiceNameFromRegPath@@YAXPEAU_UNICODE_STRING@@0@Z.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ??_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C00584B4 (--_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C010AA7C (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x1C0110FC8 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 *     ?ndisValidateMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEBU_UNICODE_STRING@@PEAK22@Z @ 0x1C0111680 (-ndisValidateMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@.c)
 *     ?ndisMInvokeSetOptions@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C0114640 (-ndisMInvokeSetOptions@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 *     ?ndisValidateMiniportDriverCharacteristicsEntryPoints@@YAHPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAU_DRIVER_OBJECT@@KK@Z @ 0x1C0114710 (-ndisValidateMiniportDriverCharacteristicsEntryPoints@@YAHPEAU_NDIS_MINIPORT_DRIVER_CHARACTERIST.c)
 */

__int64 __fastcall ndisInternalRegisterMiniportDriver(
        struct _DRIVER_OBJECT *a1,
        struct _UNICODE_STRING *a2,
        void *a3,
        struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *a4,
        void **a5)
{
  void **v5; // r12
  struct _NDIS_M_DRIVER_BLOCK *v6; // rbx
  unsigned int v9; // r15d
  _UNICODE_STRING *p_DriverName; // rdx
  unsigned int v11; // edi
  unsigned __int8 v12; // r13
  size_t v13; // rdi
  __int64 v14; // rdx
  void *Pool2; // rax
  PVOID v16; // rcx
  struct _UNICODE_STRING *v17; // rdx
  unsigned int Flags; // edx
  unsigned int v19; // eax
  LOGICAL IsDriverVerifyingByAddress; // eax
  KIRQL v21; // di
  PVOID v22; // rcx
  struct _NDIS_M_DRIVER_BLOCK *v24; // rax
  unsigned int v25; // edx
  size_t Size; // [rsp+30h] [rbp-18h] BYREF
  PVOID DriverObjectExtension; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v28; // [rsp+90h] [rbp+48h] BYREF
  struct _UNICODE_STRING *v29; // [rsp+98h] [rbp+50h]
  void *v30; // [rsp+A0h] [rbp+58h]
  unsigned int v31; // [rsp+A8h] [rbp+60h] BYREF

  v30 = a3;
  v29 = a2;
  v5 = a5;
  v6 = 0LL;
  DriverObjectExtension = 0LL;
  LODWORD(Size) = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x69u,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      a1,
      Size);
  v9 = a4->Flags & 0x20;
  ndisIfEnsureNsiInitialized();
  if ( !a1 && !v9 )
  {
    v11 = -1073741823;
    goto LABEL_29;
  }
  v28 = 0;
  v31 = 0;
  p_DriverName = 0LL;
  if ( !v9 )
    p_DriverName = &a1->DriverName;
  v11 = ndisValidateMiniportDriverCharacteristicsHeader(a4, p_DriverName, &v28, &v31, (unsigned int *)&Size);
  if ( !v11 )
  {
    v12 = v31;
    v11 = ndisValidateMiniportDriverCharacteristicsEntryPoints(a4, a1, v28, v31);
    if ( !v11 )
    {
      v13 = (unsigned int)v29->Length + 1186;
      if ( v9 )
      {
        Pool2 = (void *)ExAllocatePool2(66LL, (unsigned int)v29->Length + 1186, 538985550);
        DriverObjectExtension = Pool2;
        if ( Pool2 )
          goto LABEL_13;
      }
      else
      {
        v14 = 1313425732LL;
        if ( (a4->Flags & 1) == 0 )
          v14 = 1313687876LL;
        if ( IoAllocateDriverObjectExtension(a1, (PVOID)v14, v13, &DriverObjectExtension) >= 0 )
        {
          Pool2 = DriverObjectExtension;
LABEL_13:
          memset(Pool2, 0, v13);
          v6 = (struct _NDIS_M_DRIVER_BLOCK *)DriverObjectExtension;
          v16 = DriverObjectExtension;
          *((_QWORD *)DriverObjectExtension + 44) = 0LL;
          memset(v16, 0, 0x4A0uLL);
          v17 = v29;
          v6->MajorNdisVersion = v28;
          v6->MiniportDriverContext = v30;
          v6->Header = (_NDIS_OBJECT_HEADER)77594882;
          v6->MinorNdisVersion = v12;
          v6->ServiceRegPath.Buffer = (wchar_t *)&v6[1].Header.Type;
          v6->ServiceRegPath.Length = v17->Length;
          v6->ServiceRegPath.MaximumLength = v17->Length + 2;
          memmove(&v6[1], v17->Buffer, v17->Length);
          ndisGetServiceNameFromRegPath(&v6->ServiceRegPath, &v6->ServiceName);
          Flags = a4->Flags;
          if ( (Flags & 1) != 0 )
          {
            v6->Flags |= 1u;
            KeInitializeMutex(&v6->IMStartRemoveMutex, 0xFFFFu);
            Flags = a4->Flags;
          }
          if ( (Flags & 4) != 0 )
            v6->Flags |= 0x20u;
          memmove(&v6->112, a4, (unsigned int)Size);
          v6->MiniportDriverCharacteristics.MajorNdisVersion = v28;
          v6->MiniportDriverCharacteristics.MinorNdisVersion = v12;
          v19 = a4->Flags;
          if ( (v19 & 0x10) != 0 )
          {
            v6->Flags |= 0x40u;
            v19 = a4->Flags;
          }
          if ( (v19 & 0x20) != 0 )
            v6->Flags |= 0x80u;
          v6->DriverVersion = a4->MinorDriverVersion | (a4->MajorDriverVersion << 16);
          if ( v9 )
            IsDriverVerifyingByAddress = MmIsDriverVerifyingByAddress(a4->RestartHandler);
          else
            IsDriverVerifyingByAddress = MmIsDriverVerifying(a1);
          if ( IsDriverVerifyingByAddress )
          {
            v6->Flags |= 2u;
            if ( (ndisFlags & 0x400) != 0 )
            {
              v24 = 0LL;
              if ( !ndisDriverTrackAlloc )
                v24 = v6;
              ndisDriverTrackAlloc = v24;
            }
          }
          v6->MiniportQueue = 0LL;
          if ( (a4->Flags & 0x30) == 0 )
          {
            memset64(a1->MajorFunction, (unsigned __int64)ndisDummyIrpHandler, 0x1CuLL);
            a1->DriverExtension->AddDevice = (int (__fastcall *)(_DRIVER_OBJECT *, _DEVICE_OBJECT *))ndisWdmPnPAddDevice;
            a1->DriverUnload = ndisMUnloadEx;
            a1->MajorFunction[0] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisCreateIrpHandler;
            a1->MajorFunction[14] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDeviceControlIrpHandler;
            a1->MajorFunction[15] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDeviceInternalIrpDispatch;
            a1->MajorFunction[2] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisCloseIrpHandler;
            a1->MajorFunction[27] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisPnPDispatch;
            a1->MajorFunction[22] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisPowerDispatch;
            a1->MajorFunction[23] = ndisWMIIrpDispatch;
          }
          KeInitializeEvent(&v6->MiniportsRemovedEvent, NotificationEvent, 0);
          v6->DriverObject = a1;
          v6->DeviceList.Blink = &v6->DeviceList;
          v6->DeviceList.Flink = &v6->DeviceList;
          ndisInitializeRef(&v6->Ref, 0xCu);
          *v5 = v6;
          v11 = ndisMInvokeSetOptions(v6);
          if ( !v11 )
          {
            if ( a4->OidRequestHandler || v6->CoOidRequestHandler )
            {
              ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
              v21 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
              v22 = ndisDriverObject;
              v6->NextDriver = ndisMiniDriverList;
              ndisMiniDriverList = v6;
              ObfReferenceObject(v22);
              KeReleaseSpinLock(&ndisMiniDriverListLock, v21);
              MmUnlockPagableImageSection(ImageSectionHandle);
              _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
              ndisQueryDriverImageName(&v6->ServiceName, &v6->ImageName);
              ndisWriteDriverNDISVersionToServiceKey(
                v28,
                v31,
                1,
                a4->MajorDriverVersion,
                a4->MinorDriverVersion,
                &v6->ServiceName);
              v11 = 0;
              goto LABEL_29;
            }
            v11 = -1073676283;
          }
          ndisDereferenceDriver(v6, 0, 0xFFu);
          *v5 = 0LL;
          _NDIS_M_DRIVER_BLOCK::`scalar deleting destructor'(v6, v25);
          if ( v9 )
            ExFreePoolWithTag(v6, 0);
          goto LABEL_29;
        }
      }
      v11 = -1073741670;
    }
  }
LABEL_29:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x6Au,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      v6);
  return v11;
}
