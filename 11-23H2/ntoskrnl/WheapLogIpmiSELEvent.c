/*
 * XREFs of WheapLogIpmiSELEvent @ 0x140613340
 * Callers:
 *     WheaSelLogErrorPkt @ 0x14061000C (WheaSelLogErrorPkt.c)
 *     WheaSelLogEvent @ 0x1406100F8 (WheaSelLogEvent.c)
 * Callees:
 *     memmove @ 0x140435700 (memmove.c)
 *     memset @ 0x140435A00 (memset.c)
 *     WheapLogIpmiSELEventHighIrql @ 0x1406133E0 (WheapLogIpmiSELEventHighIrql.c)
 */

__int64 __fastcall WheapLogIpmiSELEvent(void *Src, size_t Size, int a3)
{
  unsigned int v4; // ebx
  unsigned int v6; // r9d
  __int64 result; // rax

  v4 = Size;
  if ( LODWORD(WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink) )
  {
    memset((char *)&WheapDispatchPtr.DeviceQueue.DeviceListHead.Flink + 4, 0, 0xFECuLL);
    WheapDispatchPtr.AlignmentRequirement = 1381192527;
    *(&WheapDispatchPtr.AlignmentRequirement + 1) = 1;
    v6 = 4075;
    *(_DWORD *)(&WheapDispatchPtr.DeviceQueue.Size + 1) = a3;
    if ( v4 + 21 <= 0x1000 )
      v6 = v4;
    LODWORD(WheapDispatchPtr.DeviceQueue.DeviceListHead.Flink) = v6;
    *(_DWORD *)&WheapDispatchPtr.DeviceQueue.Type = v6 + 20;
    memmove((char *)&WheapDispatchPtr.DeviceQueue.DeviceListHead.Flink + 4, Src, v6);
    return WheapLogIpmiSELEventHighIrql();
  }
  return result;
}
