/*
 * XREFs of ?ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0016418
 * Callers:
 *     ?ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015ED8 (-ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     McTemplateK0jqxq_EtwWriteTransfer @ 0x1C0006968 (McTemplateK0jqxq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisCancelWakeUpDpcTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00148B4 (-ndisCancelWakeUpDpcTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWaitForResetCompletion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014940 (-ndisWaitForResetCompletion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0016378 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_LqZ @ 0x1C0016750 (WPP_RECORDER_SF_LqZ.c)
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0016848 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C00184D8 (WPP_RECORDER_SF_qLL.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002293C (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C00643A0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x1C0082660 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C0110380 (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C01174D4 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C01178D0 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisSetPowerResume@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0139030 (-ndisSetPowerResume@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetPowerSuspend@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01390B8 (-ndisSetPowerSuspend@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0145BC4 (-ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisSetDevicePower(
        PIRP Irp,
        struct _IO_STACK_LOCATION *a2,
        enum _NDIS_DEVICE_POWER_STATE a3,
        struct _NDIS_MINIPORT_BLOCK *a4)
{
  const struct _GUID *v8; // rcx
  struct _NDIS_SELECTIVE_SUSPEND *v9; // rbx
  __int64 v10; // rcx
  _IO_STACK_LOCATION *v11; // rax
  _IO_STACK_LOCATION *v12; // rax
  unsigned int v13; // ebx
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v17; // rax
  KIRQL v18; // al
  unsigned int SetMiniportDeviceState; // eax
  int v21; // edx
  int v22; // ecx
  unsigned int InterlockedFlags; // eax
  unsigned int v24; // ett
  struct _IO_STACK_LOCATION *v25; // rdx
  KIRQL v26; // al

  v8 = &WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      a3,
      100,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      a3,
      (char)a4,
      (__int64)a4->pAdapterInstanceName);
  if ( (byte_1C00F7641 & 8) != 0 )
    McTemplateK0jqxqq_EtwWriteTransfer(
      (__int64)v8,
      &MiniportPowerDeviceState,
      &a4->InterfaceGuid,
      (__int64)&a4->InterfaceGuid,
      a4->IfIndex,
      a4->NetLuid.Value,
      1,
      a3);
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
        v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a4->SelectiveSuspend);
        if ( (*((_DWORD *)SelectiveSuspend + 126) & 0x120) == 0x20 )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v26);
          return (unsigned int)ndisSetPowerResume(Irp, v25, a4);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v26);
      }
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      v17 = Irp->Tail.Overlay.CurrentStackLocation;
      v17[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisSetDevicePowerOnComplete;
      v17[-1].Context = a4;
      v17[-1].Control = -32;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x65u,
          (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
          a4);
      goto LABEL_25;
    }
    goto LABEL_52;
  }
  if ( a3 != NdisDeviceStateD1 && (unsigned int)(a3 - 3) > 1 )
  {
    v13 = -1073741811;
    goto LABEL_50;
  }
  _m_prefetchw(&a4->InterlockedFlags);
  if ( (_InterlockedAnd((volatile signed __int32 *)&a4->InterlockedFlags, 0xFFFFFFFB) & 4) == 0 )
  {
LABEL_52:
    _InterlockedOr((volatile signed __int32 *)&a4->InterlockedFlags, 8u);
    Irp->IoStatus.Status = 0;
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(a4->NextDeviceObject, Irp);
  }
  v9 = a4->SelectiveSuspend;
  if ( v9 )
  {
    v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a4->SelectiveSuspend);
    if ( (*((_DWORD *)v9 + 126) & 0x108) != 8 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v9, v18);
      goto LABEL_10;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v9, v18);
    return (unsigned int)ndisSetPowerSuspend(Irp, a2, a4);
  }
LABEL_10:
  if ( ndisIsMiniportStarted(a4) && a4->PnPDeviceState == NdisPnPDeviceStarted )
  {
    if ( !_bittest((const signed __int32 *)&a4->PnPFlags, 0xBu) )
    {
      KeClearEvent(&a4->OpenReadyEvent.Event);
      ndisPrepForLowPower(a4, a3);
    }
    if ( (a4->PnPFlags & 0x20) == 0 )
    {
      if ( (a4->DriverHandle->Flags & 1) == 0 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xEu,
            0x68u,
            (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
            a4);
        if ( (byte_1C00F7643 & 4) != 0 )
          McTemplateK0jqxq_EtwWriteTransfer(
            v10,
            (__int64)"J'",
            (__int64)&a4->InterfaceGuid,
            (__int64)&a4->InterfaceGuid,
            a4->IfIndex,
            a4->NetLuid.Value,
            1);
        if ( (a4->PnPFlags & 0x100) == 0 )
        {
          Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(&a4->MiniportOwner);
          ndisPmHaltMiniport(a4);
          Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Acquire(&a4->MiniportOwner, 1LL);
        }
      }
      goto LABEL_22;
    }
    ndisCancelWakeUpDpcTimer(a4);
    ndisWaitForResetCompletion(a4);
    if ( _bittest((const signed __int32 *)&a4->PnPFlags, 0xBu) )
    {
      ndisSetDeviceInterfaceState(a4, 0);
      _InterlockedOr((volatile signed __int32 *)&a4->InterlockedFlags, 0x10u);
    }
    SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(a4, (enum _DEVICE_POWER_STATE)a3, 0xFD010101, 1u);
    v13 = SetMiniportDeviceState;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v21,
        14,
        102,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        (char)a4,
        a3,
        SetMiniportDeviceState);
    if ( !v13 )
      goto LABEL_22;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x67u,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        a4);
    if ( (byte_1C00F7643 & 0x40) != 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        v22,
        (unsigned int)&PowerDownFailed,
        (_DWORD)a4 + 4008,
        (_DWORD)a4 + 4008,
        a4->IfIndex,
        a4->NetLuid.Value,
        v13,
        1,
        0);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(&a4->MiniportOwner);
    _m_prefetchw(&a4->InterlockedFlags);
    InterlockedFlags = a4->InterlockedFlags;
    do
    {
      v24 = InterlockedFlags;
      InterlockedFlags = _InterlockedCompareExchange(
                           (volatile signed __int32 *)&a4->InterlockedFlags,
                           InterlockedFlags,
                           InterlockedFlags);
    }
    while ( v24 != InterlockedFlags );
    if ( (InterlockedFlags & 0x10) != 0 )
    {
      ndisSetDeviceInterfaceState(a4, 1u);
      _InterlockedAnd((volatile signed __int32 *)&a4->InterlockedFlags, 0xFFFFFFEF);
    }
LABEL_50:
    Irp->IoStatus.Status = v13;
    IofCompleteRequest(Irp, 0);
    return v13;
  }
LABEL_22:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x69u,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      a4);
  v11 = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v11[-1].MajorFunction = *(_OWORD *)&v11->MajorFunction;
  *(_OWORD *)&v11[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v11->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)&v11[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&v11->Parameters.ReadWriteConfig.Length;
  v11[-1].FileObject = v11->FileObject;
  v11[-1].Control = 0;
  v12 = Irp->Tail.Overlay.CurrentStackLocation;
  v12[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisSetDevicePowerDownComplete;
  v12[-1].Context = a4;
  v12[-1].Control = -32;
LABEL_25:
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  IofCallDriver(a4->NextDeviceObject, Irp);
  return 259;
}
