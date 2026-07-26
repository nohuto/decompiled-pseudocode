/*
 * XREFs of ?ndisReadPMAdminConfigState@@YA?AW4_NDIS_PM_ADMIN_CONFIG_STATE@@PEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@@Z @ 0x1C00304A0
 * Callers:
 *     ?ndisReadPMRegistry@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0030354 (-ndisReadPMRegistry@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     NdisReadConfiguration @ 0x1C001B4B0 (NdisReadConfiguration.c)
 */

__int64 __fastcall ndisReadPMAdminConfigState(NDIS_HANDLE ConfigurationHandle, PNDIS_STRING Keyword)
{
  unsigned int v2; // ebx
  int v4; // [rsp+50h] [rbp+18h] BYREF
  PNDIS_CONFIGURATION_PARAMETER v5; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0;
  v4 = 0;
  v5 = 0LL;
  NdisReadConfiguration(&v4, &v5, ConfigurationHandle, Keyword, NdisParameterInteger);
  if ( !v4 )
    return (unsigned int)(v5->ParameterData.IntegerData != 0) + 1;
  return v2;
}
