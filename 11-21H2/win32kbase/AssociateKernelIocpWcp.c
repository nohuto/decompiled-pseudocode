/*
 * XREFs of AssociateKernelIocpWcp @ 0x1C0037F90
 * Callers:
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C0037F08 (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 */

__int64 __fastcall AssociateKernelIocpWcp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edx
  int v5; // ebx
  int v6; // r8d

  v5 = ZwAssociateWaitCompletionPacket(a1, a2, a3, a4);
  if ( v5 < 0 )
  {
    LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        v6,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        17,
        15,
        (__int64)&WPP_afdc3993018130db7fa6d08e89ab931d_Traceguids,
        v5);
    }
  }
  return (unsigned int)v5;
}
