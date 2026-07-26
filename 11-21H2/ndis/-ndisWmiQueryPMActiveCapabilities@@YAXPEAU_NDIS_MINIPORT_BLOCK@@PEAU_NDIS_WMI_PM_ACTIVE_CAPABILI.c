/*
 * XREFs of ?ndisWmiQueryPMActiveCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ACTIVE_CAPABILITIES@@@Z @ 0x1C00944CC
 * Callers:
 *     ndisQueryGuidData @ 0x1C00271A0 (ndisQueryGuidData.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisWmiQueryPMActiveCapabilities(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *a2)
{
  NDIS_PM_CAPABILITY_STATE v2; // eax
  NDIS_PM_CAPABILITY_STATE v3; // eax
  NDIS_PM_CAPABILITY_STATE v4; // eax
  NDIS_PM_CAPABILITY_STATE v5; // eax
  NDIS_PM_CAPABILITY_STATE v6; // eax
  NDIS_PM_CAPABILITY_STATE v7; // eax

  a2->WakeOnPattern = NdisPMAdminConfigInactive;
  if ( (unsigned int)(a1->PMHardwareCapabilities.MinPatternWakeUp - 2) <= 2 )
  {
    v2 = NdisPMAdminConfigInactive;
    if ( (a1->PMCurrentParameters.EnabledWoLPacketPatterns & 1) != 0 )
      v2 = NdisPMAdminConfigActive;
    a2->WakeOnPattern = v2;
  }
  else
  {
    a2->WakeOnPattern = NdisPMAdminConfigUnsupported;
  }
  a2->WakeOnMagicPacket = NdisPMAdminConfigInactive;
  if ( (unsigned int)(a1->PMHardwareCapabilities.MinMagicPacketWakeUp - 2) <= 2 )
  {
    v3 = NdisPMAdminConfigInactive;
    if ( (a1->PMCurrentParameters.EnabledWoLPacketPatterns & 2) != 0 )
      v3 = NdisPMAdminConfigActive;
    a2->WakeOnMagicPacket = v3;
  }
  else
  {
    a2->WakeOnMagicPacket = NdisPMAdminConfigUnsupported;
  }
  a2->DeviceSleepOnDisconnect = NdisPMAdminConfigInactive;
  if ( (unsigned int)(a1->PMHardwareCapabilities.MinLinkChangeWakeUp - 2) <= 2 )
  {
    v4 = NdisPMAdminConfigInactive;
    if ( (a1->WSyncFlags & 8) != 0 )
      v4 = NdisPMAdminConfigActive;
    a2->DeviceSleepOnDisconnect = v4;
  }
  else
  {
    a2->DeviceSleepOnDisconnect = NdisPMAdminConfigUnsupported;
  }
  a2->PMARPOffload = NdisPMAdminConfigInactive;
  if ( (a1->PMHardwareCapabilities.SupportedProtocolOffloads & 1) != 0 )
  {
    v5 = NdisPMAdminConfigInactive;
    if ( (a1->PMCurrentParameters.EnabledProtocolOffloads & 1) != 0 )
      v5 = NdisPMAdminConfigActive;
    a2->PMARPOffload = v5;
  }
  else
  {
    a2->PMARPOffload = NdisPMAdminConfigUnsupported;
  }
  a2->PMNSOffload = NdisPMAdminConfigInactive;
  if ( (a1->PMHardwareCapabilities.SupportedProtocolOffloads & 2) != 0 )
  {
    v6 = NdisPMAdminConfigInactive;
    if ( (a1->PMCurrentParameters.EnabledProtocolOffloads & 2) != 0 )
      v6 = NdisPMAdminConfigActive;
    a2->PMNSOffload = v6;
  }
  else
  {
    a2->PMNSOffload = NdisPMAdminConfigUnsupported;
  }
  a2->PMWiFiRekeyOffload = NdisPMAdminConfigInactive;
  if ( (a1->PMHardwareCapabilities.SupportedProtocolOffloads & 0x80u) != 0 )
  {
    v7 = NdisPMAdminConfigInactive;
    if ( SLOBYTE(a1->PMCurrentParameters.EnabledProtocolOffloads) < 0 )
      v7 = NdisPMAdminConfigActive;
    a2->PMWiFiRekeyOffload = v7;
  }
  else
  {
    a2->PMWiFiRekeyOffload = NdisPMAdminConfigUnsupported;
  }
}
