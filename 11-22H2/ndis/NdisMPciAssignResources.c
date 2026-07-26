/*
 * XREFs of NdisMPciAssignResources @ 0x1C005FC80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 */

NDIS_STATUS __stdcall NdisMPciAssignResources(
        NDIS_HANDLE MiniportHandle,
        ULONG SlotNumber,
        PNDIS_RESOURCE_LIST *AssignedResources)
{
  __int64 v5; // rax

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x33u,
      (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
      MiniportHandle);
  if ( *((_DWORD *)MiniportHandle + 930) == 5 && (v5 = *((_QWORD *)MiniportHandle + 118)) != 0 )
  {
    *AssignedResources = (PNDIS_RESOURCE_LIST)(v5 + 12);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x35u,
        (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
        MiniportHandle);
    return 0;
  }
  else
  {
    *AssignedResources = 0LL;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x34u,
        (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
        MiniportHandle);
    return -1073741823;
  }
}
