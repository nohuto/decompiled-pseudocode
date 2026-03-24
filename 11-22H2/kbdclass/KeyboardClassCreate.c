/*
 * XREFs of KeyboardClassCreate @ 0x1C0001D90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0001310 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqdDdd @ 0x1C0002ED0 (WPP_RECORDER_SF_qqdDdd.c)
 *     KbdClassTraceLoggingDeniedCreateForReadWithSFAC @ 0x1C0004E50 (KbdClassTraceLoggingDeniedCreateForReadWithSFAC.c)
 *     KeyboardClassLogError @ 0x1C0005418 (KeyboardClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C000652C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqDdd @ 0x1C0006BA8 (WPP_RECORDER_SF_qqDdd.c)
 *     WPP_RECORDER_SF_qqdq @ 0x1C00072FC (WPP_RECORDER_SF_qqdq.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000752C (WPP_RECORDER_SF_qqq.c)
 *     KbdEnableDisablePort @ 0x1C000D010 (KbdEnableDisablePort.c)
 */

__int64 __fastcall KeyboardClassCreate(__int64 a1, IRP *a2, __int64 a3, int a4)
{
  IRP *v4; // rbx
  char v6; // r12
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v8; // rbp
  char v9; // di
  int v10; // edx
  NTSTATUS v11; // esi
  __int64 v12; // rdx
  struct _IO_REMOVE_LOCK *v14; // r13
  KPROCESSOR_MODE RequestorMode; // dl
  int v16; // r8d
  int v17; // r9d
  KIRQL v18; // al
  __int64 v19; // rcx
  int v20; // edx
  int v21; // r8d
  int v22; // r9d
  unsigned int v23; // r13d
  char *v24; // rbp
  char v25; // di
  int v26; // edx
  __int64 v27; // rcx
  int v28; // r8d
  unsigned int v29; // edi
  __int64 RemlockSize; // [rsp+20h] [rbp-78h]
  struct _IO_REMOVE_LOCK *v31; // [rsp+A8h] [rbp+10h]

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
  if ( v4->RequestorMode == 1 || (CurrentStackLocation->Flags & 1) != 0 )
  {
    v10 = *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16);
    if ( (v10 & 1) != 0 && (CurrentStackLocation->Parameters.Create.Options & 1) == 0 )
    {
      v11 = -1073741790;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqdDdd(WPP_GLOBAL_Control->DeviceExtension, v10, (unsigned int)&WPP_RECORDER_INITIALIZED, a4);
      if ( !v4->RequestorMode && v9 )
        KbdClassTraceLoggingDeniedCreateForReadWithSFAC(*(unsigned int *)(CurrentStackLocation->Parameters.WMI.ProviderId
                                                                        + 16));
      goto LABEL_10;
    }
  }
  v14 = (struct _IO_REMOVE_LOCK *)(v8 + 32);
  v31 = (struct _IO_REMOVE_LOCK *)(v8 + 32);
  v11 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 32), v4, File, 1u, 0x20u);
  if ( v11 >= 0 )
  {
    if ( *(_BYTE *)(v8 + 64) && !*(_BYTE *)(v8 + 65) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 2u, 0x20u, RemlockSize);
      v11 = -1073741823;
      goto LABEL_27;
    }
    CurrentStackLocation->Parameters.Create.Options &= ~1u;
    if ( *(_QWORD *)v8 == *(_QWORD *)(v8 + 8) )
    {
      if ( v9 )
        RequestorMode = 1;
      else
        RequestorMode = v4->RequestorMode;
      if ( SeSinglePrivilegeCheck((LUID)7LL, RequestorMode) )
      {
        v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 160));
        CurrentStackLocation->FileObject->FsContext2 = DriverEntry;
        ++*(_DWORD *)(v8 + 80);
        KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 160), v18);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_qqDdd(
          WPP_GLOBAL_Control->DeviceExtension,
          CurrentStackLocation->Parameters.WMI.ProviderId,
          v16,
          v17,
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
        v23 = 0;
        do
        {
          v24 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v23;
          if ( !v24[19] )
          {
            v25 = v24[16];
            v24[16] = 1;
            ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
            if ( !v25 )
            {
              LOBYTE(v27) = 1;
              v11 = KbdEnableDisablePort(v27, v4, *((_QWORD *)v24 + 1), v24);
            }
            if ( v11 >= 0 )
            {
              v6 = 1;
            }
            else
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_qqq(WPP_GLOBAL_Control->DeviceExtension, v26, v28, 34);
              KeyboardClassLogError(a1, -1073414135, 10120, v11, 0, 0LL, CurrentStackLocation->MajorFunction);
              v24[16] = 0;
            }
            ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
          }
          ++v23;
        }
        while ( v23 < LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) );
        v14 = v31;
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
        v29 = IofCallDriver(*(PDEVICE_OBJECT *)(v8 + 16), v4);
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 32), v4, 0x20u);
        return v29;
      }
      LOBYTE(v19) = 1;
      v11 = KbdEnableDisablePort(v19, v4, v8, &CurrentStackLocation->FileObject);
      if ( v11 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqdq(
            WPP_GLOBAL_Control->DeviceExtension,
            v20,
            v21,
            v22,
            RemlockSize,
            a1,
            (char)v4,
            v11,
            *(_QWORD *)(v8 + 16));
        goto LABEL_27;
      }
    }
    v11 = 0;
LABEL_27:
    IoReleaseRemoveLockEx(v14, v4, 0x20u);
  }
LABEL_10:
  v4->IoStatus.Status = v11;
  v4->IoStatus.Information = 0LL;
  IofCompleteRequest(v4, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v12) = 5;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v12, 2LL);
    }
  }
  return (unsigned int)v11;
}
