/*
 * XREFs of IoInitializeRemoveLockEx @ 0x14025A9C0
 * Callers:
 *     sub_1403BA410 @ 0x1403BA410 (sub_1403BA410.c)
 *     sub_14060F8E0 @ 0x14060F8E0 (sub_14060F8E0.c)
 *     sub_140823988 @ 0x140823988 (sub_140823988.c)
 *     sub_140A9E12C @ 0x140A9E12C (sub_140A9E12C.c)
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
      v6 = MaxLockedMinutes * (unsigned __int64)DesiredTime;
      LODWORD(Lock[1].Common.RemoveEvent.Header.WaitListHead.Flink) = AllocateTag;
      *(_QWORD *)&Lock[2].Common.RemoveEvent.Header.Lock = 0LL;
      *(_QWORD *)&Lock[1].Common.RemoveEvent.Header.Lock = 600000000 * v6;
      LODWORD(Lock[2].Common.RemoveEvent.Header.WaitListHead.Flink) = 0;
      Lock[3].Common.RemoveEvent.Header.WaitListHead.Flink = 0LL;
      goto LABEL_3;
    }
  }
}
