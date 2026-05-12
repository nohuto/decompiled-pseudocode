/*
 * XREFs of RaidAdapterPnpIrp @ 0x1C001A098
 * Callers:
 *     RaDriverPnpIrp @ 0x1C000CC90 (RaDriverPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C000BA44 (RaidAcquireAdapterRemoveLock.c)
 *     RaForwardIrp @ 0x1C0017FB8 (RaForwardIrp.c)
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x1C0018244 (RaidAdapterDeviceUsageNotificationIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C001A238 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x1C0031C04 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pddp_EtwWriteTransfer @ 0x1C0031D04 (McTemplateK0pddp_EtwWriteTransfer.c)
 *     RaidAdapterQueryIdIrp @ 0x1C0035CFC (RaidAdapterQueryIdIrp.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C0035D90 (RaidAdapterQueryInterfaceIrp.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0038428 (RaidAdapterStartDeviceIrp.c)
 *     WPP_SF_qqD @ 0x1C003C760 (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C003C7C0 (WPP_SF_qqDD.c)
 *     RaidAdapterQueryPnpDeviceStateIrp @ 0x1C00866F4 (RaidAdapterQueryPnpDeviceStateIrp.c)
 *     RaidAdapterQueryCapabilitiesIrp @ 0x1C0086854 (RaidAdapterQueryCapabilitiesIrp.c)
 *     RaidAdapterCancelRemoveDeviceIrp @ 0x1C008BBA8 (RaidAdapterCancelRemoveDeviceIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C008C490 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterQueryRemoveDeviceIrp @ 0x1C008C710 (RaidAdapterQueryRemoveDeviceIrp.c)
 *     RaidAdapterQueryStopDeviceIrp @ 0x1C008C7B0 (RaidAdapterQueryStopDeviceIrp.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C008CA88 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C008CBD0 (RaidAdapterStopDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C008CE90 (RaidAdapterSurpriseRemovalIrp.c)
 */

__int64 __fastcall RaidAdapterPnpIrp(__int64 a1, PIRP Irp)
{
  int v4; // edx
  signed int v5; // esi
  unsigned int MinorFunction; // ebp
  int v7; // ecx
  int v8; // eax
  char v9; // r14
  unsigned int InterfaceIrp; // eax
  unsigned int v11; // esi
  __int64 v13; // rcx
  __int128 v14; // [rsp+40h] [rbp-58h] BYREF
  __int128 v15; // [rsp+50h] [rbp-48h] BYREF

  v14 = 0LL;
  v5 = RaidAcquireAdapterRemoveLock(a1);
  MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(Irp, &v14);
    if ( MinorFunction > 0x16 || (v8 = 4718720, !_bittest(&v8, MinorFunction)) )
    {
      if ( (byte_1C00799E2 & 0x20) != 0 )
        McTemplateK0pddp_EtwWriteTransfer(
          v7,
          v4,
          (unsigned int)&v14,
          (_DWORD)Irp,
          MinorFunction,
          0,
          *(_QWORD *)(a1 + 8));
    }
  }
  if ( v5 < 0 && (v5 != -1073741738 || MinorFunction != 2 || *(_DWORD *)(a1 + 88) != 5) )
  {
    Irp->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(Irp, 0, v5);
  }
  v9 = 1;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      12LL,
      &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids,
      a1,
      Irp,
      MinorFunction);
  }
  if ( MinorFunction > 7 )
  {
    switch ( MinorFunction )
    {
      case 8u:
        InterfaceIrp = RaidAdapterQueryInterfaceIrp(a1, Irp);
        break;
      case 9u:
        InterfaceIrp = RaidAdapterQueryCapabilitiesIrp(a1, Irp);
        break;
      case 0xDu:
        InterfaceIrp = RaidAdapterFilterResourceRequirementsIrp(a1, Irp);
        break;
      case 0x13u:
        if ( StorEtwLoggingEnabled && (byte_1C00799E2 & 0x20) != 0 )
          McTemplateK0pddp_EtwWriteTransfer(
            Irp->Tail.Overlay.CurrentStackLocation,
            v4,
            (unsigned int)&v14,
            (_DWORD)Irp,
            19,
            Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length,
            *(_QWORD *)(a1 + 8));
        InterfaceIrp = RaidAdapterQueryIdIrp(a1, Irp);
        break;
      case 0x14u:
        InterfaceIrp = RaidAdapterQueryPnpDeviceStateIrp(a1, Irp);
        break;
      case 0x16u:
        if ( StorEtwLoggingEnabled && (byte_1C00799E2 & 0x20) != 0 )
          McTemplateK0pddp_EtwWriteTransfer(
            Irp->Tail.Overlay.CurrentStackLocation,
            v4,
            (unsigned int)&v14,
            (_DWORD)Irp,
            22,
            Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options,
            *(_QWORD *)(a1 + 8));
        InterfaceIrp = RaidAdapterDeviceUsageNotificationIrp(a1, Irp);
        break;
      case 0x17u:
        v9 = 0;
        InterfaceIrp = RaidAdapterSurpriseRemovalIrp(a1, Irp);
        break;
      default:
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 296));
        v9 = 0;
        if ( StorEtwLoggingEnabled )
        {
          v15 = 0LL;
          IoGetActivityIdIrp(Irp, &v15);
          if ( (byte_1C00799E2 & 0x20) != 0 )
            McTemplateK0pd_EtwWriteTransfer(v13, &EventPnpRequestComplete, &v15, Irp, Irp->IoStatus.Status);
        }
        InterfaceIrp = RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), Irp);
        break;
    }
    goto LABEL_13;
  }
  if ( MinorFunction == 7 )
  {
    if ( StorEtwLoggingEnabled && (byte_1C00799E2 & 0x20) != 0 )
      McTemplateK0pddp_EtwWriteTransfer(
        Irp->Tail.Overlay.CurrentStackLocation,
        v4,
        (unsigned int)&v14,
        (_DWORD)Irp,
        7,
        Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length,
        *(_QWORD *)(a1 + 8));
    InterfaceIrp = RaidAdapterQueryDeviceRelationsIrp(a1, Irp);
    goto LABEL_13;
  }
  if ( MinorFunction )
  {
    switch ( MinorFunction )
    {
      case 1u:
        InterfaceIrp = RaidAdapterQueryRemoveDeviceIrp(a1, Irp);
        break;
      case 2u:
        v9 = 0;
        InterfaceIrp = RaidAdapterRemoveDeviceIrp(a1, Irp);
        break;
      case 3u:
        goto LABEL_44;
      case 4u:
        InterfaceIrp = RaidAdapterStopDeviceIrp(a1, Irp);
        break;
      case 5u:
        InterfaceIrp = RaidAdapterQueryStopDeviceIrp(a1, Irp);
        break;
      default:
LABEL_44:
        InterfaceIrp = RaidAdapterCancelRemoveDeviceIrp(a1, Irp);
        break;
    }
  }
  else
  {
    InterfaceIrp = RaidAdapterStartDeviceIrp(a1, Irp);
  }
LABEL_13:
  v11 = InterfaceIrp;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      13LL,
      &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids,
      a1,
      Irp,
      MinorFunction,
      InterfaceIrp);
  }
  if ( v9 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 296));
  return v11;
}
