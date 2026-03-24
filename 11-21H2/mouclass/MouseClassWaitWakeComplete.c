/*
 * XREFs of MouseClassWaitWakeComplete @ 0x1C00054D0
 * Callers:
 *     <none>
 * Callees:
 *     MouseToggleWaitWake @ 0x1C00056DC (MouseToggleWaitWake.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0005EE0 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0006710 (WPP_RECORDER_SF_qqd.c)
 */

void __fastcall MouseClassWaitWakeComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context,
        PIO_STATUS_BLOCK IoStatus)
{
  struct _IO_STATUS_BLOCK *v6; // rdi
  KIRQL v7; // al
  struct _IO_STATUS_BLOCK *v8; // rdx
  int v9; // edx
  int v10; // r8d
  NTSTATUS Status; // eax
  NTSTATUS v12; // ecx
  int v13; // edx
  int v14; // r8d
  int v15; // r9d

  v6 = 0LL;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 9);
  v8 = (struct _IO_STATUS_BLOCK *)*((_QWORD *)Context + 37);
  if ( v8 && IoStatus == &v8[3] )
  {
    *((_QWORD *)Context + 37) = 0LL;
LABEL_7:
    v6 = v8;
    goto LABEL_8;
  }
  v8 = (struct _IO_STATUS_BLOCK *)*((_QWORD *)Context + 35);
  if ( v8 && IoStatus == &v8[3] )
  {
    *((_QWORD *)Context + 35) = 0LL;
    *((_BYTE *)Context + 288) = 0;
    goto LABEL_7;
  }
LABEL_8:
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 9, v7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qqd(WPP_GLOBAL_Control->DeviceExtension, v9, v10, 86);
  }
  Status = IoStatus->Status;
  v12 = IoStatus->Status;
  if ( IoStatus->Status != -2147483631
    && Status != -1073741536
    && Status != -1073741436
    && Status != -1073741101
    && Status != -1072431071 )
  {
    if ( Status )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_qqd(WPP_GLOBAL_Control->DeviceExtension, v9, v10, 88);
      }
      if ( (int)MouseToggleWaitWake(Context, 0LL) < 0
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_qd(WPP_GLOBAL_Control->DeviceExtension, v13, v14, v15);
      }
      goto LABEL_25;
    }
    PoRequestPowerIrp(
      *((PDEVICE_OBJECT *)Context + 3),
      2u,
      (POWER_STATE)1,
      (PREQUEST_POWER_COMPLETE)MouseClassWWPowerUpComplete,
      Context,
      0LL);
    v12 = IoStatus->Status;
  }
  if ( v12 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_qqd(WPP_GLOBAL_Control->DeviceExtension, v9, v10, 87);
  }
LABEL_25:
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)Context + 1, v6, 0x20u);
}
