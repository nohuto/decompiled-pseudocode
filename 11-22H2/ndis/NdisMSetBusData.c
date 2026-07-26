/*
 * XREFs of NdisMSetBusData @ 0x1C005CA30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 */

ULONG __stdcall NdisMSetBusData(
        NDIS_HANDLE NdisMiniportHandle,
        ULONG WhichSpace,
        ULONG Offset,
        PVOID Buffer,
        ULONG Length)
{
  ULONG v9; // ebx
  __int64 (__fastcall *v11)(__int64, _QWORD, PVOID, _QWORD, ULONG); // r10
  __int64 v12; // rcx
  char v13[4]; // [rsp+30h] [rbp-28h]

  v9 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      7u,
      0x10u,
      (struct _GUID *)&WPP_089a512067333d51f5b66ea612d009fe_Traceguids,
      NdisMiniportHandle);
  if ( (*((_DWORD *)NdisMiniportHandle + 922) & 0x80u) != 0 )
    return 0;
  v11 = (__int64 (__fastcall *)(__int64, _QWORD, PVOID, _QWORD, ULONG))*((_QWORD *)NdisMiniportHandle + 462);
  if ( v11 )
  {
    v12 = *((_QWORD *)NdisMiniportHandle + 464);
    if ( v12 )
      v9 = v11(v12, WhichSpace, Buffer, Offset, Length);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v13 = v9;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      7u,
      0x11u,
      (struct _GUID *)&WPP_089a512067333d51f5b66ea612d009fe_Traceguids,
      (char)NdisMiniportHandle,
      *(_DWORD *)v13);
  }
  return v9;
}
