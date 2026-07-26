/*
 * XREFs of NdisWritePcmciaAttributeMemory @ 0x1C00C6BF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ndisGetSetBusConfigSpace @ 0x1C00C66F0 (ndisGetSetBusConfigSpace.c)
 */

ULONG __stdcall NdisWritePcmciaAttributeMemory(NDIS_HANDLE NdisAdapterHandle, ULONG Offset, PVOID Buffer, ULONG Length)
{
  ULONG SetBusConfigSpace; // eax
  ULONG v9; // ebx
  char v11[4]; // [rsp+30h] [rbp-28h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      7u,
      0x1Au,
      (struct _GUID *)&WPP_4816aa3b0baa34f1d8e04600f3680c92_Traceguids,
      NdisAdapterHandle);
  SetBusConfigSpace = ndisGetSetBusConfigSpace((__int64)NdisAdapterHandle, Offset, (__int64)Buffer, Length, 1u, 0);
  v9 = SetBusConfigSpace;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = SetBusConfigSpace;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      7u,
      0x1Bu,
      (struct _GUID *)&WPP_4816aa3b0baa34f1d8e04600f3680c92_Traceguids,
      (char)NdisAdapterHandle,
      *(_DWORD *)v11);
  }
  return v9;
}
