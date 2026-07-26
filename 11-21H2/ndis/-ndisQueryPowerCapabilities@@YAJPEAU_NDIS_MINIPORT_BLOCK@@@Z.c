/*
 * XREFs of ?ndisQueryPowerCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00330B8
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C013FE7C (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     NdisWriteErrorLogEntry @ 0x1C0064690 (NdisWriteErrorLogEntry.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C01010E0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisQueryPowerCapabilities(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // ebx
  PIRP Irp; // rsi
  _IO_STACK_LOCATION *v4; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v6; // ecx
  int v7; // edx
  __int128 v8; // xmm3
  __int128 v9; // xmm2
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int64 v13; // rax
  PULONG RequiredSize; // [rsp+30h] [rbp-59h]
  _BYTE Data[4]; // [rsp+40h] [rbp-49h] BYREF
  ULONG Type; // [rsp+44h] [rbp-45h] BYREF
  ULONG v17; // [rsp+48h] [rbp-41h] BYREF
  _BYTE Event[32]; // [rsp+50h] [rbp-39h] BYREF
  _OWORD v19[4]; // [rsp+70h] [rbp-19h] BYREF

  v2 = 0;
  memset(v19, 0, sizeof(v19));
  v17 = 0;
  Type = 0;
  memset(Event, 0, sizeof(Event));
  Data[0] = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0xDu,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      a1);
  a1->PnPFlags &= ~1u;
  if ( a1->NextDeviceObject )
  {
    if ( IoGetDevicePropertyData(
           a1->PhysicalDeviceObject,
           &DEVPKEY_PciDevice_S0WakeupSupported,
           0,
           0,
           1u,
           Data,
           &v17,
           &Type) >= 0
      && Type == 17 )
    {
      a1->S0WakeupSupported = Data[0] != 0;
    }
    Irp = IoAllocateIrp(a1->NextDeviceObject->StackSize + 1, 0);
    if ( Irp )
    {
      LODWORD(v19[0]) = 65600;
      *((_QWORD *)&v19[0] + 1) = -1LL;
      v4 = Irp->Tail.Overlay.CurrentStackLocation - 1;
      memset(v4, 0, sizeof(_IO_STACK_LOCATION));
      *(_WORD *)&v4->MajorFunction = 2331;
      v4->Parameters.WMI.ProviderId = (unsigned __int64)v19;
      Irp->IoStatus.Status = -1073741637;
      KeInitializeEvent((PRKEVENT)Event, NotificationEvent, 0);
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisCompletionRoutine;
      CurrentStackLocation[-1].Context = Event;
      CurrentStackLocation[-1].Control = -32;
      v2 = IofCallDriver(a1->NextDeviceObject, Irp);
      if ( v2 == 259 )
        ndisWaitForKernelObject(Event);
      if ( *(int *)&Event[24] < 0 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(RequiredSize) = *(_DWORD *)&Event[24];
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xEu,
            0xFu,
            (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
            (char)a1,
            RequiredSize);
        }
        goto LABEL_13;
      }
      if ( (a1->DriverHandle->MiniportDriverCharacteristics.Flags & 8) != 0 )
      {
        v6 = 4;
        DWORD1(v19[0]) |= 0x3C00u;
        LODWORD(v19[3]) = 4;
        *(__m128i *)((char *)&v19[1] + 8) = _mm_load_si128((const __m128i *)&_xmm);
        v7 = 6;
        *((_QWORD *)&v19[2] + 1) = (unsigned int)_mm_cvtsi128_si32(*(__m128i *)((char *)&v19[1] + 8)) | 0x600000000LL;
      }
      else
      {
        v6 = v19[3];
        v7 = HIDWORD(v19[2]);
      }
      v8 = v19[0];
      v9 = v19[1];
      v10 = v19[2];
      v11 = v19[3];
      *(_OWORD *)&a1->DeviceCaps.Size = v19[0];
      *(_OWORD *)&a1->OriginalDeviceCaps.Size = v8;
      *(_OWORD *)a1->DeviceCaps.DeviceState = v9;
      *(_OWORD *)a1->OriginalDeviceCaps.DeviceState = v9;
      *(_OWORD *)&a1->DeviceCaps.DeviceState[4] = v10;
      *(_OWORD *)&a1->OriginalDeviceCaps.DeviceState[4] = v10;
      *(_OWORD *)&a1->DeviceCaps.DeviceWake = v11;
      *(_OWORD *)&a1->OriginalDeviceCaps.DeviceWake = v11;
      if ( a1->BusType == Isa )
      {
        if ( !v6 || !v7 )
          goto LABEL_13;
      }
      else
      {
        v13 = 2LL;
        while ( !*((_DWORD *)&v19[1] + v13) )
        {
          if ( ++v13 >= 7 )
            goto LABEL_13;
        }
      }
      a1->PnPFlags |= 1u;
LABEL_13:
      IoFreeIrp(Irp);
      goto LABEL_14;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0xEu,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        a1);
    NdisWriteErrorLogEntry(a1, 0xC0001389, 0);
    v2 = -1073741670;
  }
LABEL_14:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(RequiredSize) = v2;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x10u,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a1,
      RequiredSize);
  }
  return v2;
}
