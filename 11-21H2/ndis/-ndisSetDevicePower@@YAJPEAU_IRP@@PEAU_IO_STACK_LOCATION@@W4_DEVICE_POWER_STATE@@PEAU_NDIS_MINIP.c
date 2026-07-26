/*
 * XREFs of ?ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014FF8
 * Callers:
 *     ?ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014AF0 (-ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0014100 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0014380 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0014F58 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_LqZ @ 0x1C0015328 (WPP_RECORDER_SF_LqZ.c)
 *     ?ndisCancelWakeUpDpcTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015420 (-ndisCancelWakeUpDpcTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWaitForResetCompletion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00154AC (-ndisWaitForResetCompletion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qDL @ 0x1C0018A58 (WPP_RECORDER_SF_qDL.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0020738 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C005F2C0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x1C007D134 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C0103E70 (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C010C274 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C010C570 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisSetPowerResume@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012D23C (-ndisSetPowerResume@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetPowerSuspend@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012D2C4 (-ndisSetPowerSuspend@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0139F48 (-ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisSetDevicePower(
        PIRP Irp,
        struct _IO_STACK_LOCATION *a2,
        enum _NDIS_DEVICE_POWER_STATE a3,
        struct _NDIS_MINIPORT_BLOCK *a4)
{
  struct _NDIS_SELECTIVE_SUSPEND *v8; // rbx
  unsigned int PnPFlags; // eax
  _IO_STACK_LOCATION *v10; // rax
  _IO_STACK_LOCATION *v11; // rax
  unsigned int v12; // ebx
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v16; // rax
  KIRQL v17; // al
  unsigned int SetMiniportDeviceState; // eax
  int v20; // edx
  int v21; // ecx
  unsigned int InterlockedFlags; // eax
  unsigned int v23; // ett
  struct _IO_STACK_LOCATION *v24; // rdx
  KIRQL v25; // al

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      a3,
      100,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      a3,
      (char)a4,
      (__int64)a4->pAdapterInstanceName);
  if ( (byte_1C00EE581 & 8) != 0 )
    McTemplateK0jqxqq_EtwWriteTransfer();
  if ( a3 == NdisDeviceStateD0 )
  {
    if ( a4->AoAc )
      *((_QWORD *)a4->AoAc + 136) = KeQueryUnbiasedInterruptTime();
    _m_prefetchw(&a4->InterlockedFlags);
    if ( (_InterlockedAnd((volatile signed __int32 *)&a4->InterlockedFlags, 0xFFFFFFFD) & 2) != 0 )
    {
      SelectiveSuspend = a4->SelectiveSuspend;
      if ( SelectiveSuspend )
      {
        v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a4->SelectiveSuspend);
        if ( (*((_DWORD *)SelectiveSuspend + 126) & 0x120) == 0x20 )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v25);
          return (unsigned int)ndisSetPowerResume(Irp, v24, a4);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v25);
      }
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      v16 = Irp->Tail.Overlay.CurrentStackLocation;
      v16[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisSetDevicePowerOnComplete;
      v16[-1].Context = a4;
      v16[-1].Control = -32;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x65u,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          a4);
      goto LABEL_24;
    }
    goto LABEL_51;
  }
  if ( (unsigned int)(a3 - 2) > 2 )
  {
    v12 = -1073741811;
    goto LABEL_49;
  }
  _m_prefetchw(&a4->InterlockedFlags);
  if ( (_InterlockedAnd((volatile signed __int32 *)&a4->InterlockedFlags, 0xFFFFFFFB) & 4) == 0 )
  {
LABEL_51:
    _InterlockedOr((volatile signed __int32 *)&a4->InterlockedFlags, 8u);
    Irp->IoStatus.Status = 0;
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(a4->NextDeviceObject, Irp);
  }
  v8 = a4->SelectiveSuspend;
  if ( v8 )
  {
    v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a4->SelectiveSuspend);
    if ( (*((_DWORD *)v8 + 126) & 0x108) != 8 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v8, v17);
      goto LABEL_9;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v8, v17);
    return (unsigned int)ndisSetPowerSuspend(Irp, a2, a4);
  }
LABEL_9:
  if ( ndisIsMiniportStarted(a4) && a4->PnPDeviceState == NdisPnPDeviceStarted )
  {
    PnPFlags = a4->PnPFlags;
    if ( (PnPFlags & 0x800) == 0 )
    {
      KeClearEvent(&a4->OpenReadyEvent.Event);
      ndisPrepForLowPower(a4, a3);
      PnPFlags = a4->PnPFlags;
    }
    if ( (PnPFlags & 0x20) == 0 )
    {
      if ( (a4->DriverHandle->Flags & 1) == 0 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xEu,
            0x68u,
            (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
            a4);
        if ( (byte_1C00EE583 & 4) != 0 )
          McTemplateK0jqxd_EtwWriteTransfer();
        if ( (a4->PnPFlags & 0x100) == 0 )
        {
          Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(&a4->MiniportOwner);
          ndisPmHaltMiniport(a4);
          Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Acquire(&a4->MiniportOwner, 1LL);
        }
      }
      goto LABEL_21;
    }
    ndisCancelWakeUpDpcTimer(a4);
    ndisWaitForResetCompletion(a4);
    if ( _bittest((const signed __int32 *)&a4->PnPFlags, 0xBu) )
    {
      ndisSetDeviceInterfaceState(a4, 0);
      _InterlockedOr((volatile signed __int32 *)&a4->InterlockedFlags, 0x10u);
    }
    SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(a4, (enum _DEVICE_POWER_STATE)a3, 0xFD010101, 1u);
    v12 = SetMiniportDeviceState;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v20,
        14,
        102,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)a4,
        a3,
        SetMiniportDeviceState);
    if ( !v12 )
      goto LABEL_21;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x67u,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        a4);
    if ( (byte_1C00EE583 & 0x40) != 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        v21,
        (unsigned int)&PowerDownFailed,
        (_DWORD)a4 + 4008,
        (_DWORD)a4 + 4008,
        a4->IfIndex,
        a4->NetLuid.Value,
        v12,
        1,
        0);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(&a4->MiniportOwner);
    _m_prefetchw(&a4->InterlockedFlags);
    InterlockedFlags = a4->InterlockedFlags;
    do
    {
      v23 = InterlockedFlags;
      InterlockedFlags = _InterlockedCompareExchange(
                           (volatile signed __int32 *)&a4->InterlockedFlags,
                           InterlockedFlags,
                           InterlockedFlags);
    }
    while ( v23 != InterlockedFlags );
    if ( (InterlockedFlags & 0x10) != 0 )
    {
      ndisSetDeviceInterfaceState(a4, 1u);
      _InterlockedAnd((volatile signed __int32 *)&a4->InterlockedFlags, 0xFFFFFFEF);
    }
LABEL_49:
    Irp->IoStatus.Status = v12;
    IofCompleteRequest(Irp, 0);
    return v12;
  }
LABEL_21:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x69u,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      a4);
  v10 = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v10[-1].MajorFunction = *(_OWORD *)&v10->MajorFunction;
  *(_OWORD *)&v10[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v10->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)&v10[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&v10->Parameters.ReadWriteConfig.Length;
  v10[-1].FileObject = v10->FileObject;
  v10[-1].Control = 0;
  v11 = Irp->Tail.Overlay.CurrentStackLocation;
  v11[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisSetDevicePowerDownComplete;
  v11[-1].Context = a4;
  v11[-1].Control = -32;
LABEL_24:
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  IofCallDriver(a4->NextDeviceObject, Irp);
  return 259;
}
