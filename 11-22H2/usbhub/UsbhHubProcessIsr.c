/*
 * XREFs of UsbhHubProcessIsr @ 0x1C000B860
 * Callers:
 *     UsbhHubIsrWorker @ 0x1C0021460 (UsbhHubIsrWorker.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C0003DB0 (UsbhDecHubBusy.c)
 *     UsbhEtwWrite @ 0x1C0009AC0 (UsbhEtwWrite.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhHubAckPortChange @ 0x1C0018F90 (UsbhHubAckPortChange.c)
 *     UsbhPCE_HardwareWake @ 0x1C0019178 (UsbhPCE_HardwareWake.c)
 *     UsbhPCE_QueueChange @ 0x1C001922C (UsbhPCE_QueueChange.c)
 *     UsbhQueryChange @ 0x1C0019300 (UsbhQueryChange.c)
 *     UsbhGetPortData @ 0x1C0019550 (UsbhGetPortData.c)
 *     UsbhQueueWorkItemEx @ 0x1C001E320 (UsbhQueueWorkItemEx.c)
 *     UsbhPostInterrupt @ 0x1C001F320 (UsbhPostInterrupt.c)
 *     UsbhEtwGetHubInfo @ 0x1C0021B60 (UsbhEtwGetHubInfo.c)
 *     __security_check_cookie @ 0x1C0022A90 (__security_check_cookie.c)
 *     Usb_Disconnected @ 0x1C0029920 (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     UsbhPCE_HW_Stop @ 0x1C003476C (UsbhPCE_HW_Stop.c)
 *     UsbhQueuePauseChange @ 0x1C0034E90 (UsbhQueuePauseChange.c)
 *     UsbhHubAckHubChange @ 0x1C00389CC (UsbhHubAckHubChange.c)
 *     UsbhQueryHubState @ 0x1C003912C (UsbhQueryHubState.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 */

