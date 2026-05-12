/*
 * XREFs of RaUnitPnpIrp @ 0x1C00076A0
 * Callers:
 *     RaDriverPnpIrp @ 0x1C0007940 (RaDriverPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0007014 (RaUnitAcquireRemoveLock.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00070DC (RaUnitReleaseRemoveLock.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C00133C4 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitQueryInterfaceIrp @ 0x1C002042C (RaUnitQueryInterfaceIrp.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C00216F4 (RaUnitRemoveDeviceIrp.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0pddp_EtwWriteTransfer @ 0x1C0032348 (McTemplateK0pddp_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x1C003EAF4 (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C003EB54 (WPP_SF_qqDD.c)
 *     RaUnitQueryDeviceRelationsIrp @ 0x1C009FDE4 (RaUnitQueryDeviceRelationsIrp.c)
 *     RaUnitQueryPnpDeviceStateIrp @ 0x1C00A0A34 (RaUnitQueryPnpDeviceStateIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C00A0A94 (RaUnitQueryCapabilitiesIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C00A1444 (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1C00A15D8 (RaUnitStartDeviceIrp.c)
 *     RaUnitQueryIdIrp @ 0x1C00A238C (RaUnitQueryIdIrp.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C00A245C (RaUnitQueryDeviceTextIrp.c)
 *     RaUnitIgnorePnpIrp @ 0x1C00A3098 (RaUnitIgnorePnpIrp.c)
 *     RaUnitSucceedPnpIrp @ 0x1C00A38A4 (RaUnitSucceedPnpIrp.c)
 *     RaUnitCancelStopDeviceIrp @ 0x1C00A9724 (RaUnitCancelStopDeviceIrp.c)
 *     RaUnitQueryRemoveDeviceIrp @ 0x1C00A9754 (RaUnitQueryRemoveDeviceIrp.c)
 *     RaUnitQueryStopDeviceIrp @ 0x1C00A97A0 (RaUnitQueryStopDeviceIrp.c)
 *     RaUnitStopDeviceIrp @ 0x1C00A97D8 (RaUnitStopDeviceIrp.c)
 */

