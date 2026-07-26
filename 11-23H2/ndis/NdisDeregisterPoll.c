/*
 * XREFs of NdisDeregisterPoll @ 0x1C00C5110
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCCC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ??_GNdisPoll@@QEAAPEAXI@Z @ 0x1C00C50C8 (--_GNdisPoll@@QEAAPEAXI@Z.c)
 */

void __fastcall NdisDeregisterPoll(NdisPoll *P)
{
  KIRQL CurrentIrql; // al

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql )
    ndisBugCheckEx(0x2EuLL, 2uLL, CurrentIrql, 0LL);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xDu,
      (struct _GUID *)&WPP_b07d896841303d6dd5e4c2ea1f7441a9_Traceguids,
      P);
  NdisPoll::`scalar deleting destructor'(P, 0);
  ExFreePoolWithTag(P, 0);
}
