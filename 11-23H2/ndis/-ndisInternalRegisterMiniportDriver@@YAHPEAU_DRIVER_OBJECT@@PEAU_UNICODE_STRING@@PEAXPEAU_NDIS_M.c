/*
 * XREFs of ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C002ACD4
 * Callers:
 *     NdisMRegisterMiniportDriver @ 0x1C0035FE0 (NdisMRegisterMiniportDriver.c)
 *     NdisLWMRegisterMiniportDriver @ 0x1C005EBE0 (NdisLWMRegisterMiniportDriver.c)
 *     NdisWdfRegisterMiniportDriver @ 0x1C00609C0 (NdisWdfRegisterMiniportDriver.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0003060 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x1C001F354 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z @ 0x1C0030410 (-ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z @ 0x1C0030548 (-ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z.c)
 *     ?ndisGetServiceNameFromRegPath@@YAXPEAU_UNICODE_STRING@@0@Z @ 0x1C0032FF8 (-ndisGetServiceNameFromRegPath@@YAXPEAU_UNICODE_STRING@@0@Z.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ??_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C005D720 (--_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C0111AC0 (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisValidateMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEBU_UNICODE_STRING@@PEAK22@Z @ 0x1C011C3E0 (-ndisValidateMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x1C011E4A8 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 *     ?ndisValidateMiniportDriverCharacteristicsEntryPoints@@YAHPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAU_DRIVER_OBJECT@@KK@Z @ 0x1C0121210 (-ndisValidateMiniportDriverCharacteristicsEntryPoints@@YAHPEAU_NDIS_MINIPORT_DRIVER_CHARACTERIST.c)
 *     ?ndisMInvokeSetOptions@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C01213E4 (-ndisMInvokeSetOptions@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
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
  unsigned int v10; // r15d
  _UNICODE_STRING *p_DriverName; // rdx
  unsigned int v12; // edi
  size_t v13; // rdi
  __int64 v14; // rdx
  void *Pool2; // rax
  unsigned __int16 *p_Flags; // rdi
  LOGICAL IsDriverVerifyingByAddress; // eax
  KIRQL v18; // di
  PVOID v19; // rcx
  struct _NDIS_M_DRIVER_BLOCK *v21; // rax
  unsigned int v22; // edx
  size_t Size; // [rsp+30h] [rbp-10h] BYREF
  PVOID DriverObjectExtension; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v25; // [rsp+80h] [rbp+40h] BYREF
  void *v26; // [rsp+90h] [rbp+50h]
  unsigned int v27; // [rsp+98h] [rbp+58h] BYREF

  v26 = a3;
  v5 = a5;
  v6 = 0LL;
  DriverObjectExtension = 0LL;
  LODWORD(Size) = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x68u,
      (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
      a1,
      Size);
  v10 = a4->Flags & 0x20;
  ndisIfEnsureNsiInitialized();
  if ( !a1 && !v10 )
  {
    v12 = -1073741823;
    goto LABEL_29;
  }
  v27 = 0;
  v25 = 0;
  p_DriverName = 0LL;
  if ( !v10 )
    p_DriverName = &a1->DriverName;
  v12 = ndisValidateMiniportDriverCharacteristicsHeader(a4, p_DriverName, &v27, &v25, (unsigned int *)&Size);
  if ( !v12 )
  {
    v12 = ndisValidateMiniportDriverCharacteristicsEntryPoints(a4, a1, v27, v25);
    if ( !v12 )
    {
      v13 = (unsigned int)a2->Length + 1186;
      if ( v10 )
      {
        Pool2 = (void *)ExAllocatePool2(66LL, (unsigned int)a2->Length + 1186, 538985550);
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
          memset(DriverObjectExtension, 0, 0x4A0uLL);
          v6->MajorNdisVersion = v27;
          v6->MinorNdisVersion = v25;
          v6->MiniportDriverContext = v26;
          v6->Header = (_NDIS_OBJECT_HEADER)77594882;
          v6->ServiceRegPath.Buffer = (wchar_t *)&v6[1].Header.Type;
          v6->ServiceRegPath.Length = a2->Length;
          v6->ServiceRegPath.MaximumLength = a2->Length + 2;
          memmove(&v6[1], a2->Buffer, a2->Length);
          ndisGetServiceNameFromRegPath(&v6->ServiceRegPath, &v6->ServiceName);
          p_Flags = &v6->Flags;
          if ( (a4->Flags & 1) != 0 )
          {
            *p_Flags |= 1u;
            KeInitializeMutex(&v6->IMStartRemoveMutex, 0xFFFFu);
          }
          if ( (a4->Flags & 4) != 0 )
            *p_Flags |= 0x20u;
          memmove(&v6->112, a4, (unsigned int)Size);
          v6->MiniportDriverCharacteristics.MajorNdisVersion = v27;
          v6->MiniportDriverCharacteristics.MinorNdisVersion = v25;
          if ( (a4->Flags & 0x10) != 0 )
            *p_Flags |= 0x40u;
          if ( (a4->Flags & 0x20) != 0 )
            *p_Flags |= 0x80u;
          v6->DriverVersion = a4->MinorDriverVersion | (a4->MajorDriverVersion << 16);
          if ( v10 )
            IsDriverVerifyingByAddress = MmIsDriverVerifyingByAddress(a4->RestartHandler);
          else
            IsDriverVerifyingByAddress = MmIsDriverVerifying(a1);
          if ( IsDriverVerifyingByAddress )
          {
            *p_Flags |= 2u;
            if ( (ndisFlags & 0x400) != 0 )
            {
              v21 = 0LL;
              if ( !ndisDriverTrackAlloc )
                v21 = v6;
              ndisDriverTrackAlloc = v21;
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
            a1->MajorFunction[23] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisWMIIrpDispatch;
          }
          KeInitializeEvent(&v6->MiniportsRemovedEvent, NotificationEvent, 0);
          v6->DriverObject = a1;
          v6->DeviceList.Blink = &v6->DeviceList;
          v6->DeviceList.Flink = &v6->DeviceList;
          ndisInitializeRef(&v6->Ref, 0xCu);
          *v5 = v6;
          v12 = ndisMInvokeSetOptions(v6);
          if ( !v12 )
          {
            if ( a4->OidRequestHandler || v6->CoOidRequestHandler )
            {
              ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
              v18 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
              v19 = ndisDriverObject;
              v6->NextDriver = ndisMiniDriverList;
              ndisMiniDriverList = v6;
              ObfReferenceObject(v19);
              KeReleaseSpinLock(&ndisMiniDriverListLock, v18);
              MmUnlockPagableImageSection(ImageSectionHandle);
              _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
              ndisQueryDriverImageName(&v6->ServiceName, &v6->ImageName);
              ndisWriteDriverNDISVersionToServiceKey(
                v27,
                v25,
                1u,
                a4->MajorDriverVersion,
                a4->MinorDriverVersion,
                &v6->ServiceName);
              v12 = 0;
              goto LABEL_29;
            }
            v12 = -1073676283;
          }
          ndisDereferenceDriver(v6, 0, 0xFFu);
          *v5 = 0LL;
          _NDIS_M_DRIVER_BLOCK::`scalar deleting destructor'(v6, v22);
          if ( v10 )
            ExFreePoolWithTag(v6, 0);
          goto LABEL_29;
        }
      }
      v12 = -1073741670;
    }
  }
LABEL_29:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x69u,
      (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
      v6);
  return v12;
}
