/*
 * XREFs of UsbhDeletePdo @ 0x1C00537BC
 * Callers:
 *     UsbhWaitConnect @ 0x1C0019D60 (UsbhWaitConnect.c)
 *     UsbhRequestPortSuspend @ 0x1C001A734 (UsbhRequestPortSuspend.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C0039DEC (Usbh_BusPause_PdoEvent.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x1C0039F80 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1C003A10C (Usbh_BusPnpStop_PdoEvent.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C003A2BC (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_Disconnect_PdoEvent @ 0x1C003A55C (Usbh_Disconnect_PdoEvent.c)
 *     Usbh_ErrorDisconnect_PdoEvent @ 0x1C003A660 (Usbh_ErrorDisconnect_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C003A7CC (Usbh_PdoRemove_PdoEvent.c)
 * Callees:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C00015D0 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhSshSetPortsBusyState @ 0x1C0005CA0 (UsbhSshSetPortsBusyState.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhDisableTimerObject @ 0x1C000B4D0 (UsbhDisableTimerObject.c)
 *     UsbhDecPdoIoCount @ 0x1C000EE64 (UsbhDecPdoIoCount.c)
 *     UsbhDecHubBusy @ 0x1C0010740 (UsbhDecHubBusy.c)
 *     UsbhDisconnectPdoFromHub @ 0x1C002990C (UsbhDisconnectPdoFromHub.c)
 *     WPP_RECORDER_SF_q @ 0x1C002E090 (WPP_RECORDER_SF_q.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C0035D18 (SET_PDO_HWPNPSTATE.c)
 *     UsbhBillboardCleanup @ 0x1C00529F4 (UsbhBillboardCleanup.c)
 *     UsbhDeleteOrphanPdo @ 0x1C0053618 (UsbhDeleteOrphanPdo.c)
 *     UsbhRemoveAndDeletePdo @ 0x1C0056D50 (UsbhRemoveAndDeletePdo.c)
 *     UsbhResetPortData @ 0x1C0056EB0 (UsbhResetPortData.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C005AE08 (UsbhEtwLogDeviceInformation.c)
 */

void __fastcall UsbhDeletePdo(__int64 a1, struct _DEVICE_OBJECT *a2, int a3, int a4, __int64 a5)
{
  __int64 v9; // r15
  char v10; // r12
  __int64 v11; // rdx
  int v12; // r10d
  _DWORD *v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  KIRQL v17; // dl
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx
  void *v25; // rcx
  __int64 v26; // rdx
  _QWORD *v27; // r8

  v9 = 0LL;
  v10 = 0;
  Log(a1, 256, 1682981967, (__int64)a2, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    && LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v12 )
  {
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v11,
      v12 + 1,
      v12 + 25,
      (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
      a2);
  }
  v13 = PdoExt((__int64)a2);
  if ( a1 )
  {
    FdoExt(a1);
    v9 = a5 + 132;
  }
  else
  {
    UsbhDeleteOrphanPdo(a2);
  }
  if ( a3 == 6 )
  {
    *(_DWORD *)(a5 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a5 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a5 + 132));
  }
  else
  {
    if ( a3 != 1 )
      UsbhEtwLogDeviceInformation(v13, &USBHUB_ETW_EVENT_DEVICE_REMOVE, 0LL);
    v14 = v13 + 330;
    v15 = *((_QWORD *)v13 + 165);
    if ( v15 || *((_QWORD *)v13 + 166) )
    {
      if ( *(_QWORD **)(v15 + 8) != v14 || (v16 = (_QWORD *)*((_QWORD *)v13 + 166), (_QWORD *)*v16 != v14) )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      *v14 = 0LL;
      *((_QWORD *)v13 + 166) = 0LL;
    }
    if ( (v13[356] & 8) != 0 )
    {
      UsbhResetPortData(a1, a2, v9);
      v10 = 1;
    }
    SET_PDO_HWPNPSTATE((__int64)a2, 6, a4);
    *(_DWORD *)(a5 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    v17 = *(_BYTE *)(a5 + 132);
    *(_DWORD *)(a5 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v17);
    if ( v10 )
      UsbhSshSetPortsBusyState(a1, *((_WORD *)v13 + 714), 1, 0);
    if ( a1 )
      UsbhDisableTimerObject(a1, (__int64)(v13 + 426));
    KeWaitForSingleObject(v13 + 324, Executive, 0, 0, 0LL);
    if ( *((_QWORD *)v13 + 301) )
      UsbhBillboardCleanup(a2);
    v18 = (void *)*((_QWORD *)v13 + 142);
    if ( v18 )
    {
      ExFreePoolWithTag(v18, 0);
      *((_QWORD *)v13 + 142) = 0LL;
    }
    v19 = (void *)*((_QWORD *)v13 + 143);
    if ( v19 )
    {
      ExFreePoolWithTag(v19, 0);
      *((_QWORD *)v13 + 143) = 0LL;
    }
    v20 = (void *)*((_QWORD *)v13 + 280);
    if ( v20 )
    {
      ExFreePoolWithTag(v20, 0);
      *((_QWORD *)v13 + 280) = 0LL;
    }
    v21 = (void *)*((_QWORD *)v13 + 355);
    if ( v21 )
    {
      ExFreePoolWithTag(v21, 0);
      *((_QWORD *)v13 + 355) = 0LL;
    }
    v22 = (void *)*((_QWORD *)v13 + 299);
    if ( v22 )
    {
      ExFreePoolWithTag(v22, 0);
      *((_QWORD *)v13 + 299) = 0LL;
    }
    v23 = (void *)*((_QWORD *)v13 + 300);
    if ( v23 )
    {
      ExFreePoolWithTag(v23, 0);
      *((_QWORD *)v13 + 300) = 0LL;
    }
    v24 = (void *)*((_QWORD *)v13 + 316);
    if ( v24 )
    {
      ExFreePoolWithTag(v24, 0);
      *((_QWORD *)v13 + 316) = 0LL;
    }
    v25 = (void *)*((_QWORD *)v13 + 106);
    if ( v25 )
    {
      ExFreePoolWithTag(v25, 0);
      *((_QWORD *)v13 + 106) = 0LL;
    }
    UsbhUnlinkPdoDeviceHandle(a1, (__int64)a2, 2017740855, 1);
    Log(a1, 256, 1682457649, (__int64)a2, 0LL);
    if ( (v13[356] & 1) != 0 )
    {
      UsbhDecPdoIoCount((ULONG_PTR)a2, (ULONG_PTR)a2);
      KeWaitForSingleObject(v13 + 310, Executive, 0, 0, 0LL);
    }
    v27 = (_QWORD *)*((_QWORD *)v13 + 107);
    if ( v27 )
    {
      UsbhDecHubBusy(a1, v26, v27);
      *((_QWORD *)v13 + 107) = 0LL;
    }
    if ( (v13[356] & 2) != 0 )
      UsbhDisconnectPdoFromHub((__int64)a2);
    v13[356] = 16;
    UsbhRemoveAndDeletePdo(a2);
  }
}
