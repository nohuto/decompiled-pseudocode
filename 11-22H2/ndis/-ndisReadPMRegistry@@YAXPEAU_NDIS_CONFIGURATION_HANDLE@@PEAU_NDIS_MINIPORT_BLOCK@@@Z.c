/*
 * XREFs of ?ndisReadPMRegistry@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002BBF0
 * Callers:
 *     ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1C011ABFC (-ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 * Callees:
 *     ?ndisReadPMAdminConfigState@@YA?AW4_NDIS_PM_ADMIN_CONFIG_STATE@@PEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@@Z @ 0x1C002BD40 (-ndisReadPMAdminConfigState@@YA-AW4_NDIS_PM_ADMIN_CONFIG_STATE@@PEAU_NDIS_CONFIGURATION_HANDLE@@.c)
 */

void __fastcall ndisReadPMRegistry(NDIS_HANDLE ConfigurationHandle, struct _NDIS_MINIPORT_BLOCK *a2)
{
  enum _NDIS_PM_ADMIN_CONFIG_STATE PMAdminConfigState; // eax
  unsigned int Flags; // edx
  unsigned int v6; // eax
  unsigned int v7; // ecx

  a2->PMAdminConfig.Value ^= (a2->PMAdminConfig.Value ^ ndisReadPMAdminConfigState(
                                                          ConfigurationHandle,
                                                          &WakeOnPatternStr)) & 3;
  a2->PMAdminConfig.Value ^= (a2->PMAdminConfig.Value ^ (4
                                                       * ndisReadPMAdminConfigState(
                                                           ConfigurationHandle,
                                                           &WakeOnMagicPacketStr))) & 0xC;
  a2->PMAdminConfig.Value ^= (a2->PMAdminConfig.Value ^ (16
                                                       * ndisReadPMAdminConfigState(
                                                           ConfigurationHandle,
                                                           &DeviceSleepOnDisconnectStr))) & 0x30;
  a2->PMAdminConfig.Value ^= (a2->PMAdminConfig.Value ^ (ndisReadPMAdminConfigState(
                                                           ConfigurationHandle,
                                                           &PMARPOffloadStr) << 6)) & 0xC0;
  a2->PMAdminConfig.Value ^= (a2->PMAdminConfig.Value ^ (ndisReadPMAdminConfigState(
                                                           ConfigurationHandle,
                                                           &PMNSOffloadStr) << 8)) & 0x300;
  a2->PMAdminConfig.Value ^= (a2->PMAdminConfig.Value ^ (ndisReadPMAdminConfigState(
                                                           ConfigurationHandle,
                                                           &PMWiFiRekeyOffloadStr) << 10)) & 0xC00;
  a2->PMAdminConfig.Value ^= (a2->PMAdminConfig.Value ^ (ndisReadPMAdminConfigState(
                                                           ConfigurationHandle,
                                                           &SelectiveSuspendStr) << 12)) & 0x3000;
  PMAdminConfigState = ndisReadPMAdminConfigState(ConfigurationHandle, &NicAutoPowerSaverStr);
  Flags = a2->Flags;
  v6 = a2->PMAdminConfig.Value ^ (a2->PMAdminConfig.Value ^ (PMAdminConfigState << 14)) & 0xC000;
  a2->PMAdminConfig.Value = v6;
  v7 = v6;
  if ( (Flags & 0x80u) != 0 && (Flags & 0x100) == 0 )
  {
    v7 = v6 & 0xFFFFCFFF | 0x2000;
    a2->PMAdminConfig.Value = v7;
  }
  if ( (v7 & 0xC000) != 0 )
    a2->PMAdminConfig.Value = v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)(v7 >> 2)) & 0x3000;
}
