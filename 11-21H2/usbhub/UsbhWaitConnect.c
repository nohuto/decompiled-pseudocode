/*
 * XREFs of UsbhWaitConnect @ 0x1C0019D60
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x1C0016AF0 (UsbhHubDispatchPortEvent.c)
 * Callees:
 *     Log @ 0x1C0009F20 (Log.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhRequestPortSuspend @ 0x1C001A734 (UsbhRequestPortSuspend.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 *     UsbhAcquirePdoStateLock @ 0x1C00312E4 (UsbhAcquirePdoStateLock.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C0047C4C (WPP_RECORDER_SF_dDD.c)
 *     UsbhBusUnlatchPdo @ 0x1C004C104 (UsbhBusUnlatchPdo.c)
 *     UsbhHandleOvercurrent @ 0x1C004C3B4 (UsbhHandleOvercurrent.c)
 *     UsbhDeletePdo @ 0x1C00537BC (UsbhDeletePdo.c)
 */

__int64 __fastcall UsbhWaitConnect(PDEVICE_OBJECT a1, unsigned int a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r14d
  __int64 v7; // r15
  __int64 v9; // rdi
  void *DeviceExtension; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  KSPIN_LOCK *v17; // rbx
  KIRQL v18; // al
  __int64 v19; // r9
  KIRQL v20; // r15
  int v21; // edx
  __int64 v22; // r10
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rdx
  KIRQL v28; // al
  __int64 v29; // r9
  __int64 v30; // r10
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // edx
  unsigned int v34; // ebx
  unsigned int v35; // ebx
  unsigned int v36; // ebx
  __int64 v37; // r9
  __int64 (__fastcall *v38)(); // rax
  __int64 v40; // r9
  __int64 v41; // r9
  __int64 v42; // r9
  __int64 v43; // r9
  __int64 v44; // r9
  __int64 v45; // rbp
  int v46; // r9d
  __int64 v47; // rax
  KIRQL v48; // dl

  v5 = *(_DWORD *)(a4 + 400);
  v7 = a3;
  v9 = (__int64)a1;
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      DeviceExtension = a1->DeviceExtension;
      if ( DeviceExtension )
      {
        a1 = (PDEVICE_OBJECT)(*((_QWORD *)DeviceExtension + 111)
                            + 32LL
                            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221)));
        *(_DWORD *)&a1->Type = 1313754947;
        a1->AttachedDevice = (_DEVICE_OBJECT *)a2;
        a1->DriverObject = 0LL;
        a1->NextDevice = (_DEVICE_OBJECT *)a4;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dDD(
        WPP_GLOBAL_Control->DeviceExtension,
        *(unsigned __int16 *)(a4 + 4),
        a3,
        10,
        (__int64)&WPP_514d3d48908635b064432894a9af1f2f_Traceguids,
        *(_WORD *)(a4 + 4),
        a3,
        a2);
  }
  if ( a2 == 0x80000 )
  {
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( v9 )
      {
        v11 = *(_QWORD *)(v9 + 64);
        if ( v11 )
        {
          a1 = (PDEVICE_OBJECT)(*(_QWORD *)(v11 + 888)
                              + 32LL
                              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884)));
          *(_DWORD *)&a1->Type = 1884180291;
          a1->DriverObject = 0LL;
          a1->NextDevice = (_DEVICE_OBJECT *)v7;
          a1->AttachedDevice = 0LL;
        }
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      a1 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          43,
          (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
          *(_WORD *)(a4 + 4));
    }
    if ( (UsbhLogMask & 0x400) != 0 )
    {
      if ( v9 )
      {
        v12 = *(_QWORD *)(v9 + 64);
        if ( v12 )
        {
          a1 = (PDEVICE_OBJECT)(*(_QWORD *)(v12 + 888)
                              + 32LL
                              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884)));
          *(_DWORD *)&a1->Type = 1313175651;
          a1->DriverObject = 0LL;
          a1->NextDevice = (_DEVICE_OBJECT *)a4;
          a1->AttachedDevice = 0LL;
        }
      }
    }
    if ( a5 )
    {
      v45 = *(_QWORD *)(a4 + 376);
      UsbhAcquirePdoStateLock(a1, v45, 19LL);
      if ( PdoExt(a5)[281] == 2 )
      {
        UsbhBusUnlatchPdo(v9, a5, a4, v46, v45 + 132);
        UsbhDeletePdo(v9, a5, 2LL);
      }
      else
      {
        v47 = *(_QWORD *)(a4 + 376);
        *(_DWORD *)(v47 + 136) = 0;
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        v48 = *(_BYTE *)(v47 + 132);
        *(_DWORD *)(v47 + 88) = 1734964085;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v48);
      }
    }
    return 4;
  }
  if ( a2 == 0x100000 )
  {
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( v9 )
      {
        v14 = *(_QWORD *)(v9 + 64);
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
          *(_DWORD *)v15 = 1833848643;
          *(_QWORD *)(v15 + 8) = 0LL;
          *(_QWORD *)(v15 + 16) = v7;
          *(_QWORD *)(v15 + 24) = 0LL;
        }
        goto LABEL_28;
      }
    }
    else if ( v9 )
    {
LABEL_28:
      v16 = *(_QWORD *)(v9 + 64);
      if ( !v16 )
        UsbhTrapFatal_Dbg(v9, 0LL);
      if ( *(_DWORD *)v16 != 541218120 )
        UsbhTrapFatal_Dbg(v9, *(_QWORD *)(v9 + 64));
      v17 = (KSPIN_LOCK *)(v16 + 4944);
      v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v16 + 4944));
      v19 = *(int *)(a4 + 696);
      v20 = v18;
      v21 = *(_DWORD *)(a4 + 696);
      v22 = *(unsigned __int16 *)(a4 + 4);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v23 = *(_QWORD *)(v9 + 64);
        if ( v23 )
        {
          v24 = *(_QWORD *)(v23 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
          *(_DWORD *)v24 = 1397909875;
          *(_QWORD *)(v24 + 8) = 0LL;
          *(_QWORD *)(v24 + 16) = v19;
          *(_QWORD *)(v24 + 24) = v22;
          v21 = *(_DWORD *)(a4 + 696);
        }
      }
      if ( v21 == 3 )
      {
        v25 = *(unsigned __int16 *)(a4 + 4);
        if ( (UsbhLogMask & 0x10) != 0 )
        {
          v26 = *(_QWORD *)(v9 + 64);
          if ( v26 )
          {
            v27 = *(_QWORD *)(v26 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
            *(_DWORD *)v27 = 2018666867;
            *(_QWORD *)(v27 + 8) = 0LL;
            *(_QWORD *)(v27 + 16) = 3LL;
            *(_QWORD *)(v27 + 24) = v25;
          }
        }
        *(_DWORD *)(a4 + 696) = 0;
        KeSetEvent((PRKEVENT)(a4 + 712), 0, 0);
        KeReleaseSpinLock(v17, v20);
        v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a4 + 440));
        v29 = *(unsigned __int16 *)(a4 + 4);
        v30 = *(int *)(a4 + 12);
        *(_DWORD *)(a4 + 448) = 1;
        if ( (UsbhLogMask & 0x10) != 0 )
        {
          v31 = *(_QWORD *)(v9 + 64);
          if ( v31 )
          {
            v32 = *(_QWORD *)(v31 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884));
            *(_DWORD *)v32 = 1986359664;
            *(_QWORD *)(v32 + 8) = 0LL;
            *(_QWORD *)(v32 + 16) = v30;
            *(_QWORD *)(v32 + 24) = v29;
          }
        }
        *(_DWORD *)(32 * (*(unsigned int *)(a4 + 2400) + 43LL) + a4 + 20) = 30;
        *(_DWORD *)(a4 + 448) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(a4 + 440), v28);
      }
      else
      {
        KeReleaseSpinLock(v17, v18);
      }
      return v5;
    }
    UsbhTrapFatal_Dbg(0LL, 0LL);
  }
  if ( a2 <= 0x10 )
  {
    if ( a2 == 16 )
    {
      Log(v9, 4, 1129270898, v7, 0LL);
      v38 = off_1C005F568[2 * v43];
    }
    else
    {
      v34 = a2 - 1;
      if ( v34 )
      {
        v35 = v34 - 1;
        if ( v35 )
        {
          v36 = v35 - 2;
          if ( v36 )
          {
            if ( v36 != 4 )
              return v5;
            Log(v9, 4, 1129270902, v7, 0LL);
            return (unsigned int)UsbhHandleOvercurrent(v9, a5);
          }
          Log(v9, 4, 1129270899, v7, 0LL);
          v38 = (__int64 (__fastcall *)())qword_1C005E218[2 * v37];
        }
        else
        {
          Log(v9, 4, 1129270885, v7, 0LL);
          v38 = off_1C005F768[2 * v41];
        }
      }
      else
      {
        Log(v9, 4, 1129270883, v7, 0LL);
        v38 = off_1C005FB68[2 * v42];
      }
    }
LABEL_51:
    if ( !v38 )
      return v5;
    return ((unsigned int (__fastcall *)(__int64, __int64, __int64))v38)(v9, a4, a5);
  }
  switch ( a2 )
  {
    case 0x20000u:
      Log(v9, 4, 1129270904, v7, 0LL);
      v38 = (__int64 (__fastcall *)())qword_1C005E018[2 * v40];
      goto LABEL_51;
    case 0x10000u:
      Log(v9, 4, 1129270900, v7, 0LL);
      v38 = off_1C005F968[2 * v44];
      goto LABEL_51;
    case 0x40000u:
      Log(v9, 4, 1129270867, v7, 0LL);
      return (unsigned int)UsbhRequestPortSuspend(v9, v33, (unsigned __int8)v7, a4, a5);
  }
  return v5;
}
