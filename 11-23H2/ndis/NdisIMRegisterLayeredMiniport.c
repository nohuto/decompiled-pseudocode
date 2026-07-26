/*
 * XREFs of NdisIMRegisterLayeredMiniport @ 0x1C005E8B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x1C011E4A8 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 *     ?ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z @ 0x1C0153954 (-ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z.c)
 */

NDIS_STATUS __stdcall NdisIMRegisterLayeredMiniport(
        NDIS_HANDLE NdisWrapperHandle,
        PNDIS_MINIPORT_CHARACTERISTICS MiniportCharacteristics,
        UINT CharacteristicsLength,
        PNDIS_HANDLE DriverHandle)
{
  NDIS_STATUS v8; // ebx
  char *v9; // rcx

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xCu,
      (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
      NdisWrapperHandle);
  ndisIfEnsureNsiInitialized();
  if ( *(_BYTE *)MiniportCharacteristics < 6u )
  {
    v8 = ndisRegisterMiniportDriver(
           NdisWrapperHandle,
           (struct _NDIS51_MINIPORT_CHARACTERISTICS *)MiniportCharacteristics,
           CharacteristicsLength,
           DriverHandle);
    if ( !v8 )
    {
      v9 = (char *)*DriverHandle;
      *((_WORD *)v9 + 13) |= 1u;
      KeInitializeMutex((PRKMUTEX)(v9 + 416), 0xFFFFu);
    }
  }
  else
  {
    v8 = -1073676284;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xDu,
      (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
      (char)*DriverHandle,
      v8);
  return v8;
}
