/*
 * XREFs of ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0059FF8
 * Callers:
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C00583C8 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C00594D4 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     ?ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0017B40 (-ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C002194C (WPP_RECORDER_SF_Lq.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C005A790 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     ?NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C008C1CC (-NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z @ 0x1C00ACCA4 (-ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z.c)
 *     ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00ADD3C (-ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C5C0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisRequestNicActive(struct _NDIS_MINIPORT_BLOCK *a1, enum CallRunMode a2)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v5; // al
  KIRQL v7; // al
  KIRQL v8; // si
  __int64 v9; // r8
  bool v10; // cf
  KIRQL v11; // si
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // esi
  struct _NDIS_MINIPORT_AOAC *v16; // rbx

  AoAc = a1->AoAc;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  if ( !*((_DWORD *)AoAc + 94) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v5);
    return 0LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v5);
  if ( a1->SelectiveSuspend && (a1->PnPFlags & 0x60) == 0x60 && (unsigned int)(a1->DeviceCaps.DeviceWake - 2) <= 2 )
  {
    ndisWaitForKernelObject((char *)AoAc + 416);
    ndisCancelIdleRequestSync(a1, 7, 0, 0);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
    v8 = v7;
    if ( !*((_BYTE *)AoAc + 384) )
    {
      *((_DWORD *)AoAc + 94) = 0;
      KeSetEvent((PRKEVENT)((char *)AoAc + 392), 0, 0);
      v9 = MEMORY[0xFFFFF78000000008];
      v10 = *((_BYTE *)AoAc + 1073) != 0;
      *((_QWORD *)AoAc + 104) = MEMORY[0xFFFFF78000000008];
      *((_QWORD *)AoAc + 105) = v9 & -(__int64)v10;
      KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v8);
      if ( a1->SelectiveSuspend )
        ndisSelectiveSuspendClearStop(a1, 7LL);
      return 0LL;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v7);
  }
  ndisWaitForKernelObject((char *)AoAc + 392);
  ndisUpdateMiniportCsTrafficStatistics(a1, 2LL);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  v12 = *((_DWORD *)AoAc + 94);
  if ( v12 == 2 )
  {
    if ( !*((_BYTE *)AoAc + 387) )
    {
      *((_DWORD *)AoAc + 94) = 3;
      ++*((_DWORD *)AoAc + 202);
      v13 = MEMORY[0xFFFFF78000000008];
      v10 = *((_BYTE *)AoAc + 1073) != 0;
      *((_QWORD *)AoAc + 104) = MEMORY[0xFFFFF78000000008];
      *((_QWORD *)AoAc + 105) = v13 & -(__int64)v10;
      KeClearEvent(&a1->PowerD0CompleteEvent);
      KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v11);
      v14 = ndisRequestDevicePowerD0(a1, NdisMEventD0_NicActive);
      v15 = v14;
      if ( v14 != 259 )
      {
        v16 = a1->AoAc;
        NdisTraceLoggingUnexpectedAoAcError(a1, 1u, v14);
        *((_WORD *)v16 + 225) = *((_WORD *)v16 + 224);
        *((_WORD *)v16 + 224) = 1;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xEu,
            0x14u,
            (struct _GUID *)WPP_1cdba23956c23e7115893e836b18f005_Traceguids,
            v15,
            a1);
        return v15;
      }
LABEL_21:
      if ( a2 == RunSynchronous )
      {
        ndisWaitForKernelObject(&a1->PowerD0CompleteEvent);
        return 0;
      }
      return v15;
    }
  }
  else
  {
    if ( v12 != 4 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v11);
      v15 = 259;
      goto LABEL_21;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x15u,
        (struct _GUID *)WPP_1cdba23956c23e7115893e836b18f005_Traceguids,
        a1);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v11);
  return (unsigned int)-1073741823;
}