__int64 __fastcall RaUnitPnpIrp(__int64 a1, IRP *a2, __int64 a3)
{
  char v3; // r14
  int v6; // edx
  signed int v7; // edi
  unsigned int MinorFunction; // ebp
  int v9; // ecx
  int v10; // eax
  PDEVICE_OBJECT v11; // rcx
  unsigned int DeviceTextIrp; // eax
  unsigned int v13; // edi
  __int128 v15; // [rsp+40h] [rbp-48h] BYREF

  v3 = 1;
  LOBYTE(a3) = 1;
  v15 = 0LL;
  v7 = RaUnitAcquireRemoveLock(a1, (__int64)a2, a3);
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, &v15);
    if ( MinorFunction > 0x16 || (v10 = 4718720, !_bittest(&v10, MinorFunction)) )
    {
      if ( (byte_1C0092A02 & 0x20) != 0 )
        McTemplateK0pddp_EtwWriteTransfer(v9, v6, (unsigned int)&v15, (_DWORD)a2, MinorFunction, 0, *(_QWORD *)(a1 + 8));
    }
  }
  if ( v7 < 0 )
  {
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2, 0, v7);
  }
  v11 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &WPP_aacce2c5c88a3640487a3f62f1d3f691_Traceguids,
      a1,
      a2,
      MinorFunction);
  }
  if ( MinorFunction > 0xB )
  {
    if ( MinorFunction <= 0x12 )
    {
      if ( MinorFunction == 12 )
      {
        DeviceTextIrp = RaUnitQueryDeviceTextIrp(a1, a2);
        goto LABEL_16;
      }
    }
    else
    {
      if ( MinorFunction == 19 )
      {
        if ( StorEtwLoggingEnabled && (byte_1C0092A02 & 0x20) != 0 )
          McTemplateK0pddp_EtwWriteTransfer(
            a2->Tail.Overlay.CurrentStackLocation,
            v6,
            (unsigned int)&v15,
            (_DWORD)a2,
            19,
            a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length,
            *(_QWORD *)(a1 + 8));
        DeviceTextIrp = RaUnitQueryIdIrp(a1, a2);
        goto LABEL_16;
      }
      if ( MinorFunction == 20 )
      {
        DeviceTextIrp = RaUnitQueryPnpDeviceStateIrp(a1, a2);
        goto LABEL_16;
      }
      if ( MinorFunction != 21 )
      {
        if ( MinorFunction == 22 )
        {
          if ( StorEtwLoggingEnabled && (byte_1C0092A02 & 0x20) != 0 )
            McTemplateK0pddp_EtwWriteTransfer(
              a2->Tail.Overlay.CurrentStackLocation,
              v6,
              (unsigned int)&v15,
              (_DWORD)a2,
              MinorFunction,
              a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options,
              *(_QWORD *)(a1 + 8));
          DeviceTextIrp = RaUnitDeviceUsageNotificationIrp(a1, a2);
          goto LABEL_16;
        }
        if ( MinorFunction == 23 )
        {
          DeviceTextIrp = RaUnitSurpriseRemovalIrp(a1, a2);
          goto LABEL_47;
        }
      }
    }
    DeviceTextIrp = RaUnitIgnorePnpIrp(v11, a2);
    goto LABEL_16;
  }
  if ( MinorFunction == 11 )
  {
LABEL_38:
    DeviceTextIrp = RaUnitSucceedPnpIrp(v11, a2);
    goto LABEL_16;
  }
  if ( MinorFunction > 5 )
  {
    if ( MinorFunction != 6 )
    {
      switch ( MinorFunction )
      {
        case 7u:
          if ( StorEtwLoggingEnabled && (byte_1C0092A02 & 0x20) != 0 )
            McTemplateK0pddp_EtwWriteTransfer(
              a2->Tail.Overlay.CurrentStackLocation,
              v6,
              (unsigned int)&v15,
              (_DWORD)a2,
              MinorFunction,
              a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length,
              *(_QWORD *)(a1 + 8));
          DeviceTextIrp = RaUnitQueryDeviceRelationsIrp(a1, a2);
          goto LABEL_16;
        case 8u:
          DeviceTextIrp = RaUnitQueryInterfaceIrp(a1, a2);
          goto LABEL_16;
        case 9u:
          DeviceTextIrp = RaUnitQueryCapabilitiesIrp(a1, a2);
          goto LABEL_16;
      }
      goto LABEL_38;
    }
LABEL_59:
    DeviceTextIrp = RaUnitCancelStopDeviceIrp(a1, a2);
    goto LABEL_16;
  }
  switch ( MinorFunction )
  {
    case 5u:
      DeviceTextIrp = RaUnitQueryStopDeviceIrp(a1, a2);
      break;
    case 0u:
      DeviceTextIrp = RaUnitStartDeviceIrp(a1, a2);
      break;
    case 1u:
      DeviceTextIrp = RaUnitQueryRemoveDeviceIrp(a1, a2);
      break;
    case 2u:
      DeviceTextIrp = RaUnitRemoveDeviceIrp(a1, a2);
LABEL_47:
      v3 = 0;
      break;
    case 3u:
      goto LABEL_59;
    default:
      DeviceTextIrp = RaUnitStopDeviceIrp(a1, a2);
      break;
  }
LABEL_16:
  v13 = DeviceTextIrp;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      11LL,
      &WPP_aacce2c5c88a3640487a3f62f1d3f691_Traceguids,
      a1,
      a2,
      MinorFunction,
      DeviceTextIrp);
  }
  if ( v3 )
    RaUnitReleaseRemoveLock(a1);
  return v13;
}
