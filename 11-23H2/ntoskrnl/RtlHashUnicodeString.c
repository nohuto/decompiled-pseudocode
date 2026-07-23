/*
 * XREFs of RtlHashUnicodeString @ 0x1406D9460
 * Callers:
 *     PiUEventHashStringIntoBucket @ 0x14031D148 (PiUEventHashStringIntoBucket.c)
 *     KsepCacheHwIdHash @ 0x14036A270 (KsepCacheHwIdHash.c)
 *     CarLiveDumpCallBack @ 0x1405D6110 (CarLiveDumpCallBack.c)
 *     PnpGenerateDeviceIdsHash @ 0x14079C748 (PnpGenerateDeviceIdsHash.c)
 *     PipFindDeviceOverrideEntry @ 0x1407C1754 (PipFindDeviceOverrideEntry.c)
 *     SepGetCachedHandlesEntry @ 0x1407F492C (SepGetCachedHandlesEntry.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14081A8C0 (PiCreateDriverSwDeviceCallback.c)
 *     KsepCacheDeviceHash @ 0x140855C40 (KsepCacheDeviceHash.c)
 *     PiDmObjectCreate @ 0x14086B99C (PiDmObjectCreate.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x14087CB6C (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgResolveVariable @ 0x14087EE40 (PiDevCfgResolveVariable.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140984E30 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x140986678 (PopPluginQuerySocSubsystemBlockingTime.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x1409867B4 (PopPluginQuerySocSubsystemMetadata.c)
 *     PipInitDeviceOverrideCache @ 0x140B3C2C8 (PipInitDeviceOverrideCache.c)
 * Callees:
 *     NLS_UPCASE @ 0x14022D420 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 */

NTSTATUS __stdcall RtlHashUnicodeString(
        PCUNICODE_STRING String,
        BOOLEAN CaseInSensitive,
        ULONG HashAlgorithm,
        PULONG HashValue)
{
  ULONG v5; // ebx
  char v6; // dl
  __int64 v7; // rbp
  unsigned int v8; // r8d
  unsigned __int16 *v9; // r9
  ULONG v10; // r10d
  unsigned __int16 *v11; // rdi
  int v12; // r11d
  unsigned __int16 v13; // dx
  int v14; // r11d
  int v16; // eax

  v5 = 0;
  v7 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 154);
  if ( !v9 )
    return -1073741811;
  if ( !HashValue )
    return -1073741811;
  v11 = (unsigned __int16 *)*((_QWORD *)v9 + 1);
  *HashValue = v10;
  v12 = *v9 >> 1;
  if ( v8 > 1 )
    return -1073741811;
  if ( v12 )
  {
    if ( v6 )
    {
      do
      {
        v13 = *v11++;
        v5 = NLS_UPCASE(v7, v13) + 65599 * v5;
      }
      while ( v14 != 1 );
    }
    else
    {
      do
      {
        v16 = *v11++;
        v5 = v16 + 65599 * v5;
        --v12;
      }
      while ( v12 );
    }
  }
  *HashValue = v5;
  return v10;
}
