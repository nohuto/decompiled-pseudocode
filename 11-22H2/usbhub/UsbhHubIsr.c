/*
 * XREFs of UsbhHubIsr @ 0x1C001D8F0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueueWorkItemWithRetry @ 0x1C000B390 (UsbhQueueWorkItemWithRetry.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhSignalResumeEvent @ 0x1C001B710 (UsbhSignalResumeEvent.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     UsbhSignalSuspendEvent @ 0x1C00353B4 (UsbhSignalSuspendEvent.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 */

__int64 __fastcall UsbhHubIsr(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  unsigned int v5; // esi
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rcx
  signed __int32 v9; // r9d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 Status; // r12
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ecx
  __int64 v17; // r8
  unsigned int v18; // edi
  __int64 v19; // rbp
  KIRQL v20; // bp
  _DWORD *v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  _DWORD *v24; // rax
  _DWORD *v25; // rax
  struct _KEVENT *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rdx
  KSPIN_LOCK *v37; // rbp
  KIRQL v38; // al
  int v39; // r8d
  int v40; // r8d
  _DWORD *v41; // rax
  signed __int32 v42; // [rsp+50h] [rbp-48h]

  v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 16, (__int64)"FKh&");
  if ( !Context )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = Context[8];
  if ( !v6 )
    goto LABEL_76;
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(Context, v6);
  v7 = *(_QWORD *)(v6 + 2672);
  if ( (UsbhLogMask & 4) != 0 )
  {
    v8 = *(_QWORD *)(v6 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
    *(_DWORD *)v8 = 1145661539;
    *(_QWORD *)(v8 + 8) = 0LL;
    *(_QWORD *)(v8 + 16) = v7;
    *(_QWORD *)(v8 + 24) = Irp;
  }
  v9 = _InterlockedDecrement((volatile signed __int32 *)(v6 + 2712));
  v42 = v9;
  if ( (UsbhLogMask & 4) != 0 )
  {
    v10 = Context[8];
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
      *(_DWORD *)v11 = 1717790819;
      *(_QWORD *)(v11 + 24) = v9;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = v7;
    }
  }
  Status = Irp->IoStatus.Status;
  v13 = *(int *)(v7 + 4);
  if ( (UsbhLogMask & 4) != 0 )
  {
    v14 = Context[8];
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
      *(_DWORD *)v15 = 843671651;
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 16) = Status;
      *(_QWORD *)(v15 + 24) = v13;
    }
  }
  if ( (int)Status >= 0 && !*(_DWORD *)(v7 + 36) )
  {
    Log((__int64)Context, 4, 1769101906, Status, *(int *)(v7 + 4));
    UsbhException((int)Context, 0, 116, 0, 0, Status, *(_DWORD *)(v7 + 4), usbfile_bus_c, 1094, 0);
    v9 = v42;
  }
  if ( (Status & 0xC0000000) != 0xC0000000 && *(int *)(v7 + 4) >= 0 && v9 != -1 )
  {
    *(_DWORD *)(v6 + 2656) = 0;
    v16 = 0;
    v17 = Context[8];
    v18 = 0;
    if ( v17 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)v17 != 541218120 )
          UsbhTrapFatal_Dbg(Context, Context[8]);
        if ( v18 > *(unsigned __int8 *)(v17 + 2938) )
          break;
        v19 = v18;
        if ( ((unsigned __int8)(1 << (v18 & 7)) & *(_BYTE *)(((unsigned __int64)v18 >> 3) + *(_QWORD *)(v6 + 2680))) != 0 )
          goto LABEL_27;
        v16 = ++v18;
      }
      v19 = v16;
LABEL_27:
      if ( v18 > *((unsigned __int8 *)FdoExt((__int64)Context) + 2938) )
      {
        v18 = 0;
        Log((__int64)Context, 4, 1113870435, v19, 0LL);
        UsbhException((int)Context, 0, 117, 0, 0, 0, 0, usbfile_bus_c, 1190, 0);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 17, (__int64)"FKh&", v18);
      v20 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
      v21 = FdoExt((__int64)Context);
      v21[383] = v18;
      v21[384] = 1;
      v22 = v21 + 386;
      v23 = (_QWORD *)qword_1C006B6A8;
      if ( *(__int64 **)qword_1C006B6A8 != &qword_1C006B6A0 )
        __fastfail(3u);
      v22[1] = qword_1C006B6A8;
      *v22 = &qword_1C006B6A0;
      *v23 = v22;
      qword_1C006B6A8 = (__int64)v22;
      v24 = FdoExt((__int64)Context);
      _InterlockedIncrement(v24 + 685);
      Log((__int64)Context, 4, 1212764715, (__int64)Context, (int)v24[685]);
      KeReleaseSpinLock(&SpinLock, v20);
      v25 = FdoExt((__int64)Context);
      UsbhQueueWorkItemWithRetry(
        (__int64)Context,
        *(_QWORD *)(v6 + 2720),
        (int)UsbhHubIsrWorker,
        0,
        (__int64)(v25 + 346),
        v18,
        0x49577369u);
      v26 = &stru_1C006B6B0;
      goto LABEL_41;
    }
