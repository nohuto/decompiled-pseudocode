/*
 * XREFs of NdisFRegisterFilterDriver @ 0x1C002B200
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Z @ 0x1C00107A4 (WPP_RECORDER_SF_Z.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C00278C4 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z @ 0x1C002AC24 (-ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z.c)
 *     ?ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z @ 0x1C002AD90 (-ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     ?ndisCreateFilterDriverRegistry@@YAHPEBU_UNICODE_STRING@@E@Z @ 0x1C002B744 (-ndisCreateFilterDriverRegistry@@YAHPEBU_UNICODE_STRING@@E@Z.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C0034038 (WPP_RECORDER_SF__guid_.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     ??_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C005FB08 (--_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     McTemplateK0zq_EtwWriteTransfer @ 0x1C0062078 (McTemplateK0zq_EtwWriteTransfer.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C01010E0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C010AA7C (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C010F22C (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 *     ?ndisValidateFilterDriverCharacteristicsHeader@@YAHPEBU_NDIS_FILTER_DRIVER_CHARACTERISTICS@@PEAK@Z @ 0x1C0110E68 (-ndisValidateFilterDriverCharacteristicsHeader@@YAHPEBU_NDIS_FILTER_DRIVER_CHARACTERISTICS@@PEAK.c)
 *     ?SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z @ 0x1C0111310 (-SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisFInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z @ 0x1C0115CC0 (-ndisFInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z.c)
 *     ??1NDIS_BIND_FILTER_DRIVER@@QEAA@XZ @ 0x1C01217C8 (--1NDIS_BIND_FILTER_DRIVER@@QEAA@XZ.c)
 */

