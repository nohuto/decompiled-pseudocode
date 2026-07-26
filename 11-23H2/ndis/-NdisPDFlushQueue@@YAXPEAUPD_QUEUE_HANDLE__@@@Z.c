/*
 * XREFs of ?NdisPDFlushQueue@@YAXPEAUPD_QUEUE_HANDLE__@@@Z @ 0x1C007AFB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 */

void __fastcall NdisPDFlushQueue(struct PD_QUEUE_HANDLE__ *a1)
{
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x67u,
      (struct _GUID *)&WPP_8a0939a2660a33c5680df34f1733eef3_Traceguids,
      a1);
  _InterlockedExchange((volatile __int32 *)a1 + 12, 1);
  if ( *((_QWORD *)a1 + 5) )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Du,
          0x68u,
          (struct _GUID *)&WPP_8a0939a2660a33c5680df34f1733eef3_Traceguids,
          a1);
    }
    KeSetEvent(*((PRKEVENT *)a1 + 5), 2, 0);
  }
}
