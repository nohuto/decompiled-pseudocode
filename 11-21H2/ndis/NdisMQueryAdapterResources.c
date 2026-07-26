/*
 * XREFs of NdisMQueryAdapterResources @ 0x1C005AB10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 */

void __stdcall NdisMQueryAdapterResources(
        PNDIS_STATUS Status,
        NDIS_HANDLE WrapperConfigurationContext,
        PNDIS_RESOURCE_LIST ResourceList,
        PUINT BufferSize)
{
  __int64 v4; // rsi
  __int64 v8; // rdx
  int v9; // ebx
  unsigned int v10; // ecx

  v4 = *((_QWORD *)WrapperConfigurationContext + 1);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x36u,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      *((_QWORD *)WrapperConfigurationContext + 1));
  v8 = *(_QWORD *)(v4 + 944);
  v9 = 0;
  if ( v8 )
  {
    v10 = 20 * *(_DWORD *)(v8 + 16) + 8;
    if ( *BufferSize >= v10 )
    {
      memmove(ResourceList, (const void *)(v8 + 12), v10);
    }
    else
    {
      *BufferSize = v10;
      v9 = -1073741670;
    }
  }
  else
  {
    v9 = -1073741823;
  }
  *Status = v9;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x37u,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      v4,
      v9);
}
