/*
 * XREFs of ?NdisPDCompleteFetchedItems@@YAXPEAUPD_QUEUE_HANDLE__@@K@Z @ 0x1C007ADC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 */

void __fastcall NdisPDCompleteFetchedItems(struct PD_QUEUE_HANDLE__ *a1, unsigned int a2)
{
  int v2; // r8d
  int v3; // r9d
  unsigned int v5; // eax

  v2 = *((_DWORD *)a1 + 33);
  v3 = *((_DWORD *)a1 + 13);
  v5 = v3 & (*((_DWORD *)a1 + 34) - v2);
  if ( a2 < v5 )
    v5 = a2;
  *((_DWORD *)a1 + 33) = v3 & (v2 + v5);
  if ( *((_QWORD *)a1 + 4) && _InterlockedCompareExchange((volatile signed __int32 *)a1 + 32, 0, 1) == 1 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Du,
          0x63u,
          (struct _GUID *)&WPP_8a0939a2660a33c5680df34f1733eef3_Traceguids,
          a1);
    }
    KeSetEvent(*((PRKEVENT *)a1 + 4), 2, 0);
  }
}
