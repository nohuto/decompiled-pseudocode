/*
 * XREFs of KeyboardClassCreate @ 0x1C0001E00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0001480 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqdDdd @ 0x1C00026F0 (WPP_RECORDER_SF_qqdDdd.c)
 *     KbdClassTraceLoggingDeniedCreateForReadWithSFAC @ 0x1C0004AE0 (KbdClassTraceLoggingDeniedCreateForReadWithSFAC.c)
 *     KeyboardClassLogError @ 0x1C00050A8 (KeyboardClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C00061CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqDdd @ 0x1C0006848 (WPP_RECORDER_SF_qqDdd.c)
 *     WPP_RECORDER_SF_qqdq @ 0x1C0006FA4 (WPP_RECORDER_SF_qqdq.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00071DC (WPP_RECORDER_SF_qqq.c)
 *     KbdEnableDisablePort @ 0x1C000D3D0 (KbdEnableDisablePort.c)
 */

__int64 __fastcall KeyboardClassCreate(__int64 a1, IRP *a2, __int64 a3, int a4)
{
  IRP *v4; // rbx
  char v6; // r12
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v8; // rbp
  char v9; // di
  KPROCESSOR_MODE RequestorMode; // cl
  int v11; // edx
  NTSTATUS v12; // esi
  __int64 v13; // rdx
  struct _IO_REMOVE_LOCK *v15; // r13
  KPROCESSOR_MODE v16; // dl
  int v17; // r8d
  int v18; // r9d
  KIRQL v19; // al
  __int64 v20; // rcx
  int v21; // edx
  int v22; // r8d
  int v23; // r9d
  unsigned int v24; // r13d
  char *v25; // rbp
  char v26; // di
  int v27; // edx
  __int64 v28; // rcx
  int v29; // r8d
  unsigned int v30; // edi
  __int64 RemlockSize; // [rsp+20h] [rbp-78h]
  struct _IO_REMOVE_LOCK *v32; // [rsp+A8h] [rbp+10h]

  v4 = a2;
  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 2LL);
  }
  CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
  v8 = *(_QWORD *)(a1 + 64);
  v9 = (CurrentStackLocation->Flags & 1) != 0;
  RequestorMode = v4->RequestorMode;
  if ( RequestorMode == 1 || (CurrentStackLocation->Flags & 1) != 0 )
  {
    v11 = *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16);
    if ( (v11 & 1) != 0 && (CurrentStackLocation->Parameters.Create.Options & 1) == 0 )
    {
      v12 = -1073741790;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_qqdDdd(WPP_GLOBAL_Control->DeviceExtension, v11, (unsigned int)&WPP_RECORDER_INITIALIZED, a4);
        RequestorMode = v4->RequestorMode;
      }
      if ( !RequestorMode && v9 )
        KbdClassTraceLoggingDeniedCreateForReadWithSFAC(*(unsigned int *)(CurrentStackLocation->Parameters.WMI.ProviderId
                                                                        + 16));
      goto LABEL_10;
    }
  }
  v15 = (struct _IO_REMOVE_LOCK *)(v8 + 32);
  v32 = (struct _IO_REMOVE_LOCK *)(v8 + 32);
  v12 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 32), v4, File, 1u, 0x20u);
  if ( v12 >= 0 )
  {
    if ( *(_BYTE *)(v8 + 64) && !*(_BYTE *)(v8 + 65) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 2u, 0x20u, RemlockSize);
      v12 = -1073741823;
      goto LABEL_27;
    }
    CurrentStackLocation->Parameters.Create.Options &= ~1u;
    if ( *(_QWORD *)v8 == *(_QWORD *)(v8 + 8) )
    {
      if ( v9 )
        v16 = 1;
      else
        v16 = v4->RequestorMode;
      if ( SeSinglePrivilegeCheck((LUID)7LL, v16) )
      {
        v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 160));
        CurrentStackLocation->FileObject->FsContext2 = DriverEntry;
        ++*(_DWORD *)(v8 + 80);
        KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 160), v19);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_qqDdd(
          WPP_GLOBAL_Control->DeviceExtension,
          CurrentStackLocation->Parameters.WMI.ProviderId,
          v17,
          v18,
          RemlockSize,
          a1,
          (char)v4,
          *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16),
          v4->RequestorMode,
          v9);
      }
    }
    ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels == v8 )
    {
      if ( ++HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) != 1 )
      {
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        goto LABEL_27;
      }
      if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
      {
        v24 = 0;
        do
        {
          v25 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v24;
          if ( !v25[19] )
          {
            v26 = v25[16];
            v25[16] = 1;
            ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
            if ( !v26 )
            {
              LOBYTE(v28) = 1;
              v12 = KbdEnableDisablePort(v28, v4, *((_QWORD *)v25 + 1), v25);
            }
            if ( v12 >= 0 )
            {
              v6 = 1;
            }
            else
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_qqq(WPP_GLOBAL_Control->DeviceExtension, v27, v29, 34);
              KeyboardClassLogError(a1, -1073414135, 10120, v12, 0, 0LL, CurrentStackLocation->MajorFunction);
              v25[16] = 0;
            }
            ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
          }
          ++v24;
        }
        while ( v24 < LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) );
        v15 = v32;
      }
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      if ( !v6 )
        goto LABEL_27;
    }
    else
    {
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      if ( *(_QWORD *)(v8 + 8) != a1 )
      {
        ++v4->CurrentLocation;
        ++v4->Tail.Overlay.CurrentStackLocation;
        v30 = IofCallDriver(*(PDEVICE_OBJECT *)(v8 + 16), v4);
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 32), v4, 0x20u);
        return v30;
      }
      LOBYTE(v20) = 1;
      v12 = KbdEnableDisablePort(v20, v4, v8, &CurrentStackLocation->FileObject);
      if ( v12 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqdq(
            WPP_GLOBAL_Control->DeviceExtension,
            v21,
            v22,
            v23,
            RemlockSize,
            a1,
            (char)v4,
            v12,
            *(_QWORD *)(v8 + 16));
        goto LABEL_27;
      }
    }
    v12 = 0;
LABEL_27:
    IoReleaseRemoveLockEx(v15, v4, 0x20u);
  }
LABEL_10:
  v4->IoStatus.Status = v12;
  v4->IoStatus.Information = 0LL;
  IofCompleteRequest(v4, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v13) = 5;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v13, 2LL);
    }
  }
  return (unsigned int)v12;
}
