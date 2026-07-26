/*
 * XREFs of ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00AE0D8
 * Callers:
 *     ?ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00183E8 (-ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0059B6C (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C008CDC4 (-ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C01135AC (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C01167A0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C014724C (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIsPowerReferencedForSelectiveSuspend@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@E@Z @ 0x1C003F23A (-ndisIsPowerReferencedForSelectiveSuspend@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@E@Z.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x1C003F68C (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C003F8AC (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C003F962 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0081AC8 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z @ 0x1C00ACCA4 (-ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C5C0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisSelectiveSuspendStop(struct _NDIS_MINIPORT_BLOCK *a1, signed int a2)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  char v5; // r12
  char v6; // bp
  int v7; // r14d
  KIRQL v8; // r15
  char v9; // r13
  __int64 v10; // rdx
  int v11; // eax
  KIRQL v12; // dl
  KIRQL v13; // al

  SelectiveSuspend = a1->SelectiveSuspend;
  v5 = 0;
  v6 = 0;
  v7 = a1->Flags & 0x80;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  v9 = !ndisIsPowerReferencedForSelectiveSuspend(SelectiveSuspend, v7 != 0);
  if ( v7
    && !*((_DWORD *)SelectiveSuspend + 128)
    && !*((_DWORD *)SelectiveSuspend + 129)
    && !*((_DWORD *)SelectiveSuspend + 132)
    && !*((_DWORD *)SelectiveSuspend + 133)
    && !*((_DWORD *)SelectiveSuspend + 130)
    && !*((_DWORD *)SelectiveSuspend + 131)
    && !*((_DWORD *)SelectiveSuspend + 144)
    && !*((_DWORD *)SelectiveSuspend + 127) )
  {
    v6 = 1;
    KeClearEvent((PRKEVENT)((char *)SelectiveSuspend + 272));
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xFu,
      0x21u,
      (struct _GUID *)&WPP_64b9953f987037c4a892513bd407e9c6_Traceguids,
      (char)a1,
      a2);
  if ( a2 > 6 )
  {
    switch ( a2 )
    {
      case 7:
        *((_DWORD *)SelectiveSuspend + 127) |= 0x40u;
        break;
      case 8:
        ++*((_DWORD *)SelectiveSuspend + 134);
        *((_DWORD *)SelectiveSuspend + 127) |= 0x80u;
        break;
      case 11:
        *((_DWORD *)SelectiveSuspend + 127) |= 0x400u;
        break;
      case 13:
        ++*((_DWORD *)SelectiveSuspend + 135);
        *((_DWORD *)SelectiveSuspend + 127) |= 0x1000u;
        break;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 6:
        *((_DWORD *)SelectiveSuspend + 127) |= 0x20u;
        break;
      case 1:
        *((_DWORD *)SelectiveSuspend + 127) |= 1u;
        break;
      case 2:
        *((_DWORD *)SelectiveSuspend + 127) |= 2u;
        break;
      case 3:
        *((_DWORD *)SelectiveSuspend + 127) |= 4u;
        *((_DWORD *)SelectiveSuspend + 126) |= 0x400u;
        break;
      case 4:
        *((_DWORD *)SelectiveSuspend + 127) |= 8u;
        break;
      case 5:
        *((_DWORD *)SelectiveSuspend + 127) |= 0x10u;
        break;
    }
  }
  ndisSelectiveSuspendSetResumeBusyReason(SelectiveSuspend, v9, a2, 0);
  if ( v7 )
  {
    if ( v6 || !KeReadStateEvent((PRKEVENT)((char *)SelectiveSuspend + 272)) )
      goto LABEL_37;
LABEL_43:
    v12 = v8;
LABEL_50:
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v12);
    return;
  }
  v11 = *((_DWORD *)SelectiveSuspend + 126);
  if ( (v11 & 1) != 0 )
  {
    KeCancelTimer((PKTIMER)((char *)SelectiveSuspend + 16));
    *((_DWORD *)SelectiveSuspend + 126) &= ~1u;
    v5 = 1;
    v11 = *((_DWORD *)SelectiveSuspend + 126);
  }
  if ( (v11 & 0x200) != 0 )
    goto LABEL_43;
LABEL_37:
  KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v8);
  if ( !v7 )
  {
    ndisCancelWaitWake(a1);
    if ( v5 )
    {
      KeFlushQueuedDpcs();
      ndisWaitForKernelObject((char *)SelectiveSuspend + 152);
    }
    ndisCancelIdleRequestSync(a1, a2, 0, 1);
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
    *((_DWORD *)SelectiveSuspend + 126) |= 0x200u;
    v12 = v13;
    goto LABEL_50;
  }
  if ( a2 == 6 )
  {
    ndisWdfAcquirePowerReferenceHelper(a1, 0, 0);
    ndisWdfSelectiveSuspendResumeOperations(a1, v10, 1);
  }
  else if ( v6 )
  {
    ndisWdfAcquirePowerReferenceHelper(a1, 1, 0);
  }
  else
  {
    KeWaitForSingleObject((char *)SelectiveSuspend + 272, Executive, 0, 0, 0LL);
  }
}
