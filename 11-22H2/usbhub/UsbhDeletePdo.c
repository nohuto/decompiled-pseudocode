/*
 * XREFs of UsbhDeletePdo @ 0x1C005409C
 * Callers:
 *     UsbhWaitConnect @ 0x1C0018530 (UsbhWaitConnect.c)
 *     UsbhRequestPortSuspend @ 0x1C0018D14 (UsbhRequestPortSuspend.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C003A81C (Usbh_BusPause_PdoEvent.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x1C003A9B8 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1C003AB58 (Usbh_BusPnpStop_PdoEvent.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C003AD1C (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_Disconnect_PdoEvent @ 0x1C003AFBC (Usbh_Disconnect_PdoEvent.c)
 *     Usbh_ErrorDisconnect_PdoEvent @ 0x1C003B0C0 (Usbh_ErrorDisconnect_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C003B22C (Usbh_PdoRemove_PdoEvent.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C0003DB0 (UsbhDecHubBusy.c)
 *     UsbhDisableTimerObject @ 0x1C00084D0 (UsbhDisableTimerObject.c)
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     UsbhSshSetPortsBusyState @ 0x1C000ABD0 (UsbhSshSetPortsBusyState.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhDecPdoIoCount @ 0x1C001BC4C (UsbhDecPdoIoCount.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C001BEDC (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhDisconnectPdoFromHub @ 0x1C002A2DC (UsbhDisconnectPdoFromHub.c)
 *     WPP_RECORDER_SF_q @ 0x1C002EA5C (WPP_RECORDER_SF_q.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C0036750 (SET_PDO_HWPNPSTATE.c)
 *     UsbhBillboardCleanup @ 0x1C00532D4 (UsbhBillboardCleanup.c)
 *     UsbhDeleteOrphanPdo @ 0x1C0053EF8 (UsbhDeleteOrphanPdo.c)
 *     UsbhRemoveAndDeletePdo @ 0x1C0057614 (UsbhRemoveAndDeletePdo.c)
 *     UsbhResetPortData @ 0x1C0057774 (UsbhResetPortData.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C005B6F8 (UsbhEtwLogDeviceInformation.c)
 */

void __fastcall UsbhDeletePdo(__int64 a1, struct _DEVICE_OBJECT *a2, int a3, int a4, __int64 a5)
{
  __int64 v7; // r12
  char v8; // r13
  __int64 v10; // rdx
  _DWORD *v11; // rbx
  KIRQL *v12; // r14
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  KIRQL v16; // dl
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx
  __int64 v25; // rdx
  _QWORD *v26; // r8

  v7 = 0LL;
  v8 = 0;
  Log(a1, 256, 1682981967, (__int64)a2, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v10,
      1u,
      0x19u,
      (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
      a2);
  v11 = PdoExt((__int64)a2);
  if ( a1 )
  {
    FdoExt(a1);
    v7 = a5 + 132;
  }
  else
  {
    UsbhDeleteOrphanPdo(a2);
  }
  v12 = (KIRQL *)(a5 + 132);
  if ( a3 == 6 )
  {
    *(_DWORD *)(a5 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a5 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *v12);
  }
  else
  {
    if ( a3 != 1 )
      UsbhEtwLogDeviceInformation(v11, &USBHUB_ETW_EVENT_DEVICE_REMOVE, 0LL);
    v13 = v11 + 330;
    v14 = *((_QWORD *)v11 + 165);
    if ( v14 || *((_QWORD *)v11 + 166) )
    {
      if ( *(_QWORD **)(v14 + 8) != v13 || (v15 = (_QWORD *)*((_QWORD *)v11 + 166), (_QWORD *)*v15 != v13) )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      *v13 = 0LL;
      *((_QWORD *)v11 + 166) = 0LL;
    }
    if ( (v11[356] & 8) != 0 )
    {
      UsbhResetPortData(a1, a2, v7);
      v8 = 1;
    }
    SET_PDO_HWPNPSTATE((__int64)a2, 6, a4);
    *(_DWORD *)(a5 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    v16 = *v12;
    *(_DWORD *)(a5 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v16);
    if ( v8 )
      UsbhSshSetPortsBusyState(a1, *((_WORD *)v11 + 714), 1, 0);
    if ( a1 )
      UsbhDisableTimerObject(a1, (__int64)(v11 + 426));
    KeWaitForSingleObject(v11 + 324, Executive, 0, 0, 0LL);
    if ( *((_QWORD *)v11 + 301) )
      UsbhBillboardCleanup(a2);
    v17 = (void *)*((_QWORD *)v11 + 142);
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0);
      *((_QWORD *)v11 + 142) = 0LL;
    }
    v18 = (void *)*((_QWORD *)v11 + 143);
    if ( v18 )
    {
      ExFreePoolWithTag(v18, 0);
      *((_QWORD *)v11 + 143) = 0LL;
    }
    v19 = (void *)*((_QWORD *)v11 + 280);
    if ( v19 )
    {
      ExFreePoolWithTag(v19, 0);
      *((_QWORD *)v11 + 280) = 0LL;
    }
    v20 = (void *)*((_QWORD *)v11 + 355);
    if ( v20 )
    {
      ExFreePoolWithTag(v20, 0);
      *((_QWORD *)v11 + 355) = 0LL;
    }
    v21 = (void *)*((_QWORD *)v11 + 299);
    if ( v21 )
    {
      ExFreePoolWithTag(v21, 0);
      *((_QWORD *)v11 + 299) = 0LL;
    }
    v22 = (void *)*((_QWORD *)v11 + 300);
    if ( v22 )
    {
      ExFreePoolWithTag(v22, 0);
      *((_QWORD *)v11 + 300) = 0LL;
    }
    v23 = (void *)*((_QWORD *)v11 + 316);
    if ( v23 )
    {
      ExFreePoolWithTag(v23, 0);
      *((_QWORD *)v11 + 316) = 0LL;
    }
    v24 = (void *)*((_QWORD *)v11 + 106);
    if ( v24 )
    {
      ExFreePoolWithTag(v24, 0);
      *((_QWORD *)v11 + 106) = 0LL;
    }
    UsbhUnlinkPdoDeviceHandle(a1, (__int64)a2, 2017740855, 1);
    Log(a1, 256, 1682457649, (__int64)a2, 0LL);
    if ( (v11[356] & 1) != 0 )
    {
      UsbhDecPdoIoCount((ULONG_PTR)a2, (ULONG_PTR)a2);
      KeWaitForSingleObject(v11 + 310, Executive, 0, 0, 0LL);
    }
    v26 = (_QWORD *)*((_QWORD *)v11 + 107);
    if ( v26 )
    {
      UsbhDecHubBusy(a1, v25, v26);
      *((_QWORD *)v11 + 107) = 0LL;
    }
    if ( (v11[356] & 2) != 0 )
      UsbhDisconnectPdoFromHub((__int64)a2);
    v11[356] = 16;
    UsbhRemoveAndDeletePdo(a2);
  }
}
