/*
 * XREFs of MouseClassCreate @ 0x1C0001C70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqdDdd @ 0x1C0002530 (WPP_RECORDER_SF_qqdDdd.c)
 *     MouClassTraceLoggingDeniedCreateForReadWithSFAC @ 0x1C0004820 (MouClassTraceLoggingDeniedCreateForReadWithSFAC.c)
 *     MouseClassLogError @ 0x1C0004BA8 (MouseClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C0005CCC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00063F4 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqDdd @ 0x1C0006518 (WPP_RECORDER_SF_qqDdd.c)
 *     WPP_RECORDER_SF_qqdq @ 0x1C0006C30 (WPP_RECORDER_SF_qqdq.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0006E60 (WPP_RECORDER_SF_qqq.c)
 *     MouEnableDisablePort @ 0x1C000D230 (MouEnableDisablePort.c)
 */

__int64 __fastcall MouseClassCreate(__int64 a1, IRP *a2, __int64 a3, int a4)
{
  IRP *v4; // rbx
  char v6; // r12
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 v8; // rbp
  char v9; // di
  struct _IO_REMOVE_LOCK *v10; // r13
  NTSTATUS v11; // esi
  KPROCESSOR_MODE RequestorMode; // dl
  int v13; // r8d
  int v14; // r9d
  KIRQL v15; // al
  __int64 v16; // rcx
  int v17; // edx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rdx
  int v22; // edx
  unsigned int v23; // r13d
  char *v24; // rax
  char v25; // di
  int v26; // edx
  __int64 v27; // rcx
  int v28; // r8d
  unsigned int v29; // edi
  ULONG RemlockSize; // [rsp+20h] [rbp-78h]
  LUID PrivilegeValue; // [rsp+A0h] [rbp+8h]

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
    v22 = *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16);
    if ( (v22 & 1) != 0 )
    {
      v11 = -1073741790;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqdDdd(WPP_GLOBAL_Control->DeviceExtension, v22, (unsigned int)&WPP_RECORDER_INITIALIZED, a4);
      if ( !v4->RequestorMode && v9 )
        MouClassTraceLoggingDeniedCreateForReadWithSFAC(*(unsigned int *)(CurrentStackLocation->Parameters.WMI.ProviderId
                                                                        + 16));
      goto LABEL_19;
    }
  }
  v10 = (struct _IO_REMOVE_LOCK *)(v8 + 32);
  v11 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 32), v4, File, 1u, 0x20u);
  if ( v11 >= 0 )
  {
    if ( *(_BYTE *)(v8 + 64) && !*(_BYTE *)(v8 + 65) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, 2, 2, 31, RemlockSize, a1, (char)v4);
      v11 = -1073741823;
      goto LABEL_18;
    }
    if ( *(_QWORD *)v8 == *(_QWORD *)(v8 + 8) )
    {
      if ( v9 )
        RequestorMode = 1;
      else
        RequestorMode = v4->RequestorMode;
      if ( SeSinglePrivilegeCheck((LUID)7LL, RequestorMode) )
      {
        v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 144));
        CurrentStackLocation->FileObject->FsContext2 = DriverEntry;
        ++*(_DWORD *)(v8 + 80);
        KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 144), v15);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_qqDdd(
          WPP_GLOBAL_Control->DeviceExtension,
          CurrentStackLocation->Parameters.WMI.ProviderId,
          v13,
          v14,
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
        goto LABEL_18;
      }
      if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
      {
        v23 = 0;
        do
        {
          v24 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v23;
          PrivilegeValue = (LUID)v24;
          if ( !v24[19] )
          {
            v25 = v24[16];
            v24[16] = 1;
            ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
            if ( !v25 )
            {
              LOBYTE(v27) = 1;
              v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))MouEnableDisablePort)(
                      v27,
                      v4,
                      *(_QWORD *)(*(_QWORD *)&PrivilegeValue + 8LL),
                      PrivilegeValue);
            }
            if ( v11 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_qqq(WPP_GLOBAL_Control->DeviceExtension, v26, v28, 33);
              MouseClassLogError(a1, -1073414135, 20120, v11, 0, 0LL, CurrentStackLocation->MajorFunction);
              *(_BYTE *)(*(_QWORD *)&PrivilegeValue + 16LL) = 0;
            }
            else
            {
              v6 = 1;
            }
            ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
          }
          ++v23;
        }
        while ( v23 < LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) );
        v10 = (struct _IO_REMOVE_LOCK *)(v8 + 32);
      }
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      if ( !v6 )
        goto LABEL_18;
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
      LOBYTE(v16) = 1;
      v11 = MouEnableDisablePort(v16, v4, v8, &CurrentStackLocation->FileObject);
      if ( v11 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqdq(
            WPP_GLOBAL_Control->DeviceExtension,
            v17,
            v18,
            v19,
            RemlockSize,
            a1,
            (char)v4,
            v11,
            *(_QWORD *)(v8 + 16));
        goto LABEL_18;
      }
    }
    v11 = 0;
LABEL_18:
    IoReleaseRemoveLockEx(v10, v4, 0x20u);
  }
LABEL_19:
  v4->IoStatus.Status = v11;
  v4->IoStatus.Information = 0LL;
  IofCompleteRequest(v4, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v20) = 5;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v20, 2LL);
    }
  }
  return (unsigned int)v11;
}