NDIS_STATUS __stdcall NdisFRegisterFilterDriver(
        PDRIVER_OBJECT DriverObject,
        NDIS_HANDLE FilterDriverContext,
        PNDIS_FILTER_DRIVER_CHARACTERISTICS FilterDriverCharacteristics,
        PNDIS_HANDLE NdisFilterDriverHandle)
{
  unsigned __int8 v4; // si
  int (__fastcall *OidRequestHandler)(void *, _NDIS_OID_REQUEST *); // rdx
  int v9; // ecx
  NDIS_STATUS FilterDriverRegistry; // ebx
  int (__fastcall *DirectOidRequestHandler)(void *, _NDIS_OID_REQUEST *); // r8
  _BOOL8 v12; // rcx
  unsigned __int8 MajorNdisVersion; // dl
  _UNICODE_STRING *p_ServiceName; // r12
  int v15; // r8d
  int v16; // ecx
  unsigned int v17; // ebx
  __int64 Pool2; // rax
  struct _NDIS_FILTER_DRIVER_BLOCK *v19; // rsi
  NDIS_BIND_FILTER_DRIVER **v20; // r14
  size_t v21; // r8
  unsigned int Flags; // eax
  size_t Length; // r8
  wchar_t *v24; // rdx
  wchar_t *v25; // rax
  wchar_t *Buffer; // rdx
  unsigned int v27; // edx
  __int64 v28; // r8
  NDIS_BIND_FILTER_DRIVER **FilterDriver; // rax
  NDIS_BIND_FILTER_DRIVER *v30; // rbp
  NDIS_BIND_FILTER_DRIVER *v31; // rbx
  KIRQL v32; // al
  enum CallRunMode v33; // r8d
  NDIS_STATUS v35; // eax
  PVOID v36; // rbx
  size_t Size; // [rsp+40h] [rbp-68h] BYREF
  PVOID P; // [rsp+48h] [rbp-60h] BYREF
  GUID Guid; // [rsp+50h] [rbp-58h] BYREF

  P = FilterDriverContext;
  v4 = 1;
  LODWORD(Size) = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)FilterDriverContext,
      1u,
      0xAu,
      (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
      (char)DriverObject,
      &FilterDriverCharacteristics->FriendlyName.Length);
  ndisWaitForKernelObject(&ndisPnPMutex);
  FilterDriverRegistry = ndisValidateFilterDriverCharacteristicsHeader(
                           FilterDriverCharacteristics,
                           (unsigned int *)&Size);
  if ( FilterDriverRegistry )
  {
    if ( (byte_1C00EE582 & 4) != 0 )
      McTemplateK0zq_EtwWriteTransfer(
        v9,
        (unsigned int)&FilterRegistrationFailed,
        (_DWORD)DirectOidRequestHandler,
        FilterDriverCharacteristics->FriendlyName.Buffer,
        0);
  }
  else if ( FilterDriverCharacteristics->AttachHandler
         && FilterDriverCharacteristics->DetachHandler
         && FilterDriverCharacteristics->RestartHandler
         && FilterDriverCharacteristics->PauseHandler )
  {
    OidRequestHandler = FilterDriverCharacteristics->OidRequestHandler;
    v12 = FilterDriverCharacteristics->OidRequestCompleteHandler == 0LL;
    if ( v12 == (OidRequestHandler == 0LL) )
    {
      if ( !OidRequestHandler && FilterDriverCharacteristics->CancelOidRequestHandler )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            1u,
            0xDu,
            (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
            DriverObject);
        FilterDriverRegistry = -1073676283;
        if ( (byte_1C00EE582 & 4) != 0 )
          McTemplateK0zq_EtwWriteTransfer(
            v12,
            (unsigned int)&FilterRegistrationFailed,
            (_DWORD)DirectOidRequestHandler,
            FilterDriverCharacteristics->FriendlyName.Buffer,
            3);
        goto LABEL_39;
      }
      MajorNdisVersion = FilterDriverCharacteristics->MajorNdisVersion;
      if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && FilterDriverCharacteristics->MinorNdisVersion )
      {
        DirectOidRequestHandler = FilterDriverCharacteristics->DirectOidRequestHandler;
        v12 = FilterDriverCharacteristics->DirectOidRequestCompleteHandler == 0LL;
        if ( v12 != (DirectOidRequestHandler == 0LL) )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              1u,
              0xEu,
              (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
              DriverObject);
          FilterDriverRegistry = -1073676283;
          if ( (byte_1C00EE582 & 4) != 0 )
            McTemplateK0zq_EtwWriteTransfer(
              v12,
              (unsigned int)&FilterRegistrationFailed,
              (_DWORD)DirectOidRequestHandler,
              FilterDriverCharacteristics->FriendlyName.Buffer,
              4);
          goto LABEL_39;
        }
        if ( !DirectOidRequestHandler && FilterDriverCharacteristics->CancelDirectOidRequestHandler )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              1u,
              0xFu,
              (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
              DriverObject);
          FilterDriverRegistry = -1073676283;
          if ( (byte_1C00EE582 & 4) != 0 )
            McTemplateK0zq_EtwWriteTransfer(
              v12,
              (unsigned int)&FilterRegistrationFailed,
              (_DWORD)DirectOidRequestHandler,
              FilterDriverCharacteristics->FriendlyName.Buffer,
              5);
          goto LABEL_39;
        }
      }
      if ( !FilterDriverCharacteristics->SendNetBufferListsHandler
        && FilterDriverCharacteristics->CancelSendNetBufferListsHandler )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            1u,
            0x10u,
            (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
            DriverObject);
        FilterDriverRegistry = -1073676283;
        if ( (byte_1C00EE582 & 4) != 0 )
          McTemplateK0zq_EtwWriteTransfer(
            v12,
            (unsigned int)&FilterRegistrationFailed,
            (_DWORD)DirectOidRequestHandler,
            FilterDriverCharacteristics->FriendlyName.Buffer,
            6);
      }
      else
      {
        if ( MajorNdisVersion <= 6u && (MajorNdisVersion != 6 || FilterDriverCharacteristics->MinorNdisVersion < 0x28u) )
          v4 = 0;
        p_ServiceName = &FilterDriverCharacteristics->ServiceName;
        FilterDriverRegistry = ndisCreateFilterDriverRegistry(&FilterDriverCharacteristics->ServiceName, v4);
        if ( !FilterDriverRegistry )
        {
          if ( (FilterDriverCharacteristics->MajorNdisVersion > 6u
             || FilterDriverCharacteristics->MajorNdisVersion == 6
             && FilterDriverCharacteristics->MinorNdisVersion >= 0x32u)
            && (FilterDriverCharacteristics->Flags & 0xFFFFFFF8) != 0 )
          {
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(OidRequestHandler) = 2;
              WPP_RECORDER_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                (int)OidRequestHandler,
                1,
                17,
                (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
                FilterDriverCharacteristics->Flags);
            }
            FilterDriverRegistry = -1073741811;
          }
          else
          {
            v16 = p_ServiceName->Length + FilterDriverCharacteristics->UniqueName.Length;
            v17 = v16 + FilterDriverCharacteristics->FriendlyName.Length + 360;
            if ( v17 <= 0xFFFF )
            {
              Pool2 = ExAllocatePool2(64LL, v17, 1986413646);
              v19 = (struct _NDIS_FILTER_DRIVER_BLOCK *)Pool2;
              if ( !Pool2 )
              {
                FilterDriverRegistry = -1073741670;
                goto LABEL_39;
              }
              v20 = (NDIS_BIND_FILTER_DRIVER **)(Pool2 + 336);
              *(_QWORD *)(Pool2 + 336) = 0LL;
              *(_WORD *)Pool2 = 260;
              *(_WORD *)(Pool2 + 2) = v17;
              *(_QWORD *)(Pool2 + 16) = DriverObject;
              *(_QWORD *)(Pool2 + 32) = P;
              KeInitializeSpinLock((PKSPIN_LOCK)(Pool2 + 40));
              ndisInitializeRef(&v19->Ref, 5u);
              v21 = (unsigned int)Size;
              v19->DeviceList.Blink = &v19->DeviceList;
              v19->DeviceList.Flink = &v19->DeviceList;
              memmove(&v19->DefaultFilterCharacteristics, FilterDriverCharacteristics, v21);
              if ( v19->DefaultFilterCharacteristics.MajorNdisVersion <= 6u
                && (v19->DefaultFilterCharacteristics.MajorNdisVersion != 6
                 || v19->DefaultFilterCharacteristics.MinorNdisVersion < 0x32u) )
              {
                v19->DefaultFilterCharacteristics.Flags &= ~1u;
              }
              Flags = v19->DefaultFilterCharacteristics.Flags;
              Length = FilterDriverCharacteristics->FriendlyName.Length;
              v19->DefaultFilterCharacteristics.FriendlyName.Buffer = (wchar_t *)&v19[1].Header.Type;
              v24 = (wchar_t *)(&v19[1].Header.Type + Length);
              v19->Flags = Flags;
              v25 = (wchar_t *)((char *)v24 + FilterDriverCharacteristics->UniqueName.Length);
              v19->DefaultFilterCharacteristics.UniqueName.Buffer = v24;
              Buffer = FilterDriverCharacteristics->FriendlyName.Buffer;
              v19->DefaultFilterCharacteristics.ServiceName.Buffer = v25;
              memmove(&v19[1], Buffer, Length);
              RtlUpcaseUnicodeString(
                &v19->DefaultFilterCharacteristics.UniqueName,
                &FilterDriverCharacteristics->UniqueName,
                0);
              memmove(
                v19->DefaultFilterCharacteristics.ServiceName.Buffer,
                FilterDriverCharacteristics->ServiceName.Buffer,
                p_ServiceName->Length);
              Guid = 0LL;
              if ( RtlGUIDFromString(&FilterDriverCharacteristics->UniqueName, &Guid) < 0 )
              {
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_Z(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    2u,
                    1u,
                    0x13u,
                    (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
                    &FilterDriverCharacteristics->UniqueName.Length);
              }
              else
              {
                LOBYTE(v28) = 1;
                FilterDriver = (NDIS_BIND_FILTER_DRIVER **)ndisBindGetFilterDriver(&P, &Guid, v28);
                if ( v20 != FilterDriver )
                {
                  v30 = *FilterDriver;
                  *FilterDriver = 0LL;
                  v31 = *v20;
                  if ( *v20 && _InterlockedExchangeAdd((volatile signed __int32 *)&v31[1].DriverReady, 0xFFFFFFFF) == 1 )
                  {
                    NDIS_BIND_FILTER_DRIVER::~NDIS_BIND_FILTER_DRIVER(v31);
                    ExFreePoolWithTag(v31, 0x446C4642u);
                  }
                  *v20 = v30;
                }
                if ( P && _InterlockedExchangeAdd((volatile signed __int32 *)P + 16, 0xFFFFFFFF) == 1 )
                {
                  v36 = P;
                  NDIS_BIND_FILTER_DRIVER::~NDIS_BIND_FILTER_DRIVER((NDIS_BIND_FILTER_DRIVER *)P);
                  ExFreePoolWithTag(v36, 0x446C4642u);
                }
                if ( *v20 )
                {
                  *NdisFilterDriverHandle = v19;
                  if ( !FilterDriverCharacteristics->SetOptionsHandler
                    || (v35 = ndisFInvokeSetOptions(v19), (FilterDriverRegistry = v35) == 0) )
                  {
                    v32 = KeAcquireSpinLockRaiseToDpc(&ndisFilterDriverListLock);
                    v19->NextFilterDriver = ndisFilterDriverList;
                    ndisFilterDriverList = v19;
                    KeReleaseSpinLock(&ndisFilterDriverListLock, v32);
                    ObfReferenceObject(ndisDriverObject);
                    ndisQueryDriverImageName(&FilterDriverCharacteristics->ServiceName, &v19->ImageName);
                    ndisWriteDriverNDISVersionToServiceKey(
                      FilterDriverCharacteristics->MajorNdisVersion,
                      FilterDriverCharacteristics->MinorNdisVersion,
                      1,
                      FilterDriverCharacteristics->MajorDriverVersion,
                      FilterDriverCharacteristics->MinorDriverVersion,
                      &FilterDriverCharacteristics->ServiceName);
                    FilterDriverRegistry = 0;
                    NDIS_BIND_FILTER_DRIVER::SetRunningDriver(*v20, v19, v33);
                    goto LABEL_39;
                  }
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v27) = 2;
                    WPP_RECORDER_SF_d(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      v27,
                      1,
                      21,
                      (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
                      v35);
                  }
                  *NdisFilterDriverHandle = 0LL;
                  goto LABEL_91;
                }
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v27) = 2;
                  WPP_RECORDER_SF__guid_(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v27,
                    1,
                    20,
                    (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
                    (__int64)&Guid);
                }
              }
              FilterDriverRegistry = -1073741823;
LABEL_91:
              _NDIS_FILTER_DRIVER_BLOCK::`scalar deleting destructor'(v19, v27);
              ExFreePoolWithTag(v19, 0);
              goto LABEL_39;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                2u,
                1u,
                0x12u,
                (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
                DriverObject);
            FilterDriverRegistry = -1073741811;
            if ( (byte_1C00EE582 & 4) != 0 )
              McTemplateK0zq_EtwWriteTransfer(
                v16,
                (unsigned int)&FilterRegistrationFailed,
                v15,
                FilterDriverCharacteristics->FriendlyName.Buffer,
                7);
          }
        }
      }
    }
    else
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0xCu,
          (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
          DriverObject);
      FilterDriverRegistry = -1073676283;
      if ( (byte_1C00EE582 & 4) != 0 )
        McTemplateK0zq_EtwWriteTransfer(
          v12,
          (unsigned int)&FilterRegistrationFailed,
          (_DWORD)DirectOidRequestHandler,
          FilterDriverCharacteristics->FriendlyName.Buffer,
          2);
    }
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xBu,
        (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
        DriverObject);
    FilterDriverRegistry = -1073676283;
    if ( (byte_1C00EE582 & 4) != 0 )
      McTemplateK0zq_EtwWriteTransfer(
        v9,
        (unsigned int)&FilterRegistrationFailed,
        (_DWORD)DirectOidRequestHandler,
        FilterDriverCharacteristics->FriendlyName.Buffer,
        1);
  }
LABEL_39:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(OidRequestHandler) = 4;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)OidRequestHandler,
      1,
      22,
      (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
      FilterDriverRegistry);
  }
  KeReleaseMutex(&ndisPnPMutex, 0);
  return FilterDriverRegistry;
}
