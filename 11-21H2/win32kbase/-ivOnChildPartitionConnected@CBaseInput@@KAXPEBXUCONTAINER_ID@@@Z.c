/*
 * XREFs of ?ivOnChildPartitionConnected@CBaseInput@@KAXPEBXUCONTAINER_ID@@@Z @ 0x1C01EF320
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z @ 0x1C01EEEF8 (-ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z.c)
 */

void __fastcall CBaseInput::ivOnChildPartitionConnected(int a1, char a2)
{
  char v2; // r9
  int v3; // r8d
  __int64 v4; // rcx
  bool v5; // dl

  v2 = a1;
  v3 = 6 * a1;
  v4 = (__int64)*(&qword_1C0288018 + 6 * a1);
  if ( v4 )
  {
    CBaseInput::ivInitialSendPnpForChildPartition(v4, a2);
  }
  else
  {
    v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        18,
        (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids,
        v2);
    }
  }
}
