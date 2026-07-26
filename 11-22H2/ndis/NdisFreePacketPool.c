/*
 * XREFs of NdisFreePacketPool @ 0x1C00C5B30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisFreePacketPoolInternal@@YAXPEAXE@Z @ 0x1C00C5944 (-ndisFreePacketPoolInternal@@YAXPEAXE@Z.c)
 */

void __stdcall NdisFreePacketPool(NDIS_HANDLE PoolHandle)
{
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0xCu,
      (struct _GUID *)&WPP_6bf195b864a83f4f583394206a2d0b8f_Traceguids,
      PoolHandle);
  ndisFreePacketPoolInternal((struct _NDIS_PKT_POOL *)PoolHandle);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0xDu,
      (struct _GUID *)&WPP_6bf195b864a83f4f583394206a2d0b8f_Traceguids,
      PoolHandle);
}
