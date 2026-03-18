/*
 * XREFs of UsbhBusPnpStart @ 0x1C00369F0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhDispatch_BusEvent @ 0x1C001CF30 (UsbhDispatch_BusEvent.c)
 *     UsbhNumberOfPorts @ 0x1C0029904 (UsbhNumberOfPorts.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     UsbhInitPortPindicator @ 0x1C002F27C (UsbhInitPortPindicator.c)
 *     UsbhInitPortChangeList @ 0x1C0034048 (UsbhInitPortChangeList.c)
 *     UsbhAllocateTimerObject @ 0x1C003B9F4 (UsbhAllocateTimerObject.c)
 *     UsbhFreeTimerObject @ 0x1C003BC10 (UsbhFreeTimerObject.c)
 */

__int64 __fastcall UsbhBusPnpStart(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  _DWORD *v4; // rbx
  unsigned __int16 v5; // bp
  _DWORD *v6; // r14
  _QWORD *v7; // r12
  __int64 TimerObject; // rax
  PIRP Irp; // rax
  __int64 Pool2; // rax
  unsigned int v11; // eax
  unsigned __int16 v12; // ax
  PIO_WORKITEM WorkItem; // rax
  __int64 v14; // rsi
  __int64 v15; // rsi
  PIO_WORKITEM v16; // rax
  struct _IO_WORKITEM *v18; // rcx
  __int64 v19; // rsi
  PIO_WORKITEM *v20; // rsi
  IRP *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx

  v4 = FdoExt((__int64)DeviceObject);
  v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_((__int64)WPP_GLOBAL_Control->DeviceExtension, 0, 1u, 0xFu, (__int64)"FKh&");
  Log((__int64)DeviceObject, 4, 1649628242, 0LL, 0LL);
  v6 = v4 + 680;
  *((_QWORD *)v4 + 340) = UsbhAllocateTimerObject(DeviceObject, UsbhIsrRetryTimer, 1232302674LL);
  *((_QWORD *)v4 + 341) = UsbhAllocateTimerObject(DeviceObject, UsbhResetIrqPipeRetryTimer, 1380545137LL);
  v7 = v4 + 692;
  *((_QWORD *)v4 + 346) = UsbhAllocateTimerObject(DeviceObject, UsbHubhInitTimeoutTimer, 1231967343LL);
  TimerObject = UsbhAllocateTimerObject(DeviceObject, UsbhInitRetryTimer, 1231966821LL);
  *((_QWORD *)v4 + 347) = TimerObject;
  if ( *((_QWORD *)v4 + 340) )
  {
    if ( *((_QWORD *)v4 + 341) )
    {
      if ( *v7 )
      {
        if ( TimerObject )
        {
          Irp = IoAllocateIrp(*(_BYTE *)(*((_QWORD *)v4 + 151) + 76LL), 0);
          if ( Irp )
          {
            *((_QWORD *)v4 + 333) = Irp;
            Pool2 = ExAllocatePool2(64LL, 152LL, 1112885333LL);
            *((_QWORD *)v4 + 334) = Pool2;
            if ( Pool2 )
            {
              v11 = *((unsigned __int16 *)v4 + 1316);
              *((_QWORD *)v4 + 335) = 0LL;
              if ( (_WORD)v11 )
                *((_QWORD *)v4 + 335) = ExAllocatePool2(64LL, v11, 1112885333LL);
              if ( *((_QWORD *)v4 + 335) )
              {
                *((_QWORD *)v4 + 382) = 0LL;
                if ( (unsigned __int16)UsbhNumberOfPorts((__int64)DeviceObject) )
                {
                  v12 = UsbhNumberOfPorts((__int64)DeviceObject);
                  *((_QWORD *)v4 + 382) = ExAllocatePool2(64LL, 2928LL * v12, 1112885333LL);
                }
                if ( *((_QWORD *)v4 + 382) )
                {
                  v4[763] = (unsigned __int16)UsbhNumberOfPorts((__int64)DeviceObject);
                  WorkItem = IoAllocateWorkItem(DeviceObject);
                  *((_QWORD *)v4 + 148) = WorkItem;
                  if ( WorkItem )
                  {
                    v14 = *((_QWORD *)v4 + 382);
                    if ( !(unsigned __int16)UsbhNumberOfPorts((__int64)DeviceObject) )
                    {
LABEL_21:
                      UsbhDispatch_BusEvent((__int64)DeviceObject, a2, 4);
                      Log((__int64)DeviceObject, 4, 1045648466, 0LL, 0LL);
                      return 0LL;
                    }
                    v15 = v14 + 28;
                    while ( 1 )
                    {
                      *(_DWORD *)(v15 + 372) = 0;
                      *(_DWORD *)(v15 - 4) = 2017613128;
                      *(_QWORD *)(v15 + 12) = v15 - 4;
                      *(_DWORD *)(v15 - 28) = 1146120296;
                      ++v5;
                      *(_DWORD *)(v15 + 172) = 2017613128;
                      *(_QWORD *)(v15 + 188) = v15 + 172;
                      *(_DWORD *)v15 = 2;
                      *(_QWORD *)(v15 + 4) = DeviceObject;
                      *(_DWORD *)(v15 + 108) = 1734964085;
                      *(_DWORD *)(v15 + 60) = 1734964085;
                      *(_DWORD *)(v15 + 44) = 1734964085;
                      *(_DWORD *)(v15 + 28) = 1734964085;
                      *(_DWORD *)(v15 + 72) = 1734964085;
                      *(_DWORD *)(v15 + 84) = 1734964085;
                      *(_DWORD *)(v15 + 96) = 1734964085;
                      *(_DWORD *)(v15 + 116) = 1734964085;
                      *(_DWORD *)(v15 + 176) = 7;
                      *(_QWORD *)(v15 + 180) = DeviceObject;
                      *(_DWORD *)(v15 + 284) = 1734964085;
                      *(_DWORD *)(v15 + 236) = 1734964085;
                      *(_DWORD *)(v15 + 220) = 1734964085;
                      *(_DWORD *)(v15 + 204) = 1734964085;
                      *(_DWORD *)(v15 + 248) = 1734964085;
                      *(_DWORD *)(v15 + 260) = 1734964085;
                      *(_DWORD *)(v15 + 272) = 1734964085;
                      *(_DWORD *)(v15 + 292) = 1734964085;
                      *(_QWORD *)(v15 - 12) = DeviceObject;
                      *(_WORD *)(v15 - 24) = v5;
                      KeInitializeTimer((PKTIMER)(v15 + 524));
                      KeInitializeDpc((PRKDPC)(v15 + 588), UsbhResetPortTimerDpc, (PVOID)(v15 - 28));
                      KeInitializeEvent((PRKEVENT)(v15 + 740), NotificationEvent, 1u);
                      KeInitializeEvent((PRKEVENT)(v15 + 2388), NotificationEvent, 0);
                      *(_DWORD *)(v15 + 2384) = 0;
                      *(_DWORD *)(v15 + 2412) = 1;
                      KeInitializeSpinLock((PKSPIN_LOCK)(v15 + 2420));
                      v16 = IoAllocateWorkItem(DeviceObject);
                      *(_QWORD *)(v15 + 2428) = v16;
                      if ( !v16 )
                        break;
                      UsbhInitPortChangeList((__int64)DeviceObject, v15 - 28);
                      UsbhInitPortPindicator((__int64)DeviceObject, v15 - 28);
                      v15 += 2928LL;
                      if ( v5 >= (unsigned __int16)UsbhNumberOfPorts((__int64)DeviceObject) )
                        goto LABEL_21;
                    }
                    v6 = v4 + 680;
                    v5 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v18 = (struct _IO_WORKITEM *)*((_QWORD *)v4 + 148);
  if ( v18 )
  {
    IoFreeWorkItem(v18);
    *((_QWORD *)v4 + 148) = 0LL;
  }
  v19 = *((_QWORD *)v4 + 382);
  if ( v19 && (unsigned __int16)UsbhNumberOfPorts((__int64)DeviceObject) )
  {
    v20 = (PIO_WORKITEM *)(v19 + 2456);
    do
    {
      if ( *v20 )
      {
        IoFreeWorkItem(*v20);
        *v20 = 0LL;
      }
      v20 += 366;
      ++v5;
    }
    while ( v5 < (unsigned __int16)UsbhNumberOfPorts((__int64)DeviceObject) );
    v7 = v4 + 692;
  }
  UsbhFreeTimerObject(DeviceObject, v6);
  UsbhFreeTimerObject(DeviceObject, v4 + 682);
  UsbhFreeTimerObject(DeviceObject, v7);
  UsbhFreeTimerObject(DeviceObject, v4 + 694);
  v21 = (IRP *)*((_QWORD *)v4 + 333);
  if ( v21 )
  {
    IoFreeIrp(v21);
    *((_QWORD *)v4 + 333) = 0LL;
  }
  v22 = (void *)*((_QWORD *)v4 + 334);
  if ( v22 )
  {
    ExFreePoolWithTag(v22, 0);
    *((_QWORD *)v4 + 334) = 0LL;
  }
  v23 = (void *)*((_QWORD *)v4 + 335);
  if ( v23 )
  {
    ExFreePoolWithTag(v23, 0);
    *((_QWORD *)v4 + 335) = 0LL;
  }
  v24 = (void *)*((_QWORD *)v4 + 382);
  if ( v24 )
  {
    ExFreePoolWithTag(v24, 0);
    *((_QWORD *)v4 + 382) = 0LL;
  }
  return 3221225626LL;
}
