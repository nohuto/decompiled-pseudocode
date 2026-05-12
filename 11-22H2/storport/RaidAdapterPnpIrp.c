/*
 * XREFs of RaidAdapterPnpIrp @ 0x1C0015794
 * Callers:
 *     RaDriverPnpIrp @ 0x1C0007940 (RaDriverPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C0007534 (RaidAcquireAdapterRemoveLock.c)
 *     RaForwardIrp @ 0x1C0013754 (RaForwardIrp.c)
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x1C0013A68 (RaidAdapterDeviceUsageNotificationIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0015938 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x1C0032248 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pddp_EtwWriteTransfer @ 0x1C0032348 (McTemplateK0pddp_EtwWriteTransfer.c)
 *     RaidAdapterQueryIdIrp @ 0x1C0036F5C (RaidAdapterQueryIdIrp.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C0036FF0 (RaidAdapterQueryInterfaceIrp.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C003993C (RaidAdapterStartDeviceIrp.c)
 *     WPP_SF_qqD @ 0x1C003EAF4 (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C003EB54 (WPP_SF_qqDD.c)
 *     RaidAdapterQueryPnpDeviceStateIrp @ 0x1C00A00DC (RaidAdapterQueryPnpDeviceStateIrp.c)
 *     RaidAdapterQueryCapabilitiesIrp @ 0x1C00A023C (RaidAdapterQueryCapabilitiesIrp.c)
 *     RaidAdapterCancelRemoveDeviceIrp @ 0x1C00A52A0 (RaidAdapterCancelRemoveDeviceIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C00A6210 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterQueryRemoveDeviceIrp @ 0x1C00A6C04 (RaidAdapterQueryRemoveDeviceIrp.c)
 *     RaidAdapterQueryStopDeviceIrp @ 0x1C00A6CA4 (RaidAdapterQueryStopDeviceIrp.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C00A6FD4 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C00A711C (RaidAdapterStopDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00A73DC (RaidAdapterSurpriseRemovalIrp.c)
 */

__int64 __fastcall RaidAdapterPnpIrp(__int64 a1, PIRP Irp)
{
  char v4; // r14
  int v5; // edx
  signed int v6; // esi
  unsigned int MinorFunction; // ebp
  int v8; // ecx
  int v9; // eax
  unsigned int InterfaceIrp; // eax
  unsigned int v11; // esi
  __int64 v13; // rcx
  __int128 v14; // [rsp+40h] [rbp-58h] BYREF
  __int128 v15; // [rsp+50h] [rbp-48h] BYREF

  v14 = 0LL;
  v4 = 0;
  v6 = RaidAcquireAdapterRemoveLock(a1);
  MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(Irp, &v14);
    if ( MinorFunction > 0x16 || (v9 = 4718720, !_bittest(&v9, MinorFunction)) )
    {
      if ( (byte_1C0092A02 & 0x20) != 0 )
        McTemplateK0pddp_EtwWriteTransfer(
          v8,
          v5,
          (unsigned int)&v14,
          (_DWORD)Irp,
          MinorFunction,
          0,
          *(_QWORD *)(a1 + 8));
    }
  }
  if ( v6 < 0 )
  {
    if ( v6 != -1073741738 || MinorFunction != 2 && MinorFunction != 20 || *(_DWORD *)(a1 + 88) != 5 )
    {
      Irp->IoStatus.Information = 0LL;
      return RaidCompleteRequestEx(Irp, 0, v6);
    }
  }
  else
  {
    v4 = 1;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      12LL,
      &WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
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
        if ( StorEtwLoggingEnabled && (byte_1C0092A02 & 0x20) != 0 )
          McTemplateK0pddp_EtwWriteTransfer(
            Irp->Tail.Overlay.CurrentStackLocation,
            v5,
            (unsigned int)&v14,
            (_DWORD)Irp,
            MinorFunction,
            Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length,
            *(_QWORD *)(a1 + 8));
        InterfaceIrp = RaidAdapterQueryIdIrp(a1, Irp);
        break;
      case 0x14u:
        InterfaceIrp = RaidAdapterQueryPnpDeviceStateIrp(a1, Irp);
        break;
      case 0x16u:
        if ( StorEtwLoggingEnabled && (byte_1C0092A02 & 0x20) != 0 )
          McTemplateK0pddp_EtwWriteTransfer(
            Irp->Tail.Overlay.CurrentStackLocation,
            v5,
            (unsigned int)&v14,
            (_DWORD)Irp,
            MinorFunction,
            Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options,
            *(_QWORD *)(a1 + 8));
        InterfaceIrp = RaidAdapterDeviceUsageNotificationIrp(a1, Irp);
        break;
      case 0x17u:
        v4 = 0;
        InterfaceIrp = RaidAdapterSurpriseRemovalIrp(a1, Irp);
        break;
      default:
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 296));
        v4 = 0;
        if ( StorEtwLoggingEnabled )
        {
          v15 = 0LL;
          IoGetActivityIdIrp(Irp, &v15);
          if ( (byte_1C0092A02 & 0x20) != 0 )
            McTemplateK0pd_EtwWriteTransfer(v13, &EventPnpRequestComplete, &v15, Irp, Irp->IoStatus.Status);
        }
        InterfaceIrp = RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), Irp);
        break;
    }
    goto LABEL_14;
  }
  if ( MinorFunction == 7 )
  {
    if ( StorEtwLoggingEnabled && (byte_1C0092A02 & 0x20) != 0 )
      McTemplateK0pddp_EtwWriteTransfer(
        Irp->Tail.Overlay.CurrentStackLocation,
        v5,
        (unsigned int)&v14,
        (_DWORD)Irp,
        7,
        Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length,
        *(_QWORD *)(a1 + 8));
    InterfaceIrp = RaidAdapterQueryDeviceRelationsIrp(a1, Irp);
    goto LABEL_14;
  }
  if ( MinorFunction )
  {
    switch ( MinorFunction )
    {
      case 1u:
        InterfaceIrp = RaidAdapterQueryRemoveDeviceIrp(a1, Irp);
        break;
      case 2u:
        v4 = 0;
        InterfaceIrp = RaidAdapterRemoveDeviceIrp(a1, Irp);
        break;
      case 3u:
        goto LABEL_46;
      case 4u:
        InterfaceIrp = RaidAdapterStopDeviceIrp(a1, Irp);
        break;
      case 5u:
        InterfaceIrp = RaidAdapterQueryStopDeviceIrp(a1, Irp);
        break;
      default:
LABEL_46:
        InterfaceIrp = RaidAdapterCancelRemoveDeviceIrp(a1, Irp);
        break;
    }
  }
  else
  {
    InterfaceIrp = RaidAdapterStartDeviceIrp(a1, Irp);
  }
LABEL_14:
  v11 = InterfaceIrp;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      13LL,
      &WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
      a1,
      Irp,
      MinorFunction,
      InterfaceIrp);
  }
  if ( v4 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 296));
  return v11;
}
