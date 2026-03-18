/*
 * XREFs of RtlHashUnicodeString @ 0x1406D9430
 * Callers:
 *     PiUEventHashStringIntoBucket @ 0x14031CEB8 (PiUEventHashStringIntoBucket.c)
 *     KsepCacheHwIdHash @ 0x14036A0D0 (KsepCacheHwIdHash.c)
 *     CarLiveDumpCallBack @ 0x1405D5BA0 (CarLiveDumpCallBack.c)
 *     PnpGenerateDeviceIdsHash @ 0x14079C558 (PnpGenerateDeviceIdsHash.c)
 *     PipFindDeviceOverrideEntry @ 0x1407C1484 (PipFindDeviceOverrideEntry.c)
 *     SepGetCachedHandlesEntry @ 0x1407F465C (SepGetCachedHandlesEntry.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14081A5F0 (PiCreateDriverSwDeviceCallback.c)
 *     KsepCacheDeviceHash @ 0x140855940 (KsepCacheDeviceHash.c)
 *     PiDmObjectCreate @ 0x14086B75C (PiDmObjectCreate.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x14087C92C (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgResolveVariable @ 0x14087EC00 (PiDevCfgResolveVariable.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140984C30 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x140986478 (PopPluginQuerySocSubsystemBlockingTime.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x1409865B4 (PopPluginQuerySocSubsystemMetadata.c)
 *     PipInitDeviceOverrideCache @ 0x140B3C2C8 (PipInitDeviceOverrideCache.c)
 * Callees:
 *     NLS_UPCASE @ 0x14022D310 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D370 (PsGetCurrentServerSiloGlobals.c)
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