int __fastcall UsbhHubProcessIsr(struct _DEVICE_OBJECT *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r14
  int v4; // edi
  __int64 v5; // r13
  __int64 v7; // rdi
  struct _KEVENT *v8; // rsi
  int v9; // r9d
  __int64 Pool2; // rax
  _LIST_ENTRY *v11; // rax
  _LIST_ENTRY *Blink; // rdx
  int v13; // r9d
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // r9d
  __int16 v18; // ax
  __int16 v19; // r9
  _UNKNOWN **v20; // rax
  __int64 v21; // rdx
  int v22; // r9d
  __int64 HubState; // rsi
  char v24; // r9
  __int64 v25; // rdx
  __int16 v26; // r9
  int v27; // r9d
  int v28; // r9d
  __int64 v29; // rdx
  __int16 v30; // r9
  _WORD v32[2]; // [rsp+60h] [rbp-49h] BYREF
  int v33; // [rsp+64h] [rbp-45h] BYREF
  int v34[2]; // [rsp+68h] [rbp-41h] BYREF
  int v35; // [rsp+70h] [rbp-39h] BYREF
  __int64 v36; // [rsp+78h] [rbp-31h] BYREF
  __int64 PortData; // [rsp+80h] [rbp-29h]
  int v38; // [rsp+88h] [rbp-21h] BYREF
  __int16 v39; // [rsp+8Ch] [rbp-1Dh]
  __int16 v40; // [rsp+8Eh] [rbp-1Bh]
  __int16 v41; // [rsp+90h] [rbp-19h]
  __int16 v42; // [rsp+92h] [rbp-17h]
  _OWORD v43[2]; // [rsp+98h] [rbp-11h] BYREF
  int v44; // [rsp+B8h] [rbp+Fh]

  v3 = 0LL;
  *(_QWORD *)v34 = a3;
  v33 = 0;
  v4 = a3;
  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 36, (__int64)"FKh&", a2);
  Log((_DWORD)a1, 4, 1769107799, v4, v5);
  v7 = FdoExt(a1);
  v8 = (struct _KEVENT *)FdoExt(a1);
  v8[142].Header.Type = 1;
  KeWaitForSingleObject(&v8[139], Executive, 0, 0, 0LL);
  Log((_DWORD)a1, 0x10000, 1212771939, 0, v8[142].Header.Signalling);
  if ( v8[142].Header.Signalling != (_BYTE)v9 )
  {
    Pool2 = ExAllocatePool2((unsigned int)(v9 + 64), (unsigned int)(v9 + 40), 1112885333LL);
    v3 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1215918946;
      *(_QWORD *)(Pool2 + 24) = a1;
      *(_DWORD *)(Pool2 + 32) = 826438515;
      v11 = (_LIST_ENTRY *)(Pool2 + 8);
      Blink = v8[129].Header.WaitListHead.Blink;
      if ( Blink->Flink != &v8[129].Header.WaitListHead )
        __fastfail(3u);
      v11->Flink = &v8[129].Header.WaitListHead;
      v11->Blink = Blink;
      Blink->Flink = v11;
      v8[129].Header.WaitListHead.Blink = v11;
    }
    else
    {
      ++v8[130].Header.LockNV;
      v3 = 1936941672LL;
    }
  }
  KeSetEvent(v8 + 139, 0, 0);
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 2736));
  Log((_DWORD)a1, 4, 1769107831, (unsigned __int8)v5, 0LL);
  if ( (_BYTE)v5 )
  {
    PortData = UsbhGetPortData(a1, (unsigned __int8)v5);
    if ( !PortData )
    {
      Log((_DWORD)a1, 4, 1769437016, 0, -1073741811LL);
      UsbhException((int)a1, (unsigned __int8)v5, 1, v13, 0, -1073741811, 0, usbfile_bus_c, 3118, v13);
      KeSetEvent((PRKEVENT)(v7 + 2688), 0, 0);
LABEL_50:
      Log((_DWORD)a1, 4, 1769422386, 0, *(int *)(v7 + 2736));
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 2736));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        && LOWORD(WPP_GLOBAL_Control->DeviceType) != v30 )
      {
        WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 39, (__int64)"FKh&", v5);
      }
      LODWORD(v20) = UsbhDecHubBusy((__int64)a1, v29, (_QWORD *)v3);
      return (int)v20;
    }
    v32[0] = 0;
    v36 = 0LL;
    v14 = (int)UsbhQueryChange((_DWORD)a1);
    Log((_DWORD)a1, 4, 1364550504, (unsigned __int8)v5, v14);
    if ( (v14 & 0xC0000000) != 0xC0000000 )
    {
      v35 = v5;
      memset(v43, 0, sizeof(v43));
      v44 = 0;
      if ( dword_1C006B690 )
      {
        v16 = FdoExt(a1);
        v38 = *(_DWORD *)(v16 + 5192);
        v39 = *(_WORD *)(v16 + 5196);
        v40 = *(_DWORD *)(v16 + 5200);
        v41 = *(_WORD *)(v16 + 5228);
        v42 = *(_WORD *)(v16 + 5230);
        UsbhEtwGetHubInfo(v16, v43);
        UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_PORT_STATUS_CHANGE, 0LL, &v38, 12LL, v43, 36LL, &v35, 4LL, v32, 2, 0LL);
      }
      if ( !v32[0] )
        goto LABEL_21;
      v14 = (int)UsbhHubAckPortChange(a1, (unsigned __int8)v5, v32, &v33);
      Log((_DWORD)a1, 4, 1097033831, (unsigned __int8)v5, v14);
      if ( (v14 & 0xC0000000) != 0xC0000000 )
      {
        v18 = v32[0];
        if ( (v32[0] & 1) != 0 )
        {
          Log((_DWORD)a1, 4, 1112425259, v17, 0LL);
          _InterlockedIncrement((volatile signed __int32 *)(PortData + 404));
          v18 = v32[0];
        }
        LOWORD(v36) = v18;
        UsbhPCE_HardwareWake(a1, *(_QWORD *)v34, (unsigned __int8)v5);
        UsbhPCE_QueueChange(a1, (unsigned __int8)v5, v36, *(_QWORD *)v34);
        Log((_DWORD)a1, 4, 1365469287, (unsigned __int8)v5, (__int64)&v36);
LABEL_21:
        UsbhDecHubBusy((__int64)a1, v15, (_QWORD *)v3);
        _InterlockedDecrement((volatile signed __int32 *)(v7 + 2736));
        UsbhPostInterrupt(a1);
        Log((_DWORD)a1, 4, 1769422385, 0, *(int *)(v7 + 2736));
        v20 = &WPP_RECORDER_INITIALIZED;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          && LOWORD(WPP_GLOBAL_Control->DeviceType) != v19 )
        {
          LODWORD(v20) = WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 37, (__int64)"FKh&", v5);
        }
        return (int)v20;
      }
    }
    KeSetEvent((PRKEVENT)(v7 + 2688), 0, 0);
    if ( (unsigned __int8)Usb_Disconnected((unsigned int)v14) )
    {
      Log((_DWORD)a1, 4, 1769436977, 0, v21);
      UsbhQueuePauseChange(a1, (unsigned __int8)v5, *(_QWORD *)v34);
      UsbhPCE_HW_Stop(a1, (unsigned __int8)v5, *(_QWORD *)v34);
    }
    else
    {
      Log((_DWORD)a1, 4, 1769436978, 0, v21);
      UsbhException((int)a1, (unsigned __int8)v5, 1, v22, v22, v14, v33, usbfile_bus_c, 3213, 1);
    }
    goto LABEL_50;
  }
  v34[0] = 0;
  HubState = (int)UsbhQueryHubState((_DWORD)a1);
  Log((_DWORD)a1, 4, 1364551795, 0, HubState);
  Log((_DWORD)a1, 4, 1364551779, 0, 0LL);
  if ( (int)HubState < 0 )
    goto LABEL_42;
  *(_DWORD *)(v7 + 3048) = 500;
  if ( (v34[0] & 0x10000) != 0 )
    *(_DWORD *)(v7 + 3032) = 500;
  LODWORD(HubState) = UsbhHubAckHubChange(a1, v34, &v33);
  Log((_DWORD)a1, 4, 1095263080, 0, (int)HubState);
  if ( (int)HubState < 0 || (v34[0] & 2) != 0 || *(_BYTE *)(v7 + 3009) == v24 && (v34[0] & 0x20000) != 0 )
  {
LABEL_42:
    KeSetEvent((PRKEVENT)(v7 + 2688), 0, 0);
    if ( (v34[0] & 2) != 0 || !*(_BYTE *)(v7 + 3009) && (v34[0] & 0x20000) != 0 )
    {
      Log((_DWORD)a1, 4, 1749512054, 0, (int)HubState);
      if ( *(_BYTE *)(v7 + 3010) == (_BYTE)v28 )
      {
        *(_BYTE *)(v7 + 3010) = 1;
        UsbhQueueWorkItemEx(
          (_DWORD)a1,
          v28 + 1,
          (unsigned int)UsbhSetHubOvercurrentDetectedKey,
          v28,
          0,
          1666340431,
          0LL);
      }
      UsbhException((int)a1, 0, 75, (int)v34, 4, HubState, v33, usbfile_bus_c, 3318, 0);
    }
    else if ( !(unsigned __int8)Usb_Disconnected((unsigned int)HubState) )
    {
      Log((_DWORD)a1, 4, 1769433138, 0, (int)HubState);
      UsbhException((int)a1, 0, v27 + 1, v27, 0, HubState, v33, usbfile_bus_c, 3331, 0);
    }
    goto LABEL_50;
  }
  if ( (v34[0] & 0x20000) != 0 )
  {
    UsbhException((int)a1, 0, 72, (int)v34, 4, HubState, v33, usbfile_bus_c, 3270, 0);
  }
  else if ( (v34[0] & 0x10000) != 0 )
  {
    UsbhException((int)a1, 0, 73, (int)v34, 4, HubState, v33, usbfile_bus_c, 3273, 0);
  }
  else
  {
    UsbhException((int)a1, 0, 74, (int)v34, 4, HubState, v33, usbfile_bus_c, 3277, 0);
  }
  _InterlockedDecrement((volatile signed __int32 *)(v7 + 2736));
  UsbhDecHubBusy((__int64)a1, v25, (_QWORD *)v3);
  UsbhPostInterrupt(a1);
  Log((_DWORD)a1, 4, 1769422387, 0, *(int *)(v7 + 2736));
  v20 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    && LOWORD(WPP_GLOBAL_Control->DeviceType) != v26 )
  {
    LODWORD(v20) = WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 38, (__int64)"FKh&");
  }
  return (int)v20;
}
