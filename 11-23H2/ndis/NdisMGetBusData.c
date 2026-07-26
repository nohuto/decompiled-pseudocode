/*
 * XREFs of NdisMGetBusData @ 0x1C003CEA0
 * Callers:
 *     ?ndisMReadPciPropertiesFromConfigSpace@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005C220 (-ndisMReadPciPropertiesFromConfigSpace@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

ULONG __stdcall NdisMGetBusData(
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
      0xEu,
      (struct _GUID *)&WPP_089a512067333d51f5b66ea612d009fe_Traceguids,
      NdisMiniportHandle);
  if ( (*((_DWORD *)NdisMiniportHandle + 922) & 0x40) != 0 )
    return 0;
  v11 = (__int64 (__fastcall *)(__int64, _QWORD, PVOID, _QWORD, ULONG))*((_QWORD *)NdisMiniportHandle + 463);
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
      0xFu,
      (struct _GUID *)&WPP_089a512067333d51f5b66ea612d009fe_Traceguids,
      (char)NdisMiniportHandle,
      *(_DWORD *)v13);
  }
  return v9;
}
