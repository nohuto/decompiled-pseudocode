/*
 * XREFs of NdisImmediateWritePciSlotInformation @ 0x1C0157640
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ndisGetSetBusConfigSpace @ 0x1C00C66F0 (ndisGetSetBusConfigSpace.c)
 */

__int64 __fastcall NdisImmediateWritePciSlotInformation(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v5; // rbx
  unsigned int SetBusConfigSpace; // edi

  v5 = *(_QWORD *)(a1 + 8);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      7u,
      0x12u,
      (struct _GUID *)&WPP_4816aa3b0baa34f1d8e04600f3680c92_Traceguids,
      v5);
  SetBusConfigSpace = ndisGetSetBusConfigSpace(v5, a3, a4, a5, 0, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      7u,
      0x13u,
      (struct _GUID *)&WPP_4816aa3b0baa34f1d8e04600f3680c92_Traceguids,
      v5);
  return SetBusConfigSpace;
}
