/*
 * XREFs of NdisIfRegisterProvider @ 0x1C002F970
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000CDB0 (WPP_RECORDER_SF_qqL.c)
 *     ?ndisIfRegisterProviderInternal@@YAHPEAU_NDIS_IF_PROVIDER_CHARACTERISTICS@@PEAXPEAPEAX@Z @ 0x1C002F844 (-ndisIfRegisterProviderInternal@@YAHPEAU_NDIS_IF_PROVIDER_CHARACTERISTICS@@PEAXPEAPEAX@Z.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x1C011E4A8 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 */

NDIS_STATUS __stdcall NdisIfRegisterProvider(
        PNDIS_IF_PROVIDER_CHARACTERISTICS ProviderCharacteristics,
        NDIS_HANDLE IfProviderContext,
        PNDIS_HANDLE pNdisIfProviderHandle)
{
  NDIS_STATUS v6; // eax
  NDIS_STATUS v7; // ebx
  char v9[4]; // [rsp+38h] [rbp-10h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xAu,
      (struct _GUID *)&WPP_05716c62bb2536c54c77dd3b41b95439_Traceguids,
      IfProviderContext);
  ndisIfEnsureNsiInitialized();
  v6 = ndisIfRegisterProviderInternal(ProviderCharacteristics, IfProviderContext, pNdisIfProviderHandle);
  v7 = v6;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = v6;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xBu,
      (struct _GUID *)&WPP_05716c62bb2536c54c77dd3b41b95439_Traceguids,
      (char)IfProviderContext,
      (char)pNdisIfProviderHandle,
      *(_DWORD *)v9);
  }
  return v7;
}
