/*
 * XREFs of IoInitializeRemoveLockEx @ 0x1403C5280
 * Callers:
 *     PopFxCreateDeviceCommon @ 0x140397404 (PopFxCreateDeviceCommon.c)
 *     DifIoInitializeRemoveLockExWrapper @ 0x1405E0370 (DifIoInitializeRemoveLockExWrapper.c)
 *     PopFxRegisterDeviceWorker @ 0x1408369AC (PopFxRegisterDeviceWorker.c)
 *     VfFilterAttach @ 0x140ADF22C (VfFilterAttach.c)
 * Callees:
 *     <none>
 */

void __stdcall IoInitializeRemoveLockEx(
        PIO_REMOVE_LOCK Lock,
        ULONG AllocateTag,
        ULONG MaxLockedMinutes,
        ULONG HighWatermark,
        ULONG RemlockSize)
{
  unsigned __int64 v6; // rcx

  if ( Lock )
  {
    if ( RemlockSize == 32 )
    {
LABEL_3:
      Lock->Common.Removed = 0;
      Lock->Common.IoCount = 1;
      Lock->Common.RemoveEvent.Header.WaitListHead.Blink = &Lock->Common.RemoveEvent.Header.WaitListHead;
      Lock->Common.RemoveEvent.Header.WaitListHead.Flink = &Lock->Common.RemoveEvent.Header.WaitListHead;
      LOWORD(Lock->Common.RemoveEvent.Header.Lock) = 1;
      Lock->Common.RemoveEvent.Header.Size = 6;
      Lock->Common.RemoveEvent.Header.SignalState = 0;
      return;
    }
    if ( RemlockSize == 120 )
    {
      *(_DWORD *)&Lock[1].Common.Removed = 1129270354;
      Lock[1].Common.IoCount = HighWatermark;
      v6 = MaxLockedMinutes * (unsigned __int64)KeMaximumIncrement;
      LODWORD(Lock[1].Common.RemoveEvent.Header.WaitListHead.Flink) = AllocateTag;
      *(_QWORD *)&Lock[2].Common.RemoveEvent.Header.Lock = 0LL;
      *(_QWORD *)&Lock[1].Common.RemoveEvent.Header.Lock = 600000000 * v6;
      LODWORD(Lock[2].Common.RemoveEvent.Header.WaitListHead.Flink) = 0;
      Lock[3].Common.RemoveEvent.Header.WaitListHead.Flink = 0LL;
      goto LABEL_3;
    }
  }
}
