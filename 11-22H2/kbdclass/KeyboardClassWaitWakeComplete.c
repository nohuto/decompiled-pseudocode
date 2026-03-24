/*
 * XREFs of KeyboardClassWaitWakeComplete @ 0x1C0006020
 * Callers:
 *     <none>
 * Callees:
 *     KeyboardToggleWaitWake @ 0x1C0006234 (KeyboardToggleWaitWake.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0006994 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0007094 (WPP_RECORDER_SF_qqd.c)
 */

void __fastcall KeyboardClassWaitWakeComplete(
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
  NTSTATUS Status; // eax
  int v11; // edx
  int v12; // r8d
  int v13; // r9d

  v6 = 0LL;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 9);
  v8 = (struct _IO_STATUS_BLOCK *)*((_QWORD *)Context + 39);
  if ( v8 && IoStatus == &v8[3] )
  {
    *((_QWORD *)Context + 39) = 0LL;
LABEL_7:
    v6 = v8;
    goto LABEL_8;
  }
  v8 = (struct _IO_STATUS_BLOCK *)*((_QWORD *)Context + 37);
  if ( v8 && IoStatus == &v8[3] )
  {
    *((_QWORD *)Context + 37) = 0LL;
    *((_BYTE *)Context + 304) = 0;
    goto LABEL_7;
  }
LABEL_8:
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 9, v7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qqd(WPP_GLOBAL_Control->DeviceExtension, v9, 5, 92);
  }
  Status = IoStatus->Status;
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
        WPP_RECORDER_SF_qqd(WPP_GLOBAL_Control->DeviceExtension, v9, 5, 94);
      }
      if ( (int)KeyboardToggleWaitWake(Context, 0LL) < 0
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_qd(WPP_GLOBAL_Control->DeviceExtension, v11, v12, v13);
      }
      goto LABEL_25;
    }
    PoRequestPowerIrp(
      *((PDEVICE_OBJECT *)Context + 3),
      2u,
      (POWER_STATE)1,
      (PREQUEST_POWER_COMPLETE)KeyboardClassWWPowerUpComplete,
      Context,
      0LL);
  }
  if ( IoStatus->Status < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_qqd(WPP_GLOBAL_Control->DeviceExtension, v9, 5, 93);
  }
LABEL_25:
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)Context + 1, v6, 0x20u);
}