LABEL_76:
    UsbhTrapFatal_Dbg(Context, 0LL);
  }
  if ( (_DWORD)Status == -1073741536 )
  {
    if ( *(_DWORD *)(v7 + 4) == -1073676288 )
      goto LABEL_45;
    goto LABEL_37;
  }
  if ( (_DWORD)Status == -1073741823 )
  {
    if ( *(_DWORD *)(v7 + 4) == -1073741819 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_45:
          v30 = Context[8];
          if ( !v30 )
            goto LABEL_76;
          if ( *(_DWORD *)v30 != 541218120 )
            UsbhTrapFatal_Dbg(Context, v30);
          if ( v5 > *(unsigned __int8 *)(v30 + 2938) )
          {
            v9 = v42;
            goto LABEL_69;
          }
          if ( (UsbhLogMask & 8) != 0 )
          {
            v31 = *(_QWORD *)(v30 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v30 + 880)) & *(_DWORD *)(v30 + 884));
            *(_DWORD *)v31 = 1413771367;
            *(_QWORD *)(v31 + 16) = (unsigned __int16)v5;
            *(_QWORD *)(v31 + 8) = 0LL;
            *(_QWORD *)(v31 + 24) = 0LL;
          }
          if ( (_WORD)v5 )
          {
            v33 = Context[8];
            if ( !v33 )
              goto LABEL_76;
            if ( *(_DWORD *)v33 != 541218120 )
              UsbhTrapFatal_Dbg(Context, v33);
            if ( (unsigned __int16)v5 <= *(unsigned __int8 *)(v33 + 2938) )
            {
              v34 = *(_QWORD *)(v33 + 3056);
              if ( v34 )
              {
                v32 = 2928LL * (unsigned __int16)v5 + v34 - 2928;
                if ( (UsbhLogMask & 8) != 0 )
                {
                  v35 = *(_QWORD *)(v33 + 888)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884));
                  *(_DWORD *)v35 = 1044672615;
                  *(_QWORD *)(v35 + 8) = 0LL;
                  *(_QWORD *)(v35 + 16) = (unsigned __int16)v5;
                  *(_QWORD *)(v35 + 24) = v32;
                }
              }
              else
              {
                v32 = 0LL;
              }
            }
            else
            {
              v32 = 0LL;
            }
          }
          else
          {
            v32 = 0LL;
          }
          v36 = Context[8];
          if ( !v36 )
            goto LABEL_76;
          if ( *(_DWORD *)v36 != 541218120 )
            UsbhTrapFatal_Dbg(Context, v36);
          v37 = (KSPIN_LOCK *)(v36 + 4944);
          v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v36 + 4944));
          v39 = *(_DWORD *)(v32 + 696);
          if ( v39 )
            break;
LABEL_67:
          KeReleaseSpinLock(v37, v38);
          ++v5;
        }
        v40 = v39 - 2;
        if ( v40 )
        {
          if ( v40 != 1 )
            goto LABEL_67;
          KeReleaseSpinLock(v37, v38);
          Log((__int64)Context, 16, 1666207793, (__int64)Context, *(unsigned __int16 *)(v32 + 4));
          UsbhSignalResumeEvent((__int64)Context, v32);
          ++v5;
        }
        else
        {
          KeReleaseSpinLock(v37, v38);
          Log((__int64)Context, 16, 1666207794, (__int64)Context, *(unsigned __int16 *)(v32 + 4));
          UsbhSignalSuspendEvent(Context, v32);
          ++v5;
        }
      }
    }
  }
  else
  {
LABEL_69:
    if ( (_DWORD)Status == -1073741810 || (_DWORD)Status == -1073741667 )
    {
LABEL_40:
      v26 = (struct _KEVENT *)(v6 + 2688);
LABEL_41:
      KeSetEvent(v26, 0, 0);
      return 3221225494LL;
    }
    if ( (_DWORD)Status == -1073741536 )
    {
LABEL_37:
      if ( (UsbhLogMask & 4) != 0 )
      {
        v27 = Context[8];
        if ( v27 )
        {
          v28 = *(_QWORD *)(v27 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
          *(_DWORD *)v28 = 860448867;
          *(_QWORD *)(v28 + 24) = v9;
          *(_QWORD *)(v28 + 8) = 0LL;
          *(_QWORD *)(v28 + 16) = Status;
        }
      }
      goto LABEL_40;
    }
  }
  if ( v9 == -1 )
    goto LABEL_37;
  if ( ++*(_DWORD *)(v6 + 2656) < 3u )
  {
    *(_DWORD *)(v6 + 2560) |= 0x1000u;
    v41 = FdoExt((__int64)Context);
    UsbhQueueWorkItemWithRetry(
      (__int64)Context,
      *(_QWORD *)(v6 + 2728),
      (int)UsbhHubResetIrqPipeWorker,
      0,
      (__int64)(v41 + 346),
      0,
      0x49577269u);
  }
  else
  {
    KeSetEvent((PRKEVENT)(v6 + 2688), 0, 0);
    UsbhException((int)Context, 0, 7, 0, 0, Status, *(_DWORD *)(v7 + 4), usbfile_bus_c, 1147, 0);
  }
  return 3221225494LL;
}
