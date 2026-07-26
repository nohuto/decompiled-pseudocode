/*
 * XREFs of NdisMDeregisterAdapterShutdownHandler @ 0x1C005A4C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00147A8 (-ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __stdcall NdisMDeregisterAdapterShutdownHandler(NDIS_HANDLE MiniportHandle)
{
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x31u,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      MiniportHandle);
  ndisMDeregisterBugCheckHandler((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle);
  *((_QWORD *)MiniportHandle + 258) = 0LL;
  *((_QWORD *)MiniportHandle + 257) = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x32u,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      MiniportHandle);
}
